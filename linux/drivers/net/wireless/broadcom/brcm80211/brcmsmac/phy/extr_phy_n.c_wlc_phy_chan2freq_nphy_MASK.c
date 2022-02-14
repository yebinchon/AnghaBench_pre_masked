
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef size_t u32 ;
struct chan_info_nphy_radio205x {size_t chan; int freq; } ;
struct chan_info_nphy_radio2057_rev5 {size_t chan; int freq; } ;
struct chan_info_nphy_radio2057 {size_t chan; int freq; } ;
struct chan_info_nphy_2055 {size_t chan; int freq; } ;
struct TYPE_2__ {int radiorev; int radiover; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 size_t FUNC_0 (struct chan_info_nphy_radio205x*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 struct chan_info_nphy_radio205x* VAR_1 ;
 struct chan_info_nphy_radio205x* VAR_2 ;
 struct chan_info_nphy_radio205x* VAR_3 ;
 struct chan_info_nphy_radio205x* VAR_4 ;
 struct chan_info_nphy_radio205x* VAR_5 ;
 struct chan_info_nphy_radio205x* VAR_6 ;
 struct chan_info_nphy_radio205x* VAR_7 ;
 struct chan_info_nphy_radio205x* VAR_8 ;
 struct chan_info_nphy_radio205x* VAR_9 ;
 struct chan_info_nphy_radio205x* VAR_10 ;
 struct chan_info_nphy_radio205x* VAR_11 ;
 struct chan_info_nphy_radio205x* VAR_12 ;
 struct chan_info_nphy_radio205x* VAR_13 ;

__attribute__((used)) static bool
FUNC_3(struct brcms_phy *VAR_14, uint VAR_15, int *VAR_16,
         const struct chan_info_nphy_radio2057 **VAR_17,
         const struct chan_info_nphy_radio205x **VAR_18,
         const struct chan_info_nphy_radio2057_rev5 **VAR_19,
         const struct chan_info_nphy_2055 **VAR_20)
{
 uint VAR_21;
 const struct chan_info_nphy_radio2057 *VAR_22 = ((void*)0);
 const struct chan_info_nphy_radio205x *VAR_23 = ((void*)0);
 const struct chan_info_nphy_radio2057_rev5 *VAR_24 = ((void*)0);
 u32 VAR_25 = 0;

 int VAR_26 = 0;

 if (FUNC_1(VAR_14->pubpi.phy_rev, 7)) {

  if (FUNC_2(VAR_14->pubpi.phy_rev, 7)) {

   VAR_22 = VAR_9;
   VAR_25 = FUNC_0(VAR_9);

  } else if (FUNC_2(VAR_14->pubpi.phy_rev, 8)
      || FUNC_2(VAR_14->pubpi.phy_rev, 9)) {
   switch (VAR_14->pubpi.radiorev) {

   case 5:

    if (VAR_14->pubpi.radiover == 0x0) {

     VAR_24 =
      VAR_10;
     VAR_25 = FUNC_0(
        VAR_10);

    } else if (VAR_14->pubpi.radiover == 0x1) {

     VAR_24 =
      VAR_13;
     VAR_25 = FUNC_0(
      VAR_13);

    }
    break;

   case 7:
    VAR_22 =
     VAR_11;
    VAR_25 = FUNC_0(
        VAR_11);
    break;

   case 8:
    VAR_22 =
     VAR_12;
    VAR_25 = FUNC_0(
        VAR_12);
    break;

   default:
    break;
   }
  } else if (FUNC_2(VAR_14->pubpi.phy_rev, 16)) {

   VAR_22 = VAR_12;
   VAR_25 = FUNC_0(VAR_12);
  } else {
   goto fail;
  }

  for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
   if (VAR_14->pubpi.radiorev == 5) {

    if (VAR_24[VAR_21].chan == VAR_15)
     break;
   } else {

    if (VAR_22[VAR_21].chan == VAR_15)
     break;
   }
  }

  if (VAR_21 >= VAR_25)
   goto fail;

  if (VAR_14->pubpi.radiorev == 5) {
   *VAR_19 = &VAR_24[VAR_21];
   VAR_26 = VAR_24[VAR_21].freq;
  } else {
   *VAR_17 = &VAR_22[VAR_21];
   VAR_26 = VAR_22[VAR_21].freq;
  }

 } else if (FUNC_1(VAR_14->pubpi.phy_rev, 3)) {
  if (FUNC_2(VAR_14->pubpi.phy_rev, 3)) {
   VAR_23 = VAR_2;
   VAR_25 = FUNC_0(VAR_2);
  } else if (FUNC_2(VAR_14->pubpi.phy_rev, 4)) {
   VAR_23 = VAR_3;
   VAR_25 = FUNC_0(VAR_3);
  } else if (FUNC_2(VAR_14->pubpi.phy_rev, 5)
      || FUNC_2(VAR_14->pubpi.phy_rev, 6)) {
   switch (VAR_14->pubpi.radiorev) {
   case 5:
    VAR_23 = VAR_4;
    VAR_25 = FUNC_0(VAR_4);
    break;
   case 6:
    VAR_23 = VAR_7;
    VAR_25 = FUNC_0(VAR_7);
    break;
   case 7:
   case 9:
    VAR_23 = VAR_5;
    VAR_25 =
     FUNC_0(VAR_5);
    break;
   case 8:
    VAR_23 = VAR_8;
    VAR_25 = FUNC_0(VAR_8);
    break;
   case 11:
    VAR_23 = VAR_6;
    VAR_25 = FUNC_0(
          VAR_6);
    break;
   default:
    break;
   }
  }

  for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
   if (VAR_23[VAR_21].chan == VAR_15)
    break;
  }

  if (VAR_21 >= VAR_25)
   goto fail;

  *VAR_18 = &VAR_23[VAR_21];
  VAR_26 = VAR_23[VAR_21].freq;

 } else {
  for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_1); VAR_21++)
   if (VAR_1[VAR_21].chan == VAR_15)
    break;

  if (VAR_21 >= FUNC_0(VAR_1))
   goto fail;

  *VAR_20 = &VAR_1[VAR_21];
  VAR_26 = VAR_1[VAR_21].freq;
 }

 *VAR_16 = VAR_26;
 return 1;

fail:
 *VAR_16 = VAR_0;
 return 0;
}
