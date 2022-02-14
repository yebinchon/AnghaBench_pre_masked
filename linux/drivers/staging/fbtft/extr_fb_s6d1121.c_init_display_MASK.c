
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs; } ;
struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__ gpio; TYPE_1__ fbtftops; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);

 if (VAR_0->gpio.cs)
  FUNC_0(VAR_0->gpio.cs, 0);



 FUNC_2(VAR_0, 0x0011, 0x2004);
 FUNC_2(VAR_0, 0x0013, 0xCC00);
 FUNC_2(VAR_0, 0x0015, 0x2600);
 FUNC_2(VAR_0, 0x0014, 0x252A);
 FUNC_2(VAR_0, 0x0012, 0x0033);
 FUNC_2(VAR_0, 0x0013, 0xCC04);
 FUNC_2(VAR_0, 0x0013, 0xCC06);
 FUNC_2(VAR_0, 0x0013, 0xCC4F);
 FUNC_2(VAR_0, 0x0013, 0x674F);
 FUNC_2(VAR_0, 0x0011, 0x2003);
 FUNC_2(VAR_0, 0x0016, 0x0007);
 FUNC_2(VAR_0, 0x0002, 0x0013);
 FUNC_2(VAR_0, 0x0003, 0x0003);
 FUNC_2(VAR_0, 0x0001, 0x0127);
 FUNC_2(VAR_0, 0x0008, 0x0303);
 FUNC_2(VAR_0, 0x000A, 0x000B);
 FUNC_2(VAR_0, 0x000B, 0x0003);
 FUNC_2(VAR_0, 0x000C, 0x0000);
 FUNC_2(VAR_0, 0x0041, 0x0000);
 FUNC_2(VAR_0, 0x0050, 0x0000);
 FUNC_2(VAR_0, 0x0060, 0x0005);
 FUNC_2(VAR_0, 0x0070, 0x000B);
 FUNC_2(VAR_0, 0x0071, 0x0000);
 FUNC_2(VAR_0, 0x0078, 0x0000);
 FUNC_2(VAR_0, 0x007A, 0x0000);
 FUNC_2(VAR_0, 0x0079, 0x0007);
 FUNC_2(VAR_0, 0x0007, 0x0051);
 FUNC_2(VAR_0, 0x0007, 0x0053);
 FUNC_2(VAR_0, 0x0079, 0x0000);

 FUNC_2(VAR_0, 0x0022);

 return 0;
}
