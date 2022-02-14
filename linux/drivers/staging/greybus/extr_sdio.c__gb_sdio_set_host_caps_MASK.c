
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gb_sdio_host {int card_present; TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; int caps2; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static void FUNC_0(struct gb_sdio_host *VAR_43, u32 VAR_44)
{
 u32 VAR_45 = 0;
 u32 VAR_46 = 0;

 VAR_45 = ((VAR_44 & VAR_13) ? VAR_35 : 0) |
  ((VAR_44 & VAR_2) ? VAR_28 : 0) |
  ((VAR_44 & VAR_3) ? VAR_29 : 0) |
  ((VAR_44 & VAR_12) ? VAR_34 : 0) |
  ((VAR_44 & VAR_15) ? VAR_37 : 0) |
  ((VAR_44 & VAR_7) ? VAR_33 : 0) |
  ((VAR_44 & VAR_0) ? VAR_26 : 0) |
  ((VAR_44 & VAR_1) ? VAR_27 : 0) |
  ((VAR_44 & VAR_14) ? VAR_36 : 0) |
  ((VAR_44 & VAR_18) ? VAR_40 : 0) |
  ((VAR_44 & VAR_19) ? VAR_41 : 0) |
  ((VAR_44 & VAR_20) ? VAR_42 : 0) |
  ((VAR_44 & VAR_17) ? VAR_39 : 0) |
  ((VAR_44 & VAR_16) ? VAR_38 : 0) |
  ((VAR_44 & VAR_4) ? VAR_30 : 0) |
  ((VAR_44 & VAR_5) ? VAR_31 : 0) |
  ((VAR_44 & VAR_6) ? VAR_32 : 0);

 VAR_46 = ((VAR_44 & VAR_8) ? VAR_22 : 0) |
  ((VAR_44 & VAR_10) ? VAR_24 : 0) |
  ((VAR_44 & VAR_11) ? VAR_25 : 0) |
  ((VAR_44 & VAR_9) ? VAR_23 : 0);

 VAR_43->mmc->caps = VAR_45;
 VAR_43->mmc->caps2 = VAR_46 | VAR_21;

 if (VAR_45 & VAR_35)
  VAR_43->card_present = 1;
}
