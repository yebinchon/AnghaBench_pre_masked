
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs; } ;
struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {int bgr; TYPE_2__ gpio; TYPE_1__ fbtftops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_1)
{
 VAR_1->fbtftops.reset(VAR_1);

 if (VAR_1->gpio.cs)
  FUNC_1(VAR_1->gpio.cs, 0);

 FUNC_3(VAR_1, 0x00, 0x0001);
 FUNC_3(VAR_1, 0x03, 0xA8A4);
 FUNC_3(VAR_1, 0x0C, 0x0000);
 FUNC_3(VAR_1, 0x0D, 0x080C);
 FUNC_3(VAR_1, 0x0E, 0x2B00);
 FUNC_3(VAR_1, 0x1E, 0x00B7);
 FUNC_3(VAR_1, 0x01,
    FUNC_0(13) | (VAR_1->bgr << 11) | FUNC_0(9) | (VAR_0 - 1));
 FUNC_3(VAR_1, 0x02, 0x0600);
 FUNC_3(VAR_1, 0x10, 0x0000);
 FUNC_3(VAR_1, 0x05, 0x0000);
 FUNC_3(VAR_1, 0x06, 0x0000);
 FUNC_3(VAR_1, 0x16, 0xEF1C);
 FUNC_3(VAR_1, 0x17, 0x0003);
 FUNC_3(VAR_1, 0x07, 0x0233);
 FUNC_3(VAR_1, 0x0B, 0x0000);
 FUNC_3(VAR_1, 0x0F, 0x0000);
 FUNC_3(VAR_1, 0x41, 0x0000);
 FUNC_3(VAR_1, 0x42, 0x0000);
 FUNC_3(VAR_1, 0x48, 0x0000);
 FUNC_3(VAR_1, 0x49, 0x013F);
 FUNC_3(VAR_1, 0x4A, 0x0000);
 FUNC_3(VAR_1, 0x4B, 0x0000);
 FUNC_3(VAR_1, 0x44, 0xEF00);
 FUNC_3(VAR_1, 0x45, 0x0000);
 FUNC_3(VAR_1, 0x46, 0x013F);
 FUNC_3(VAR_1, 0x23, 0x0000);
 FUNC_3(VAR_1, 0x24, 0x0000);
 FUNC_3(VAR_1, 0x25, 0x8000);
 FUNC_3(VAR_1, 0x4f, 0x0000);
 FUNC_3(VAR_1, 0x4e, 0x0000);
 FUNC_3(VAR_1, 0x22);
 return 0;
}
