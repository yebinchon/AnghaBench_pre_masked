
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int (* fb_check_var ) (TYPE_4__*,struct fb_info*) ;int * fb_cursor; } ;
struct sm501fb_par {TYPE_5__ ops; struct sm501fb_info* info; } ;
struct sm501fb_info {TYPE_9__* dev; scalar_t__ edid_data; scalar_t__ regs; TYPE_1__* pdata; } ;
struct sm501_platdata_fbsub {int flags; int def_bpp; scalar_t__ def_mode; } ;
struct fb_ops {int dummy; } ;
struct TYPE_14__ {int bits_per_pixel; int yres; int yres_virtual; int xres; int xres_virtual; int vmode; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_16__ {int modedb_len; int * modedb; } ;
struct TYPE_13__ {int xpanstep; int ypanstep; int accel; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {int flags; TYPE_4__ var; TYPE_5__* fbops; int cmap; TYPE_8__ monspecs; int modelist; TYPE_3__ fix; struct sm501fb_par* par; } ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;
struct TYPE_17__ {TYPE_2__* parent; } ;
struct TYPE_12__ {int of_node; } ;
struct TYPE_11__ {scalar_t__ fb_route; struct sm501_platdata_fbsub* fb_pnl; struct sm501_platdata_fbsub* fb_crt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned long VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (TYPE_9__*,char*) ;
 int FUNC_2 (TYPE_9__*,char*,...) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (scalar_t__,TYPE_8__*) ;
 int FUNC_5 (TYPE_4__*,struct fb_info*,int *,int *,int ,int *,int) ;
 int * VAR_23 ;
 int FUNC_6 (int *,struct fb_info*) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (TYPE_4__*,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_11 (int ,char*,int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned long FUNC_12 (scalar_t__) ;
 int FUNC_13 (unsigned long,scalar_t__) ;
 int FUNC_14 (int ,char const*,int) ;
 int FUNC_15 (TYPE_4__*,struct fb_info*) ;

__attribute__((used)) static int FUNC_16(struct fb_info *VAR_27, enum sm501_controller VAR_28,
      const char *VAR_29)
{
 struct sm501_platdata_fbsub *VAR_30;
 struct sm501fb_par *VAR_31 = VAR_27->par;
 struct sm501fb_info *VAR_32 = VAR_31->info;
 unsigned long VAR_33;
 unsigned int VAR_34;
 int VAR_35;

 switch (VAR_28) {
 case 129:
  VAR_30 = VAR_32->pdata->fb_crt;
  VAR_33 = FUNC_12(VAR_32->regs + VAR_16);
  VAR_34 = (VAR_33 & VAR_17) ? 1 : 0;


  if (VAR_32->pdata->fb_route != VAR_21) {
   VAR_33 |= VAR_18;
   FUNC_13(VAR_33, VAR_32->regs + VAR_16);
  }

  break;

 case 128:
  VAR_30 = VAR_32->pdata->fb_pnl;
  VAR_33 = FUNC_12(VAR_32->regs + VAR_19);
  VAR_34 = (VAR_33 & VAR_20) ? 1 : 0;
  break;

 default:
  VAR_30 = ((void*)0);
  VAR_33 = 0;
  VAR_34 = 0;
  FUNC_0();
 }

 FUNC_2(VAR_32->dev, "fb %s %sabled at start\n",
   VAR_29, VAR_34 ? "en" : "dis");



 if (VAR_28 == 129 && VAR_32->pdata->fb_route == VAR_21) {
  VAR_33 &= ~VAR_18;
  FUNC_13(VAR_33, VAR_32->regs + VAR_16);
  VAR_34 = 0;
 }

 FUNC_14(VAR_27->fix.id, VAR_29, sizeof(VAR_27->fix.id));

 FUNC_10(&VAR_31->ops,
        (VAR_28 == 129) ? &VAR_25 : &VAR_26,
        sizeof(struct fb_ops));



 if ((VAR_30->flags & VAR_14) == 0)
  VAR_31->ops.fb_cursor = ((void*)0);

 VAR_27->fbops = &VAR_31->ops;
 VAR_27->flags = VAR_2 | VAR_8 |
  VAR_4 | VAR_5 |
  VAR_6 | VAR_7;
 VAR_27->fix.type = VAR_11;
 VAR_27->fix.type_aux = 0;
 VAR_27->fix.xpanstep = 1;
 VAR_27->fix.ypanstep = 1;
 VAR_27->fix.ywrapstep = 0;
 VAR_27->fix.accel = VAR_9;



 VAR_27->var.nonstd = 0;
 VAR_27->var.activate = VAR_10;
 VAR_27->var.accel_flags = 0;
 VAR_27->var.vmode = VAR_12;
 VAR_27->var.bits_per_pixel = 16;

 if (VAR_32->edid_data) {

   FUNC_4(VAR_32->edid_data, &VAR_27->monspecs);
   FUNC_7(VAR_27->monspecs.modedb,
       VAR_27->monspecs.modedb_len,
       &VAR_27->modelist);
 }

 if (VAR_34 && (VAR_30->flags & VAR_15) && 0) {

 } else {
  if (VAR_30->def_mode) {
   FUNC_2(VAR_32->dev, "using supplied mode\n");
   FUNC_8(&VAR_27->var, VAR_30->def_mode);

   VAR_27->var.bits_per_pixel = VAR_30->def_bpp ? VAR_30->def_bpp : 8;
   VAR_27->var.xres_virtual = VAR_27->var.xres;
   VAR_27->var.yres_virtual = VAR_27->var.yres;
  } else {
   if (VAR_32->edid_data) {
    VAR_35 = FUNC_5(&VAR_27->var, VAR_27, VAR_23,
     VAR_27->monspecs.modedb,
     VAR_27->monspecs.modedb_len,
     &VAR_24, VAR_22);

    FUNC_9(VAR_32->edid_data);
   } else {
    VAR_35 = FUNC_5(&VAR_27->var, VAR_27,
        ((void*)0), ((void*)0), 0, ((void*)0), 8);
   }

   switch (VAR_35) {
   case 1:
    FUNC_2(VAR_32->dev, "using mode specified in "
      "@mode\n");
    break;
   case 2:
    FUNC_2(VAR_32->dev, "using mode specified in "
     "@mode with ignored refresh rate\n");
    break;
   case 3:
    FUNC_2(VAR_32->dev, "using mode default "
     "mode\n");
    break;
   case 4:
    FUNC_2(VAR_32->dev, "using mode from list\n");
    break;
   default:
    FUNC_2(VAR_32->dev, "ret = %d\n", VAR_35);
    FUNC_2(VAR_32->dev, "failed to find mode\n");
    return -VAR_0;
   }
  }
 }


 if (FUNC_3(&VAR_27->cmap, VAR_13, 0)) {
  FUNC_1(VAR_32->dev, "failed to allocate cmap memory\n");
  return -VAR_1;
 }
 FUNC_6(&VAR_27->cmap, VAR_27);

 VAR_35 = (VAR_27->fbops->fb_check_var)(&VAR_27->var, VAR_27);
 if (VAR_35)
  FUNC_1(VAR_32->dev, "check_var() failed on initial setup?\n");

 return 0;
}
