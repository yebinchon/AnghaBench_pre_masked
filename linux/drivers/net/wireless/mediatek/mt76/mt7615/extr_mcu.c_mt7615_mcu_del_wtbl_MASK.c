
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtbl_req_hdr {int operation; int wlan_idx; } ;
struct TYPE_2__ {int idx; } ;
struct mt7615_sta {TYPE_1__ wcid; } ;
struct mt7615_dev {int mt76; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct wtbl_req_hdr*,int,int) ;

int FUNC_1(struct mt7615_dev *VAR_2,
   struct ieee80211_sta *VAR_3)
{
 struct mt7615_sta *VAR_4 = (struct mt7615_sta *)VAR_3->drv_priv;
 struct wtbl_req_hdr VAR_5 = {
  .wlan_idx = VAR_4->wcid.idx,
  .operation = VAR_1,
 };

 return FUNC_0(&VAR_2->mt76, VAR_0,
       &VAR_5, sizeof(VAR_5), 1);
}
