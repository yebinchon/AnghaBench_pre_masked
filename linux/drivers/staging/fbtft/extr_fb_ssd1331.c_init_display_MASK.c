
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {int bgr; TYPE_3__* info; TYPE_1__ fbtftops; } ;
struct TYPE_5__ {int rotate; } ;
struct TYPE_6__ {TYPE_2__ var; } ;


 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);

 FUNC_1(VAR_0, 0xae);


 if (VAR_0->info->var.rotate == 180)
  FUNC_1(VAR_0, 0xa0, 0x60 | (VAR_0->bgr << 2));
 else
  FUNC_1(VAR_0, 0xa0, 0x72 | (VAR_0->bgr << 2));

 FUNC_1(VAR_0, 0x72);
 FUNC_1(VAR_0, 0xa1, 0x00);
 FUNC_1(VAR_0, 0xa2, 0x00);
 FUNC_1(VAR_0, 0xa4);
 FUNC_1(VAR_0, 0xa8, 0x3f);
 FUNC_1(VAR_0, 0xad, 0x8e);

 FUNC_1(VAR_0, 0xb1, 0x31);
 FUNC_1(VAR_0, 0xb3, 0xf0);
 FUNC_1(VAR_0, 0x8a, 0x64);
 FUNC_1(VAR_0, 0x8b, 0x78);
 FUNC_1(VAR_0, 0x8c, 0x64);
 FUNC_1(VAR_0, 0xbb, 0x3a);
 FUNC_1(VAR_0, 0xbe, 0x3e);
 FUNC_1(VAR_0, 0x87, 0x06);
 FUNC_1(VAR_0, 0x81, 0x91);
 FUNC_1(VAR_0, 0x82, 0x50);
 FUNC_1(VAR_0, 0x83, 0x7d);
 FUNC_1(VAR_0, 0xaf);

 return 0;
}
