
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 int FUNC_2 (struct ieee80211_sta*,int ,int ) ;
 int FUNC_3 (struct ieee80211_sta*,int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_1,
         struct iwl_lq_sta *VAR_2, u8 VAR_3,
         struct ieee80211_sta *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(VAR_1, "Starting Tx agg: STA: %pM tid: %d\n",
       VAR_4->addr, VAR_3);


 VAR_5 = FUNC_2(VAR_4, VAR_3, 0);
 if (VAR_5 == -VAR_0) {





  FUNC_1(VAR_1, "Fail start Tx agg on tid: %d\n",
   VAR_3);
  FUNC_3(VAR_4, VAR_3);
 }
 return VAR_5;
}
