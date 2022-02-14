
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_15)
{
 VAR_15->fbtftops.reset(VAR_15);


 FUNC_2(VAR_15, VAR_9);
 FUNC_0(10);


 FUNC_2(VAR_15, VAR_11);


 FUNC_2(VAR_15, VAR_4 | 1);


 FUNC_2(VAR_15, VAR_10 | 0x00);


 FUNC_2(VAR_15, VAR_2 | 0);


 FUNC_2(VAR_15, VAR_6 | 0);


 FUNC_2(VAR_15, VAR_3 | 0);


 FUNC_2(VAR_15, VAR_8 | 0x07);


 FUNC_2(VAR_15, VAR_13 | 0x07);


 FUNC_2(VAR_15, VAR_14);
 FUNC_2(VAR_15, 0x09);
 FUNC_2(VAR_15, VAR_7);


 FUNC_2(VAR_15, VAR_0);
 FUNC_2(VAR_15, VAR_1 | VAR_12);


 FUNC_2(VAR_15, VAR_5 | 1);

 return 0;
}
