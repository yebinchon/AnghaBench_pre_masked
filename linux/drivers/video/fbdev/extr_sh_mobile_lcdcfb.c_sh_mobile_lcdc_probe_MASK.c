
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {int irq; struct sh_mobile_lcdc_overlay* overlays; struct sh_mobile_lcdc_chan* ch; int base; int forced_fourcc; int hw_usecnt; TYPE_2__* dev; } ;
struct sh_mobile_lcdc_overlay {struct sh_mobile_lcdc_chan* channel; struct sh_mobile_lcdc_chan* cfg; } ;
struct sh_mobile_lcdc_info {struct sh_mobile_lcdc_chan* overlays; int clock_source; struct sh_mobile_lcdc_chan* ch; } ;
struct TYPE_6__ {scalar_t__ max_brightness; } ;
struct sh_mobile_lcdc_chan {int chan; int fourcc; int reg_offs; int enabled; int bl; TYPE_1__ bl_info; struct sh_mobile_lcdc_chan* cfg; int vsync_completion; int frame_end_wait; struct sh_mobile_lcdc_priv* lcdc; int open_lock; } ;
struct resource {int start; } ;
struct TYPE_7__ {struct sh_mobile_lcdc_info* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 struct sh_mobile_lcdc_priv* FUNC_7 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct sh_mobile_lcdc_priv*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int,int ,int ,int ,struct sh_mobile_lcdc_priv*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (TYPE_2__*,struct sh_mobile_lcdc_chan*) ;
 int FUNC_16 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_17 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_18 (struct sh_mobile_lcdc_chan*) ;
 int VAR_9 ;
 int FUNC_19 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_20 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_21 (struct platform_device*) ;
 int FUNC_22 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_23 (struct sh_mobile_lcdc_priv*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_10)
{
 struct sh_mobile_lcdc_info *VAR_11 = VAR_10->dev.platform_data;
 struct sh_mobile_lcdc_priv *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_11) {
  FUNC_2(&VAR_10->dev, "no platform data defined\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_10(VAR_10, VAR_4, 0);
 VAR_16 = FUNC_9(VAR_10, 0);
 if (!VAR_13 || VAR_16 < 0) {
  FUNC_2(&VAR_10->dev, "cannot get platform resources\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->dev = &VAR_10->dev;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->ch); VAR_17++)
  FUNC_8(&VAR_12->ch[VAR_17].open_lock);
 FUNC_11(VAR_10, VAR_12);

 VAR_15 = FUNC_13(VAR_16, VAR_9, 0,
       FUNC_3(&VAR_10->dev), VAR_12);
 if (VAR_15) {
  FUNC_2(&VAR_10->dev, "unable to request irq\n");
  goto err1;
 }

 VAR_12->irq = VAR_16;
 FUNC_1(&VAR_12->hw_usecnt, -1);

 for (VAR_17 = 0, VAR_14 = 0; VAR_17 < FUNC_0(VAR_11->ch); VAR_17++) {
  struct sh_mobile_lcdc_chan *VAR_18 = VAR_12->ch + VAR_14;

  VAR_18->lcdc = VAR_12;
  VAR_18->cfg = &VAR_11->ch[VAR_17];

  VAR_15 = FUNC_18(VAR_18);
  if (VAR_15) {
   FUNC_2(&VAR_10->dev, "unsupported interface type\n");
   goto err1;
  }
  FUNC_5(&VAR_18->frame_end_wait);
  FUNC_4(&VAR_18->vsync_completion);


  if (VAR_18->cfg->bl_info.max_brightness)
   VAR_18->bl = FUNC_15(&VAR_10->dev, VAR_18);

  switch (VAR_11->ch[VAR_17].chan) {
  case 129:
   VAR_18->enabled = VAR_5;
   VAR_18->reg_offs = VAR_7;
   VAR_14++;
   break;
  case 128:
   VAR_18->enabled = VAR_6;
   VAR_18->reg_offs = VAR_8;
   VAR_14++;
   break;
  }
 }

 if (!VAR_14) {
  FUNC_2(&VAR_10->dev, "no channels defined\n");
  VAR_15 = -VAR_0;
  goto err1;
 }


 if (VAR_14 == 2)
  VAR_12->forced_fourcc = VAR_11->ch[0].fourcc;

 VAR_12->base = FUNC_6(VAR_13->start, FUNC_14(VAR_13));
 if (!VAR_12->base) {
  VAR_15 = -VAR_2;
  goto err1;
 }

 VAR_15 = FUNC_22(VAR_12, VAR_11->clock_source);
 if (VAR_15) {
  FUNC_2(&VAR_10->dev, "unable to setup clocks\n");
  goto err1;
 }


 FUNC_12(&VAR_10->dev);

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  struct sh_mobile_lcdc_chan *VAR_19 = &VAR_12->ch[VAR_17];

  VAR_15 = FUNC_17(VAR_19);
  if (VAR_15)
   goto err1;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11->overlays); VAR_17++) {
  struct sh_mobile_lcdc_overlay *VAR_20 = &VAR_12->overlays[VAR_17];

  VAR_20->cfg = &VAR_11->overlays[VAR_17];
  VAR_20->channel = &VAR_12->ch[0];

  VAR_15 = FUNC_20(VAR_20);
  if (VAR_15)
   goto err1;
 }

 VAR_15 = FUNC_23(VAR_12);
 if (VAR_15) {
  FUNC_2(&VAR_10->dev, "unable to start hardware\n");
  goto err1;
 }

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  struct sh_mobile_lcdc_chan *VAR_21 = VAR_12->ch + VAR_17;

  VAR_15 = FUNC_16(VAR_21);
  if (VAR_15)
   goto err1;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11->overlays); VAR_17++) {
  struct sh_mobile_lcdc_overlay *VAR_22 = &VAR_12->overlays[VAR_17];

  VAR_15 = FUNC_19(VAR_22);
  if (VAR_15)
   goto err1;
 }

 return 0;
err1:
 FUNC_21(VAR_10);

 return VAR_15;
}
