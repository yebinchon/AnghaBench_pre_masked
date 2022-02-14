
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int FUNC_0 (struct fbtft_par*,int,...) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 switch (VAR_0->info->var.rotate) {


 case 0:
  FUNC_0(VAR_0, 0x4e, VAR_1);
  FUNC_0(VAR_0, 0x4f, VAR_2);
  break;
 case 180:
  FUNC_0(VAR_0, 0x4e, VAR_0->info->var.xres - 1 - VAR_1);
  FUNC_0(VAR_0, 0x4f, VAR_0->info->var.yres - 1 - VAR_2);
  break;
 case 270:
  FUNC_0(VAR_0, 0x4e, VAR_0->info->var.yres - 1 - VAR_2);
  FUNC_0(VAR_0, 0x4f, VAR_1);
  break;
 case 90:
  FUNC_0(VAR_0, 0x4e, VAR_2);
  FUNC_0(VAR_0, 0x4f, VAR_0->info->var.xres - 1 - VAR_1);
  break;
 }


 FUNC_0(VAR_0, 0x22);
}
