
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct TYPE_5__ {int mdr2init; int rx_mode; int mdr3init; int frselreg_init; } ;
struct TYPE_8__ {int hw_state; int hw_is_64bit; TYPE_1__ fp; } ;
struct TYPE_7__ {TYPE_2__* m; } ;
struct s_smc {TYPE_4__ hw; TYPE_3__ mib; } ;
struct TYPE_6__ {int fddiMACT_Max; int fddiMACTvxValue; int fddiMACT_Req; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct s_smc*,int ) ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*,int,int ) ;
 int FUNC_7 (struct s_smc*) ;
 int FUNC_8 (struct s_smc*) ;
 int FUNC_9 (struct s_smc*) ;
 int FUNC_10 (struct s_smc*) ;
 int FUNC_11 (struct s_smc*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct s_smc*) ;
 int FUNC_16 (struct s_smc*) ;
 int FUNC_17 (struct s_smc*) ;

__attribute__((used)) static int FUNC_18(struct s_smc *VAR_33, int VAR_34)
{
 u_short VAR_35,VAR_36 ;
 u_long VAR_37=0 ;




 FUNC_14(FUNC_1(VAR_17),VAR_20) ;
 FUNC_16(VAR_33) ;
 FUNC_14(FUNC_1(VAR_17),VAR_21) ;

 FUNC_14(FUNC_1(VAR_18),VAR_33->hw.fp.mdr2init) ;

 if (VAR_34) {
  FUNC_7(VAR_33) ;
 }
 else {



  FUNC_12(FUNC_0(VAR_0), VAR_10) ;
  VAR_37 = FUNC_5(VAR_33) ;
 }




 FUNC_17(VAR_33) ;

 FUNC_10(VAR_33) ;
 FUNC_9(VAR_33) ;
 FUNC_8(VAR_33) ;

 FUNC_4(VAR_33,VAR_33->mib.m[VAR_26].fddiMACT_Req) ;



 FUNC_14(FUNC_1(VAR_12),14<<12) ;


 FUNC_14(FUNC_1(VAR_17),VAR_28 | VAR_22 | VAR_33->hw.fp.rx_mode) ;
 FUNC_14(FUNC_1(VAR_18),VAR_33->hw.fp.mdr2init) ;
 FUNC_14(FUNC_1(VAR_19),VAR_33->hw.fp.mdr3init) ;
 FUNC_14(FUNC_1(VAR_13),VAR_33->hw.fp.frselreg_init) ;







 VAR_35 = (u_short)(VAR_33->mib.m[VAR_26].fddiMACT_Max/32) ;
 VAR_36 = VAR_35/0x27 ;
 VAR_36 *= 0x27 ;
 if ((VAR_35 == 0xfffe) || (VAR_35 - VAR_36 == 0x16))
  VAR_35-- ;
 FUNC_14(FUNC_1(VAR_23),(u_short)VAR_35) ;


 if (VAR_33->mib.m[VAR_26].fddiMACTvxValue < (u_long) (- FUNC_3(52))) {
  FUNC_14(FUNC_1(VAR_24), (u_short) (- FUNC_3(52))/255 & VAR_27) ;
 } else {
  FUNC_14(FUNC_1(VAR_24),
   (u_short)((VAR_33->mib.m[VAR_26].fddiMACTvxValue/255) & VAR_27)) ;
 }

 FUNC_14(FUNC_1(VAR_11),VAR_16) ;
 FUNC_14(FUNC_1(VAR_11),VAR_14) ;
 FUNC_14(FUNC_1(VAR_11),VAR_15);


 FUNC_14(FUNC_1(VAR_25),(0xff|(0xff<<8))) ;

 FUNC_15(VAR_33) ;

 if (!VAR_34) {



  FUNC_6(VAR_33,VAR_37,FUNC_2(10)) ;
  FUNC_13(FUNC_0(VAR_1),VAR_8) ;
  FUNC_13(FUNC_0(VAR_2),VAR_8) ;
  FUNC_13(FUNC_0(VAR_3),VAR_8) ;
  FUNC_12(FUNC_0(VAR_0), VAR_9) ;
  FUNC_13(FUNC_0(VAR_1),VAR_7) ;
  FUNC_13(FUNC_0(VAR_2),VAR_7) ;
  FUNC_13(FUNC_0(VAR_3),VAR_7) ;
  if (!VAR_33->hw.hw_is_64bit) {
   FUNC_13(FUNC_0(VAR_4), VAR_29) ;
   FUNC_13(FUNC_0(VAR_5), VAR_32) ;
   FUNC_13(FUNC_0(VAR_6), VAR_32) ;
  }
  VAR_33->hw.hw_state = VAR_31 ;
  FUNC_11(VAR_33) ;
 }
 VAR_33->hw.hw_state = VAR_30 ;

 return 0;
}
