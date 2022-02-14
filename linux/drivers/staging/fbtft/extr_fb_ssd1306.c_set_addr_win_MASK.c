
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*,int) ;

__attribute__((used)) static void FUNC_2(struct fbtft_par *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 FUNC_1(VAR_0, 0x00 | 0x0);

 FUNC_1(VAR_0, 0x10 | 0x0);

 FUNC_1(VAR_0, 0x40 | 0x0);

 if (VAR_0->info->var.xres == 64 && VAR_0->info->var.yres == 48)
  FUNC_0(VAR_0);
}
