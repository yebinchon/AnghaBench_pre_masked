
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ nphy_gain_boost; int radio_chanspec; TYPE_1__* sh; } ;
struct TYPE_2__ {int sromrev; int boardflags2; } ;


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
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (struct brcms_phy*,int ,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy_pub*,int ) ;
 int FUNC_8 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct brcms_phy *VAR_25)
{

 FUNC_2(VAR_25, VAR_20,
        ~(VAR_18 | VAR_19));

 if (((VAR_25->sh->sromrev >= 4)
      && !(VAR_25->sh->boardflags2 & VAR_0))
     || ((VAR_25->sh->sromrev < 4))) {
  FUNC_2(VAR_25, VAR_8, 0x7F);
  FUNC_2(VAR_25, VAR_13, 0x7F);
 }

 FUNC_3(VAR_25, VAR_24, 0x3F, 0x2C);
 FUNC_8(VAR_25, VAR_4, 0x3C);

 FUNC_2(VAR_25, VAR_4,
        ~(VAR_23 | VAR_22));

 FUNC_4(VAR_25, VAR_2, VAR_3);

 FUNC_4(VAR_25, VAR_4, VAR_22);

 FUNC_6(1000);

 FUNC_4(VAR_25, VAR_4, VAR_23);

 FUNC_0(((FUNC_5(VAR_25, VAR_1) &
     VAR_21) != VAR_21), 2000);

 if (FUNC_1((FUNC_5(VAR_25, VAR_1) &
    VAR_21) != VAR_21,
   "HW error: radio calibration1\n"))
  return;

 FUNC_2(VAR_25, VAR_2,
        ~(VAR_3));

 FUNC_7((struct brcms_phy_pub *) VAR_25, VAR_25->radio_chanspec);

 FUNC_8(VAR_25, VAR_6, 9);
 FUNC_8(VAR_25, VAR_11, 9);

 FUNC_8(VAR_25, VAR_7, 0x83);
 FUNC_8(VAR_25, VAR_12, 0x83);

 FUNC_3(VAR_25, VAR_5,
        VAR_17, VAR_15);
 FUNC_3(VAR_25, VAR_10,
        VAR_17, VAR_15);
 if (VAR_25->nphy_gain_boost) {
  FUNC_2(VAR_25, VAR_9,
         ~(VAR_16));
  FUNC_2(VAR_25, VAR_14,
         ~(VAR_16));
 } else {
  FUNC_4(VAR_25, VAR_9,
        VAR_16);
  FUNC_4(VAR_25, VAR_14,
        VAR_16);
 }

 FUNC_6(2);
}
