
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int size; } ;
struct intelfb_info {scalar_t__ accel; TYPE_2__ fb; TYPE_3__* info; TYPE_1__* pdev; int initial_var; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int xres_virtual; int yres_virtual; int accel_flags; } ;
struct TYPE_8__ {int modedb_len; int * modedb; } ;
struct TYPE_7__ {TYPE_4__ monspecs; struct fb_var_screeninfo var; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct intelfb_info*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (struct fb_var_screeninfo*,TYPE_3__*,scalar_t__,int *,int ,int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int const*,int ,int ) ;
 int FUNC_9 (struct fb_var_screeninfo*,int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_12(struct intelfb_info *VAR_5)
{
 struct fb_var_screeninfo *VAR_6;
 int VAR_7 = 0;

 FUNC_0("intelfb_init_var\n");

 VAR_6 = &VAR_5->info->var;
 if (FUNC_2(VAR_5)) {
         FUNC_9(VAR_6, &VAR_5->initial_var,
         sizeof(struct fb_var_screeninfo));
  VAR_7 = 5;
 } else {
  const u8 *VAR_8 = FUNC_6(&VAR_5->pdev->dev);
  u8 *VAR_9 = ((void*)0);

  if (VAR_8) {
   VAR_9 = FUNC_8(VAR_8, VAR_0, VAR_2);

   if (VAR_9) {
    FUNC_4(VAR_9,
          &VAR_5->info->monspecs);
    FUNC_7(VAR_9);
   }
  }

  if (VAR_4) {
   FUNC_10("intelfb: Looking for mode in private "
          "database\n");
   VAR_7 = FUNC_5(VAR_6, VAR_5->info, VAR_4,
         VAR_5->info->monspecs.modedb,
         VAR_5->info->monspecs.modedb_len,
         ((void*)0), 0);

   if (VAR_7 && VAR_7 > 1) {
    FUNC_10("intelfb: No mode in private database, "
           "intelfb: looking for mode in global "
           "database ");
    VAR_7 = FUNC_5(VAR_6, VAR_5->info, VAR_4,
          ((void*)0), 0, ((void*)0), 0);

    if (VAR_7)
     VAR_7 |= 8;
   }

  }

  if (!VAR_7)
   VAR_7 = FUNC_5(VAR_6, VAR_5->info, VAR_3,
         ((void*)0), 0, ((void*)0), 0);
 }

 if (!VAR_7) {
  FUNC_1("Cannot find a suitable video mode.\n");
  return 1;
 }

 FUNC_3("Initial video mode is %dx%d-%d@%d.\n", VAR_6->xres, VAR_6->yres,
  VAR_6->bits_per_pixel, FUNC_11(VAR_6));

 FUNC_0("Initial video mode is from %d.\n", VAR_7);
 VAR_6->yres_virtual = VAR_6->yres;


 if (VAR_5->accel)
  VAR_6->accel_flags |= VAR_1;
 else
  VAR_6->accel_flags &= ~VAR_1;

 return 0;
}
