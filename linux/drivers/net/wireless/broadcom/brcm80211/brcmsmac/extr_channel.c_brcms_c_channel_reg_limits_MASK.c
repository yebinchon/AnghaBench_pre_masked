
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint ;
typedef void* u8 ;
typedef int u16 ;
struct txpwr_limits {scalar_t__* ofdm_40_siso; scalar_t__* ofdm_40_cdd; scalar_t__* mcs_40_siso; scalar_t__* mcs_20_cdd; scalar_t__* mcs_40_cdd; scalar_t__* mcs_20_stbc; scalar_t__* mcs_40_stbc; void* mcs32; void** mcs_40_mimo; void** mcs_20_mimo; void** mcs_20_siso; void** ofdm; void** ofdm_cdd; void** cck; } ;
struct locale_mimo_info {int* maxpwr20; int* maxpwr40; } ;
struct ieee80211_channel {int max_power; } ;
struct country_info {int locale_mimo_2G; int locale_mimo_5G; } ;
struct brcms_cm_info {TYPE_5__* world_regd; struct brcms_c_info* wlc; } ;
struct brcms_c_info {struct brcms_band** bandstate; TYPE_4__* pub; } ;
struct brcms_band {scalar_t__ bandtype; int antgain; } ;
struct TYPE_10__ {struct country_info country; } ;
struct TYPE_9__ {TYPE_3__* ieee_hw; } ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct TYPE_7__ {TYPE_1__ chandef; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 struct locale_mimo_info* FUNC_4 (int ) ;
 struct locale_mimo_info* FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 struct locale_mimo_info const VAR_7 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct txpwr_limits*,int ,int) ;
 int FUNC_9 (int,int) ;

void
FUNC_10(struct brcms_cm_info *VAR_8, u16 VAR_9,
         struct txpwr_limits *VAR_10)
{
 struct brcms_c_info *VAR_11 = VAR_8->wlc;
 struct ieee80211_channel *VAR_12 = VAR_11->pub->ieee_hw->conf.chandef.chan;
 uint VAR_13;
 uint VAR_14;
 int VAR_15;
 int VAR_16;
 const struct country_info *VAR_17;
 struct brcms_band *VAR_18;
 int VAR_19 = VAR_4;
 const struct locale_mimo_info *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;
 uint VAR_24;

 FUNC_8(VAR_10, 0, sizeof(struct txpwr_limits));

 if (FUNC_3(!VAR_12))
  return;

 VAR_17 = &VAR_8->world_regd->country;

 VAR_14 = FUNC_1(VAR_9);
 VAR_18 = VAR_11->bandstate[FUNC_6(VAR_9)];
 VAR_20 = (VAR_18->bandtype == VAR_6) ?
     FUNC_5(VAR_17->locale_mimo_5G) :
     FUNC_4(VAR_17->locale_mimo_2G);

 VAR_16 = VAR_18->antgain;

 if (VAR_18->bandtype == VAR_5)
  VAR_19 = FUNC_2(22);

 VAR_15 = FUNC_2(VAR_12->max_power) - VAR_16;
 VAR_15 = FUNC_7(VAR_15, 0);
 VAR_15 = FUNC_9(VAR_15, VAR_19);


 if (VAR_18->bandtype == VAR_5) {
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
   VAR_10->cck[VAR_13] = (u8) VAR_15;
 }

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_10->ofdm[VAR_13] = (u8) VAR_15;
  VAR_10->ofdm_40_siso[VAR_13] = 0;

  VAR_10->ofdm_cdd[VAR_13] = (u8) VAR_15;

  VAR_10->ofdm_40_cdd[VAR_13] = 0;
 }

 VAR_16 = 0;
 if (VAR_18->antgain > FUNC_2(6))
  VAR_16 = VAR_18->antgain - FUNC_2(6);

 if (VAR_18->bandtype == VAR_5)
  VAR_23 = (VAR_14 - 1);
 else
  VAR_23 = FUNC_0(VAR_14);

 VAR_21 = VAR_20->maxpwr20[VAR_23];
 VAR_22 = VAR_20->maxpwr40[VAR_23];

 VAR_21 = VAR_21 - VAR_16;
 VAR_21 = FUNC_7(VAR_21, 0);
 VAR_22 = VAR_22 - VAR_16;
 VAR_22 = FUNC_7(VAR_22, 0);


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {





  VAR_10->mcs_20_siso[VAR_13] = VAR_10->ofdm[VAR_13];
  VAR_10->mcs_40_siso[VAR_13] = 0;
 }


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_10->mcs_20_cdd[VAR_13] = (u8) VAR_21;
  VAR_10->mcs_40_cdd[VAR_13] = (u8) VAR_22;
 }





 if (VAR_20 == &VAR_7) {
  if (VAR_20 == &VAR_7) {
   VAR_21 = FUNC_2(16);
   VAR_22 = 0;

   if (VAR_14 >= 3 && VAR_14 <= 11)
    VAR_22 = FUNC_2(16);
  }

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_10->mcs_20_siso[VAR_13] = (u8) VAR_21;
   VAR_10->mcs_40_siso[VAR_13] = (u8) VAR_22;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_10->mcs_20_stbc[VAR_13] = 0;
  VAR_10->mcs_40_stbc[VAR_13] = 0;
 }


 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_10->mcs_20_mimo[VAR_13] = (u8) VAR_21;
  VAR_10->mcs_40_mimo[VAR_13] = (u8) VAR_22;
 }


 VAR_10->mcs32 = (u8) VAR_22;

 for (VAR_13 = 0, VAR_24 = 0; VAR_13 < VAR_3; VAR_13++, VAR_24++) {
  if (VAR_10->ofdm_40_cdd[VAR_13] == 0)
   VAR_10->ofdm_40_cdd[VAR_13] = VAR_10->mcs_40_cdd[VAR_24];
  if (VAR_13 == 0) {
   VAR_13 = VAR_13 + 1;
   if (VAR_10->ofdm_40_cdd[VAR_13] == 0)
    VAR_10->ofdm_40_cdd[VAR_13] = VAR_10->mcs_40_cdd[VAR_24];
  }
 }





 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (VAR_10->mcs_40_siso[VAR_13] == 0)
   VAR_10->mcs_40_siso[VAR_13] = VAR_10->mcs_40_cdd[VAR_13];
 }

 for (VAR_13 = 0, VAR_24 = 0; VAR_13 < VAR_3; VAR_13++, VAR_24++) {
  if (VAR_10->ofdm_40_siso[VAR_13] == 0)
   VAR_10->ofdm_40_siso[VAR_13] = VAR_10->mcs_40_siso[VAR_24];
  if (VAR_13 == 0) {
   VAR_13 = VAR_13 + 1;
   if (VAR_10->ofdm_40_siso[VAR_13] == 0)
    VAR_10->ofdm_40_siso[VAR_13] = VAR_10->mcs_40_siso[VAR_24];
  }
 }





 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (VAR_10->mcs_20_stbc[VAR_13] == 0)
   VAR_10->mcs_20_stbc[VAR_13] = VAR_10->mcs_20_cdd[VAR_13];

  if (VAR_10->mcs_40_stbc[VAR_13] == 0)
   VAR_10->mcs_40_stbc[VAR_13] = VAR_10->mcs_40_cdd[VAR_13];
 }

 return;
}
