
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct txpower_info_5g {int** index_bw40_base; int** bw40_diff; int** bw20_diff; int** ofdm_diff; } ;
struct txpower_info_2g {int** index_cck_base; int** index_bw40_base; int** bw40_diff; int** bw20_diff; int** ofdm_diff; int** cck_diff; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct txpower_info_2g*,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7,
          struct txpower_info_2g *VAR_8,
          struct txpower_info_5g *VAR_9,
          bool VAR_10, u8 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_7);
 u32 VAR_13, VAR_14 = VAR_2, VAR_15, VAR_16 = 0;

 FUNC_1(VAR_12, VAR_0, VAR_1,
   "hal_ReadPowerValueFromPROM88E():PROMContent[0x%x]=0x%x\n",
   (VAR_14+1), VAR_11[VAR_14+1]);
 if (0xFF == VAR_11[VAR_14+1])
  VAR_10 = 1;

 if (VAR_10) {
  FUNC_1(VAR_12, VAR_0, VAR_1,
    "auto load fail : Use Default value!\n");
  for (VAR_13 = 0 ; VAR_13 < VAR_5 ; VAR_13++) {

   FUNC_3(VAR_8, VAR_13);
  }
  return;
 }

 for (VAR_13 = 0 ; VAR_13 < VAR_5 ; VAR_13++) {

  for (VAR_15 = 0 ; VAR_15 < VAR_3; VAR_15++) {
   VAR_8->index_cck_base[VAR_13][VAR_15] =
     VAR_11[VAR_14++];
   if (VAR_8->index_cck_base[VAR_13][VAR_15] == 0xFF)
    VAR_8->index_cck_base[VAR_13][VAR_15] =
      0x2D;
  }
  for (VAR_15 = 0 ; VAR_15 < VAR_3-1; VAR_15++) {
   VAR_8->index_bw40_base[VAR_13][VAR_15] =
    VAR_11[VAR_14++];
   if (VAR_8->index_bw40_base[VAR_13][VAR_15] == 0xFF)
    VAR_8->index_bw40_base[VAR_13][VAR_15] =
     0x2D;
  }
  VAR_8->bw40_diff[VAR_13][0] = 0;
  if (VAR_11[VAR_14] == 0xFF) {
   VAR_8->bw20_diff[VAR_13][0] = 0x02;
  } else {
   VAR_8->bw20_diff[VAR_13][0] =
    (VAR_11[VAR_14]&0xf0)>>4;

   if (VAR_8->bw20_diff[VAR_13][0] & FUNC_0(3))
    VAR_8->bw20_diff[VAR_13][0] |= 0xF0;
  }

  if (VAR_11[VAR_14] == 0xFF) {
   VAR_8->ofdm_diff[VAR_13][0] = 0x04;
  } else {
   VAR_8->ofdm_diff[VAR_13][0] =
    (VAR_11[VAR_14]&0x0f);

   if (VAR_8->ofdm_diff[VAR_13][0] & FUNC_0(3))
    VAR_8->ofdm_diff[VAR_13][0] |= 0xF0;
  }
  VAR_8->cck_diff[VAR_13][0] = 0;
  VAR_14++;
  for (VAR_16 = 1; VAR_16 < VAR_6; VAR_16++) {
   if (VAR_11[VAR_14] == 0xFF) {
    VAR_8->bw40_diff[VAR_13][VAR_16] = 0xFE;
   } else {
    VAR_8->bw40_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0xf0)>>4;
    if (VAR_8->bw40_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_8->bw40_diff[VAR_13][VAR_16] |=
       0xF0;
   }

   if (VAR_11[VAR_14] == 0xFF) {
    VAR_8->bw20_diff[VAR_13][VAR_16] =
     0xFE;
   } else {
    VAR_8->bw20_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0x0f);
    if (VAR_8->bw20_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_8->bw20_diff[VAR_13][VAR_16] |=
       0xF0;
   }
   VAR_14++;

   if (VAR_11[VAR_14] == 0xFF) {
    VAR_8->ofdm_diff[VAR_13][VAR_16] = 0xFE;
   } else {
    VAR_8->ofdm_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0xf0)>>4;
    if (VAR_8->ofdm_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_8->ofdm_diff[VAR_13][VAR_16] |=
       0xF0;
   }

   if (VAR_11[VAR_14] == 0xFF) {
    VAR_8->cck_diff[VAR_13][VAR_16] = 0xFE;
   } else {
    VAR_8->cck_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0x0f);
    if (VAR_8->cck_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_8->cck_diff[VAR_13][VAR_16] |=
       0xF0;
   }
   VAR_14++;
  }


  for (VAR_15 = 0 ; VAR_15 < VAR_4; VAR_15++) {
   VAR_9->index_bw40_base[VAR_13][VAR_15] =
    VAR_11[VAR_14++];
   if (VAR_9->index_bw40_base[VAR_13][VAR_15] == 0xFF)
    VAR_9->index_bw40_base[VAR_13][VAR_15] =
      0xFE;
  }

  VAR_9->bw40_diff[VAR_13][0] = 0;

  if (VAR_11[VAR_14] == 0xFF) {
   VAR_9->bw20_diff[VAR_13][0] = 0;
  } else {
   VAR_9->bw20_diff[VAR_13][0] =
     (VAR_11[VAR_14]&0xf0)>>4;
   if (VAR_9->bw20_diff[VAR_13][0] & FUNC_0(3))
    VAR_9->bw20_diff[VAR_13][0] |= 0xF0;
  }

  if (VAR_11[VAR_14] == 0xFF) {
   VAR_9->ofdm_diff[VAR_13][0] = 0x04;
  } else {
   VAR_9->ofdm_diff[VAR_13][0] = (VAR_11[VAR_14]&0x0f);
   if (VAR_9->ofdm_diff[VAR_13][0] & FUNC_0(3))
    VAR_9->ofdm_diff[VAR_13][0] |= 0xF0;
  }
  VAR_14++;
  for (VAR_16 = 1; VAR_16 < VAR_6; VAR_16++) {
   if (VAR_11[VAR_14] == 0xFF) {
    VAR_9->bw40_diff[VAR_13][VAR_16] = 0xFE;
   } else {
    VAR_9->bw40_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0xf0)>>4;
    if (VAR_9->bw40_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_9->bw40_diff[VAR_13][VAR_16] |=
       0xF0;
   }

   if (VAR_11[VAR_14] == 0xFF) {
    VAR_9->bw20_diff[VAR_13][VAR_16] = 0xFE;
   } else {
    VAR_9->bw20_diff[VAR_13][VAR_16] =
      (VAR_11[VAR_14]&0x0f);
    if (VAR_9->bw20_diff[VAR_13][VAR_16] &
        FUNC_0(3))
     VAR_9->bw20_diff[VAR_13][VAR_16] |=
       0xF0;
   }
   VAR_14++;
  }

  if (VAR_11[VAR_14] == 0xFF) {
   VAR_9->ofdm_diff[VAR_13][1] = 0xFE;
   VAR_9->ofdm_diff[VAR_13][2] = 0xFE;
  } else {
   VAR_9->ofdm_diff[VAR_13][1] =
     (VAR_11[VAR_14]&0xf0)>>4;
   VAR_9->ofdm_diff[VAR_13][2] =
     (VAR_11[VAR_14]&0x0f);
  }
  VAR_14++;

  if (VAR_11[VAR_14] == 0xFF)
   VAR_9->ofdm_diff[VAR_13][3] = 0xFE;
  else
   VAR_9->ofdm_diff[VAR_13][3] = (VAR_11[VAR_14]&0x0f);
  VAR_14++;

  for (VAR_16 = 1; VAR_16 < VAR_6; VAR_16++) {
   if (VAR_9->ofdm_diff[VAR_13][VAR_16] == 0xFF)
    VAR_9->ofdm_diff[VAR_13][VAR_16] = 0xFE;
   else if (VAR_9->ofdm_diff[VAR_13][VAR_16] & FUNC_0(3))
    VAR_9->ofdm_diff[VAR_13][VAR_16] |= 0xF0;
  }
 }
}
