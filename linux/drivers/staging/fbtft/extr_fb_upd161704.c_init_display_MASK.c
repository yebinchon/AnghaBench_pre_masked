
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
 int FUNC_2 (int) ;
 int FUNC_3 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);

 if (VAR_0->gpio.cs)
  FUNC_0(VAR_0->gpio.cs, 0);




 FUNC_3(VAR_0, 0x0003, 0x0001);


 FUNC_3(VAR_0, 0x003A, 0x0001);
 FUNC_2(100);


 FUNC_3(VAR_0, 0x0024, 0x007B);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0025, 0x003B);
 FUNC_3(VAR_0, 0x0026, 0x0034);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0027, 0x0004);
 FUNC_3(VAR_0, 0x0052, 0x0025);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0053, 0x0033);
 FUNC_3(VAR_0, 0x0061, 0x001C);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0062, 0x002C);
 FUNC_3(VAR_0, 0x0063, 0x0022);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0064, 0x0027);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0065, 0x0014);
 FUNC_2(10);
 FUNC_3(VAR_0, 0x0066, 0x0010);


 FUNC_3(VAR_0, 0x002E, 0x002D);


 FUNC_3(VAR_0, 0x0019, 0x0000);
 FUNC_2(200);
 FUNC_3(VAR_0, 0x001A, 0x1000);
 FUNC_3(VAR_0, 0x001B, 0x0023);
 FUNC_3(VAR_0, 0x001C, 0x0C01);
 FUNC_3(VAR_0, 0x001D, 0x0000);
 FUNC_3(VAR_0, 0x001E, 0x0009);
 FUNC_3(VAR_0, 0x001F, 0x0035);
 FUNC_3(VAR_0, 0x0020, 0x0015);
 FUNC_3(VAR_0, 0x0018, 0x1E7B);


 FUNC_3(VAR_0, 0x0008, 0x0000);
 FUNC_3(VAR_0, 0x0009, 0x00EF);
 FUNC_3(VAR_0, 0x000a, 0x0000);
 FUNC_3(VAR_0, 0x000b, 0x013F);


 FUNC_3(VAR_0, 0x0029, 0x0000);
 FUNC_3(VAR_0, 0x002A, 0x0000);
 FUNC_3(VAR_0, 0x002B, 0x00EF);
 FUNC_3(VAR_0, 0x002C, 0x013F);


 FUNC_3(VAR_0, 0x0032, 0x0002);


 FUNC_3(VAR_0, 0x0033, 0x0000);


 FUNC_3(VAR_0, 0x0037, 0x0000);


 FUNC_3(VAR_0, 0x003B, 0x0001);



 FUNC_3(VAR_0, 0x0004, 0x0000);


 FUNC_3(VAR_0, 0x0005, 0x0000);


 FUNC_3(VAR_0, 0x0001, 0x0000);


 FUNC_3(VAR_0, 0x0000, 0x0000);

 return 0;
}
