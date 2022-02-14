
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rs_rate {int stbc; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_lq_cmd {int mimo_delim; int flags; int rs_table; } ;
struct iwl_lq_sta {struct iwl_lq_cmd lq; } ;
struct ieee80211_sta {int dummy; } ;
typedef int rate ;
struct TYPE_2__ {int ucode_capa; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct rs_rate*) ;
 scalar_t__ FUNC_6 (struct rs_rate*) ;
 scalar_t__ FUNC_7 (struct rs_rate*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct rs_rate*,struct rs_rate const*,int) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_lq_sta*,struct rs_rate*,int ,int*,int,int,int ,int) ;
 int FUNC_11 (struct iwl_lq_sta*,struct rs_rate*) ;
 scalar_t__ FUNC_12 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*) ;

__attribute__((used)) static void FUNC_13(struct iwl_mvm *VAR_10,
     struct ieee80211_sta *VAR_11,
     struct iwl_lq_sta *VAR_12,
     const struct rs_rate *VAR_13)
{
 struct rs_rate VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;
 u8 VAR_18 = 0;
 struct iwl_lq_cmd *VAR_19 = &VAR_12->lq;
 bool VAR_20 = 0;
 u32 VAR_21;

 FUNC_9(&VAR_14, VAR_13, sizeof(VAR_14));

 VAR_18 = FUNC_8(VAR_10);


 if (!FUNC_4(&VAR_10->fw->ucode_capa, VAR_9) &&
     FUNC_12(VAR_10, VAR_11, VAR_12))
  VAR_14.stbc = 1;

 if (FUNC_7(&VAR_14)) {
  VAR_15 = VAR_4;
  VAR_16 = VAR_0;
 } else if (FUNC_6(&VAR_14)) {
  VAR_15 = VAR_3;
  VAR_16 = VAR_0;
 } else {
  VAR_15 = VAR_1;
  VAR_16 = VAR_2;
  VAR_20 = 1;
 }

 FUNC_10(VAR_10, VAR_12, &VAR_14, VAR_19->rs_table, &VAR_17,
     VAR_15, VAR_16, VAR_18,
     VAR_20);

 FUNC_11(VAR_12, &VAR_14);

 if (FUNC_7(&VAR_14)) {
  VAR_15 = VAR_7;
  VAR_16 = VAR_8;
  VAR_19->mimo_delim = VAR_17;
 } else if (FUNC_5(&VAR_14)) {
  VAR_15 = VAR_5;
  VAR_16 = VAR_6;
 } else {
  FUNC_3(1);
 }

 VAR_20 = 1;

 FUNC_10(VAR_10, VAR_12, &VAR_14, VAR_19->rs_table, &VAR_17,
     VAR_15, VAR_16, VAR_18,
     VAR_20);

 FUNC_11(VAR_12, &VAR_14);

 VAR_15 = VAR_5;
 VAR_16 = VAR_6;

 FUNC_10(VAR_10, VAR_12, &VAR_14, VAR_19->rs_table, &VAR_17,
     VAR_15, VAR_16, VAR_18,
     VAR_20);


 VAR_21 = FUNC_0(FUNC_1(VAR_19->flags));
 VAR_19->flags = FUNC_2(VAR_19->flags, VAR_21);
}
