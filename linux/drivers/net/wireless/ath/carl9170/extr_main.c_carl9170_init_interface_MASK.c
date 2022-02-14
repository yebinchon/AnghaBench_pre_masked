
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; int p2p; int addr; } ;
struct ath_common {int macaddr; } ;
struct ar9170 {int disable_offload; int rx_software_decryption; struct ath_common common; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ar9170 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct ath_common *VAR_5 = &VAR_3->common;
 int VAR_6;

 if (!VAR_4) {
  FUNC_1(FUNC_0(VAR_3));
  return 0;
 }

 FUNC_3(VAR_5->macaddr, VAR_4->addr, VAR_0);
 VAR_3->disable_offload |= ((VAR_4->type != VAR_2) &&
     (VAR_4->type != VAR_1));







 VAR_3->disable_offload |= VAR_4->p2p;

 VAR_3->rx_software_decryption = VAR_3->disable_offload;

 VAR_6 = FUNC_2(VAR_3);
 return VAR_6;
}
