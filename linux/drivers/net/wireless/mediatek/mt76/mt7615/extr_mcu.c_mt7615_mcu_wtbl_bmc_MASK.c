
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wtbl_req_hdr {int operation; int wlan_idx; } ;
struct TYPE_3__ {int idx; } ;
struct TYPE_4__ {TYPE_1__ wcid; } ;
struct mt7615_vif {TYPE_2__ sta; } ;
struct mt7615_dev {int mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct wtbl_req_hdr*,int,int) ;
 int FUNC_1 (struct mt7615_dev*,struct mt7615_vif*) ;

int FUNC_2(struct mt7615_dev *VAR_2,
   struct ieee80211_vif *VAR_3, bool VAR_4)
{
 struct mt7615_vif *VAR_5 = (struct mt7615_vif *)VAR_3->drv_priv;

 if (!VAR_4) {
  struct wtbl_req_hdr VAR_6 = {
   .wlan_idx = VAR_5->sta.wcid.idx,
   .operation = VAR_1,
  };

  return FUNC_0(&VAR_2->mt76, VAR_0,
        &VAR_6, sizeof(VAR_6), 1);
 }

 return FUNC_1(VAR_2, VAR_5);
}
