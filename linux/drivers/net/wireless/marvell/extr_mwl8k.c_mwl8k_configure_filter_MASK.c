
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef scalar_t__ u64 ;
struct mwl8k_vif {TYPE_2__* vif; } ;
struct mwl8k_priv {int sniffer_enabled; scalar_t__ ap_fw; } ;
struct mwl8k_cmd_pkt {int dummy; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_3__ {char* bssid; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct mwl8k_cmd_pkt* FUNC_0 (struct ieee80211_hw*,int,int *) ;
 int FUNC_1 (struct mwl8k_cmd_pkt*) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*,char const*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,unsigned int,unsigned int*) ;
 struct mwl8k_vif* FUNC_6 (struct mwl8k_priv*) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,struct mwl8k_cmd_pkt*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_4,
       unsigned int VAR_5,
       unsigned int *VAR_6,
       u64 VAR_7)
{
 struct mwl8k_priv *VAR_8 = VAR_4->priv;
 struct mwl8k_cmd_pkt *VAR_9 = (void *)(unsigned long)VAR_7;





 if (VAR_8->ap_fw) {
  *VAR_6 &= VAR_0 | VAR_1;
  FUNC_1(VAR_9);
  return;
 }





 if (*VAR_6 & (VAR_2 | VAR_3) &&
     FUNC_5(VAR_4, VAR_5, VAR_6)) {
  FUNC_1(VAR_9);
  return;
 }


 *VAR_6 &= VAR_0 | VAR_1;

 if (FUNC_7(VAR_4)) {
  FUNC_1(VAR_9);
  return;
 }

 if (VAR_8->sniffer_enabled) {
  FUNC_2(VAR_4, 0);
  VAR_8->sniffer_enabled = 0;
 }

 if (VAR_5 & VAR_1) {
  if (*VAR_6 & VAR_1) {



   FUNC_4(VAR_4);
  } else {
   struct mwl8k_vif *VAR_10;
   const u8 *VAR_11;
   VAR_10 = FUNC_6(VAR_8);
   if (VAR_10 != ((void*)0))
    VAR_11 = VAR_10->vif->bss_conf.bssid;
   else
    VAR_11 = "\x01\x00\x00\x00\x00\x00";

   FUNC_3(VAR_4, VAR_11);
  }
 }







 if (*VAR_6 & VAR_0) {
  FUNC_1(VAR_9);
  VAR_9 = FUNC_0(VAR_4, 1, ((void*)0));
 }

 if (VAR_9 != ((void*)0)) {
  FUNC_9(VAR_4, VAR_9);
  FUNC_1(VAR_9);
 }

 FUNC_8(VAR_4);
}
