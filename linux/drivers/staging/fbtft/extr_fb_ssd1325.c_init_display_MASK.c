
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cs; } ;
struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__ gpio; TYPE_1__ fbtftops; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);

 FUNC_0(VAR_0->gpio.cs, 0);

 FUNC_2(VAR_0, 0xb3);
 FUNC_2(VAR_0, 0xf0);
 FUNC_2(VAR_0, 0xae);
 FUNC_2(VAR_0, 0xa1);
 FUNC_2(VAR_0, 0x00);
 FUNC_2(VAR_0, 0xa8);
 FUNC_2(VAR_0, 0x3f);
 FUNC_2(VAR_0, 0xa0);
 FUNC_2(VAR_0, 0x45);
 FUNC_2(VAR_0, 0xa2);
 FUNC_2(VAR_0, 0x40);
 FUNC_2(VAR_0, 0x75);
 FUNC_2(VAR_0, 0x00);
 FUNC_2(VAR_0, 0x3f);
 FUNC_2(VAR_0, 0x15);
 FUNC_2(VAR_0, 0x00);
 FUNC_2(VAR_0, 0x7f);
 FUNC_2(VAR_0, 0xa4);
 FUNC_2(VAR_0, 0xaf);

 return 0;
}
