
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {unsigned long lddckr; int started; struct sh_mobile_lcdc_chan* ch; } ;
struct sh_mobile_lcdc_chan {unsigned long enabled; int colorspace; unsigned long line_size; unsigned long base_addr_y; unsigned long base_addr_c; int ldmt1r_value; TYPE_3__* format; TYPE_2__* cfg; } ;
struct TYPE_6__ {unsigned long lddfr; int fourcc; scalar_t__ yuv; } ;
struct TYPE_4__ {scalar_t__ deferred_io_msec; } ;
struct TYPE_5__ {int clock_divider; TYPE_1__ sys_bus_cfg; } ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_2 (struct sh_mobile_lcdc_priv*,int ,int ,int ) ;
 int FUNC_3 (struct sh_mobile_lcdc_priv*,int ,unsigned long) ;
 int FUNC_4 (struct sh_mobile_lcdc_chan*,int ,unsigned long) ;
 int FUNC_5 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_6 (struct sh_mobile_lcdc_priv*,int) ;

__attribute__((used)) static void FUNC_7(struct sh_mobile_lcdc_priv *VAR_24)
{
 struct sh_mobile_lcdc_chan *VAR_25;
 unsigned long VAR_26;
 int VAR_27, VAR_28;




 FUNC_3(VAR_24, VAR_19, VAR_24->ch[0].enabled | VAR_24->ch[1].enabled);


 FUNC_6(VAR_24, 0);
 FUNC_3(VAR_24, VAR_23, 0);


 VAR_26 = VAR_24->lddckr;
 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_24->ch); VAR_27++) {
  VAR_25 = &VAR_24->ch[VAR_27];
  if (!VAR_25->enabled)
   continue;


  FUNC_4(VAR_25, VAR_13, 0);

  VAR_28 = VAR_25->cfg->clock_divider;
  if (!VAR_28)
   continue;




  FUNC_4(VAR_25, VAR_1, 0);
  FUNC_4(VAR_25, VAR_2, (1 << (VAR_28/2)) - 1);

  if (VAR_28 == 1)
   VAR_28 = VAR_3;
  VAR_26 |= VAR_28 << (FUNC_1(VAR_25) ? 8 : 0);
 }

 FUNC_3(VAR_24, VAR_20, VAR_26);
 FUNC_3(VAR_24, VAR_21, 0);
 FUNC_2(VAR_24, VAR_21, ~0, 0);


 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_24->ch); VAR_27++) {
  VAR_25 = &VAR_24->ch[VAR_27];
  if (!VAR_25->enabled)
   continue;

  FUNC_5(VAR_25);

  VAR_26 = VAR_25->format->lddfr;

  if (VAR_25->format->yuv) {
   switch (VAR_25->colorspace) {
   case 137:
    VAR_26 |= VAR_9;
    break;
   case 138:
    VAR_26 |= VAR_8;
    break;
   }
  }

  FUNC_4(VAR_25, VAR_7, VAR_26);
  FUNC_4(VAR_25, VAR_11, VAR_25->line_size);
  FUNC_4(VAR_25, VAR_14, VAR_25->base_addr_y);
  if (VAR_25->format->yuv)
   FUNC_4(VAR_25, VAR_15, VAR_25->base_addr_c);





  if (VAR_25->ldmt1r_value & VAR_12 &&
      VAR_25->cfg->sys_bus_cfg.deferred_io_msec) {
   FUNC_4(VAR_25, VAR_16, VAR_17);
   FUNC_3(VAR_24, VAR_23, VAR_10);
  } else {
   FUNC_4(VAR_25, VAR_16, 0);
  }
 }


 switch (VAR_24->ch[0].format->fourcc) {
 case 128:
 case 132:
 case 129:
 case 130:
  VAR_26 = VAR_5 | VAR_6;
  break;
 case 136:
 case 134:
 case 133:
 case 131:
  VAR_26 = VAR_5 | VAR_6 | VAR_4;
  break;
 case 135:
 default:
  VAR_26 = VAR_5;
  break;
 }
 FUNC_3(VAR_24, VAR_22, VAR_26);


 FUNC_3(VAR_24, VAR_18, VAR_0);
 FUNC_6(VAR_24, 1);
 VAR_24->started = 1;
}
