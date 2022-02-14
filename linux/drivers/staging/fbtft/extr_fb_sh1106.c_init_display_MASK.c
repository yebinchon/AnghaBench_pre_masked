
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_3__* info; TYPE_1__ fbtftops; } ;
struct TYPE_5__ {scalar_t__ xres; int yres; scalar_t__ rotate; } ;
struct TYPE_6__ {TYPE_2__ var; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_3)
{
 if (!VAR_3->info->var.xres || VAR_3->info->var.xres > VAR_2 ||
     !VAR_3->info->var.yres || VAR_3->info->var.yres > VAR_1 ||
     VAR_3->info->var.yres % 8) {
  FUNC_0(VAR_3->info->device, "Invalid screen size\n");
  return -VAR_0;
 }

 if (VAR_3->info->var.rotate) {
  FUNC_0(VAR_3->info->device, "Display rotation not supported\n");
  return -VAR_0;
 }

 VAR_3->fbtftops.reset(VAR_3);


 FUNC_3(VAR_3, 0xAE);


 FUNC_3(VAR_3, 0xD5, 0x80);


 FUNC_3(VAR_3, 0xA8, VAR_3->info->var.yres - 1);


 FUNC_3(VAR_3, 0xD3, 0x00);


 FUNC_3(VAR_3, 0x40 | 0x0);



 FUNC_3(VAR_3, 0xA0 | 0x1);



 FUNC_3(VAR_3, 0xC8);


 if (VAR_3->info->var.yres == 64)

  FUNC_3(VAR_3, 0xDA, 0x12);
 else if (VAR_3->info->var.yres == 48)

  FUNC_3(VAR_3, 0xDA, 0x12);
 else

  FUNC_3(VAR_3, 0xDA, 0x02);


 FUNC_3(VAR_3, 0xD9, 0xF1);


 FUNC_3(VAR_3, 0xDB, 0x40);


 FUNC_3(VAR_3, 0xAF);

 FUNC_1(150);

 return 0;
}
