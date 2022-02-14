
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx3fb_platform_data {char* name; int disp_data_fmt; int num_modes; struct fb_videomode* mode; } ;
struct mx3fb_info {scalar_t__ ipu_ch; int flip_cmpl; int blank; struct mx3fb_data* mx3fb; struct idmac_channel* idmac_channel; } ;
struct mx3fb_data {int disp_data_fmt; struct device* dev; struct fb_info* fbi; } ;
struct TYPE_3__ {scalar_t__ chan_id; } ;
struct idmac_channel {unsigned int eof_irq; TYPE_1__ dma_chan; struct mx3fb_data* client; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_4__ {int yres_virtual; int yres; } ;
struct fb_info {int cmap; struct mx3fb_info* par; TYPE_2__ var; int modelist; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct fb_videomode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct mx3fb_platform_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*,char const*) ;
 struct fb_videomode* VAR_8 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,struct fb_info*,char const*,struct fb_videomode const*,int,int *,int ) ;
 char const* VAR_9 ;
 int FUNC_10 (struct fb_videomode const*,int,int *) ;
 int FUNC_11 (struct fb_info*) ;
 int FUNC_12 (int *) ;
 struct fb_info* FUNC_13 (struct device*,int *) ;
 struct fb_videomode* VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct mx3fb_data*,int,int ) ;
 int FUNC_15 (struct fb_info*) ;
 int FUNC_16 (struct mx3fb_data*,int) ;
 int FUNC_17 (struct mx3fb_data*,scalar_t__,int,int ) ;
 int FUNC_18 (struct mx3fb_data*,int,int) ;

__attribute__((used)) static int FUNC_19(struct mx3fb_data *VAR_12, struct idmac_channel *VAR_13)
{
 struct device *VAR_14 = VAR_12->dev;
 struct mx3fb_platform_data *VAR_15 = FUNC_5(VAR_14);
 const char *VAR_16 = VAR_15->name;
 unsigned int VAR_17;
 struct fb_info *VAR_18;
 struct mx3fb_info *VAR_19;
 const struct fb_videomode *VAR_20;
 int VAR_21, VAR_22;

 if (VAR_15->disp_data_fmt >= FUNC_0(VAR_8)) {
  FUNC_4(VAR_14, "Illegal display data format %d\n",
    VAR_15->disp_data_fmt);
  return -VAR_2;
 }

 VAR_13->client = VAR_12;
 VAR_17 = VAR_13->eof_irq;

 if (VAR_13->dma_chan.chan_id != VAR_6)
  return -VAR_2;

 VAR_18 = FUNC_13(VAR_14, &VAR_11);
 if (!VAR_18)
  return -VAR_3;

 if (!VAR_9)
  VAR_9 = VAR_16;

 if (!VAR_9) {
  VAR_21 = -VAR_2;
  goto emode;
 }

 if (VAR_15->mode && VAR_15->num_modes) {
  VAR_20 = VAR_15->mode;
  VAR_22 = VAR_15->num_modes;
 } else {
  VAR_20 = VAR_10;
  VAR_22 = FUNC_0(VAR_10);
 }

 if (!FUNC_9(&VAR_18->var, VAR_18, VAR_9, VAR_20,
     VAR_22, ((void*)0), VAR_7)) {
  VAR_21 = -VAR_1;
  goto emode;
 }

 FUNC_10(VAR_20, VAR_22, &VAR_18->modelist);


 VAR_18->var.yres_virtual = VAR_18->var.yres * 2;

 VAR_12->fbi = VAR_18;


 FUNC_14(VAR_12, 0x00100010L, VAR_0);


 FUNC_16(VAR_12, 255);
 FUNC_18(VAR_12, 1, 0xFF);
 FUNC_17(VAR_12, VAR_6, 0, 0);

 VAR_19 = VAR_18->par;
 VAR_19->idmac_channel = VAR_13;
 VAR_19->ipu_ch = VAR_13->dma_chan.chan_id;
 VAR_19->mx3fb = VAR_12;
 VAR_19->blank = VAR_4;

 VAR_12->disp_data_fmt = VAR_15->disp_data_fmt;

 FUNC_12(&VAR_19->flip_cmpl);
 FUNC_7(VAR_13->eof_irq);
 FUNC_3(VAR_12->dev, "disabling irq %d\n", VAR_13->eof_irq);
 VAR_21 = FUNC_2(VAR_18, 0);
 if (VAR_21 < 0)
  goto esetpar;

 FUNC_1(VAR_5, VAR_18);

 FUNC_6(VAR_14, "registered, using mode %s\n", VAR_9);

 VAR_21 = FUNC_15(VAR_18);
 if (VAR_21 < 0)
  goto erfb;

 return 0;

erfb:
esetpar:
emode:
 FUNC_8(&VAR_18->cmap);
 FUNC_11(VAR_18);

 return VAR_21;
}
