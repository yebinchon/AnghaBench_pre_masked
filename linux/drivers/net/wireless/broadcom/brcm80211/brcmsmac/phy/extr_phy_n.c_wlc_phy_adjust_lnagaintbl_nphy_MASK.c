
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {size_t phy_corenum; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; scalar_t__ nphy_elna_gain_config; TYPE_1__ pubpi; int radio_chanspec; scalar_t__ nphy_gain_boost; } ;
typedef int s16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,size_t,int,int,int,int*) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_3)
{
 uint VAR_4;
 int VAR_5;
 s16 VAR_6[2];
 u8 VAR_7;
 u16 VAR_8[2];
 u16 VAR_9[4];

 if (VAR_3->phyhang_avoid)
  FUNC_4(VAR_3, 1);

 if (VAR_3->nphy_gain_boost) {
  if ((FUNC_1(VAR_3->radio_chanspec))) {

   VAR_6[0] = 6;
   VAR_6[1] = 6;
  } else {

   VAR_7 = FUNC_0(VAR_3->radio_chanspec);
   VAR_6[0] =
    (s16)
    FUNC_2(((VAR_1[0] *
            VAR_7) +
           VAR_1[1]), 13);
   VAR_6[1] =
    (s16)
    FUNC_2(((VAR_2[0] *
            VAR_7) +
           VAR_2[1]), 13);
  }
 } else {

  VAR_6[0] = 0;
  VAR_6[1] = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->pubpi.phy_corenum; VAR_4++) {
  if (VAR_3->nphy_elna_gain_config) {

   VAR_9[0] = VAR_0[2] + VAR_6[VAR_4];
   VAR_9[1] = VAR_0[3] + VAR_6[VAR_4];
   VAR_9[2] = VAR_0[3] + VAR_6[VAR_4];
   VAR_9[3] = VAR_0[3] + VAR_6[VAR_4];
  } else {
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
    VAR_9[VAR_5] =
     VAR_0[VAR_5] +
     VAR_6[VAR_4];
  }
  FUNC_5(VAR_3, VAR_4, 4, 8, 16, VAR_9);

  VAR_8[VAR_4] =
   (u16) (VAR_0[2] + VAR_6[VAR_4] + 4);
 }

 FUNC_3(VAR_3, 0x1e, (0xff << 0), (VAR_8[0] << 0));
 FUNC_3(VAR_3, 0x34, (0xff << 0), (VAR_8[1] << 0));

 if (VAR_3->phyhang_avoid)
  FUNC_4(VAR_3, 0);
}
