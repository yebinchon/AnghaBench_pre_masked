
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cs; } ;
struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__ gpio; TYPE_1__ fbtftops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (struct fbtft_par*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_20)
{
 VAR_20->fbtftops.reset(VAR_20);

 if (VAR_20->gpio.cs)
  FUNC_0(VAR_20->gpio.cs, 0);

 FUNC_3(VAR_20, VAR_17);
 FUNC_1(500);
 FUNC_3(VAR_20, VAR_10);
 FUNC_1(5);
 FUNC_3(VAR_20, VAR_16, VAR_11);

 FUNC_3(VAR_20, VAR_14, 0x02);



 FUNC_3(VAR_20, VAR_9);
 FUNC_3(VAR_20, VAR_0, 0xff, 0x06);

 FUNC_3(VAR_20, VAR_2, 0x08, 0x02);
 FUNC_3(VAR_20, VAR_1, 0x07);

 FUNC_3(VAR_20, VAR_4, 0x0A, 0x02);

 FUNC_3(VAR_20, VAR_5, 0x02);

 FUNC_3(VAR_20, VAR_6, 0x50, 0x63);
 FUNC_3(VAR_20, VAR_7, 0);

 FUNC_3(VAR_20, VAR_12, 0, 0, 0, VAR_19);
 FUNC_3(VAR_20, VAR_15, 0, 0, 0, VAR_8);

 FUNC_3(VAR_20, VAR_13);
 FUNC_3(VAR_20, VAR_18);

 return 0;
}
