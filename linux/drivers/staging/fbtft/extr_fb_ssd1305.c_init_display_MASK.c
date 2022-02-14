
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* curves; int lock; } ;
struct TYPE_5__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_4__* info; TYPE_2__ gamma; TYPE_1__ fbtftops; } ;
struct TYPE_7__ {int yres; int rotate; } ;
struct TYPE_8__ {TYPE_3__ var; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);

 if (VAR_0->gamma.curves[0] == 0) {
  FUNC_0(&VAR_0->gamma.lock);
  if (VAR_0->info->var.yres == 64)
   VAR_0->gamma.curves[0] = 0xCF;
  else
   VAR_0->gamma.curves[0] = 0x8F;
  FUNC_1(&VAR_0->gamma.lock);
 }


 FUNC_3(VAR_0, 0xAE);


 FUNC_3(VAR_0, 0xD5);
 FUNC_3(VAR_0, 0x80);


 FUNC_3(VAR_0, 0xA8);
 if (VAR_0->info->var.yres == 64)
  FUNC_3(VAR_0, 0x3F);
 else
  FUNC_3(VAR_0, 0x1F);


 FUNC_3(VAR_0, 0xD3);
 FUNC_3(VAR_0, 0x0);


 FUNC_3(VAR_0, 0x40 | 0x0);


 FUNC_3(VAR_0, 0x8D);

 FUNC_3(VAR_0, 0x14);


 FUNC_3(VAR_0, 0x20);

 FUNC_3(VAR_0, 0x01);





 FUNC_3(VAR_0, 0xA0 | ((VAR_0->info->var.rotate == 180) ? 0x0 : 0x1));





 FUNC_3(VAR_0, ((VAR_0->info->var.rotate == 180) ? 0xC8 : 0xC0));


 FUNC_3(VAR_0, 0xDA);
 if (VAR_0->info->var.yres == 64) {

  FUNC_3(VAR_0, 0x12);
 } else {

  FUNC_3(VAR_0, 0x02);
 }


 FUNC_3(VAR_0, 0xD9);
 FUNC_3(VAR_0, 0xF1);





 FUNC_3(VAR_0, 0xA4);






 FUNC_3(VAR_0, 0xA6);


 FUNC_3(VAR_0, 0xAF);

 return 0;
}
