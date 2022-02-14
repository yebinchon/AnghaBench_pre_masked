
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs; } ;
struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__ gpio; TYPE_1__ fbtftops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fbtft_par*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_5(struct fbtft_par *VAR_5)
{
 VAR_5->fbtftops.reset(VAR_5);

 if (VAR_5->gpio.cs)
  FUNC_1(VAR_5->gpio.cs, 0);

 VAR_0 &= 0x07;
 VAR_1 &= 0x07;
 VAR_4 &= 0x0f;
 VAR_3 &= 0x1f;
 VAR_2 &= 0x3f;




 FUNC_4(VAR_5, 0x00E3, 0x3008);
 FUNC_4(VAR_5, 0x00E7, 0x0012);
 FUNC_4(VAR_5, 0x00EF, 0x1231);
 FUNC_4(VAR_5, 0x0001, 0x0100);
 FUNC_4(VAR_5, 0x0002, 0x0700);
 FUNC_4(VAR_5, 0x0004, 0x0000);
 FUNC_4(VAR_5, 0x0008, 0x0207);
 FUNC_4(VAR_5, 0x0009, 0x0000);
 FUNC_4(VAR_5, 0x000A, 0x0000);
 FUNC_4(VAR_5, 0x000C, 0x0000);
 FUNC_4(VAR_5, 0x000D, 0x0000);
 FUNC_4(VAR_5, 0x000F, 0x0000);


 FUNC_4(VAR_5, 0x0010, 0x0000);
 FUNC_4(VAR_5, 0x0011, 0x0007);
 FUNC_4(VAR_5, 0x0012, 0x0000);
 FUNC_4(VAR_5, 0x0013, 0x0000);
 FUNC_2(200);
 FUNC_4(VAR_5, 0x0010,
  FUNC_0(12) | (VAR_0 << 8) | FUNC_0(7) | FUNC_0(4));
 FUNC_4(VAR_5, 0x0011, 0x220 | VAR_1);
 FUNC_2(50);
 FUNC_4(VAR_5, 0x0012, VAR_4);
 FUNC_2(50);
 FUNC_4(VAR_5, 0x0013, VAR_3 << 8);
 FUNC_4(VAR_5, 0x0029, VAR_2);
 FUNC_4(VAR_5, 0x002B, 0x000C);
 FUNC_2(50);
 FUNC_4(VAR_5, 0x0020, 0x0000);
 FUNC_4(VAR_5, 0x0021, 0x0000);


 FUNC_4(VAR_5, 0x0050, 0x0000);
 FUNC_4(VAR_5, 0x0051, 0x00EF);
 FUNC_4(VAR_5, 0x0052, 0x0000);
 FUNC_4(VAR_5, 0x0053, 0x013F);
 FUNC_4(VAR_5, 0x0060, 0xA700);
 FUNC_4(VAR_5, 0x0061, 0x0001);
 FUNC_4(VAR_5, 0x006A, 0x0000);


 FUNC_4(VAR_5, 0x0080, 0x0000);
 FUNC_4(VAR_5, 0x0081, 0x0000);
 FUNC_4(VAR_5, 0x0082, 0x0000);
 FUNC_4(VAR_5, 0x0083, 0x0000);
 FUNC_4(VAR_5, 0x0084, 0x0000);
 FUNC_4(VAR_5, 0x0085, 0x0000);


 FUNC_4(VAR_5, 0x0090, 0x0010);
 FUNC_4(VAR_5, 0x0092, 0x0600);
 FUNC_4(VAR_5, 0x0007, 0x0133);

 return 0;
}
