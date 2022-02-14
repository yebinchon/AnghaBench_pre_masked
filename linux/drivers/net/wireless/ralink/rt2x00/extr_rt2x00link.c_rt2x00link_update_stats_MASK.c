
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rxdone_entry_desc {int dev_flags; int rssi; } ;
struct link_ant {int rssi_ant; } ;
struct link_qual {int rx_success; } ;
struct link {int avg_rssi; struct link_ant ant; struct link_qual qual; } ;
struct rt2x00_dev {int intf_sta_count; struct link link; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct rt2x00_dev *VAR_1,
        struct sk_buff *VAR_2,
        struct rxdone_entry_desc *VAR_3)
{
 struct link *VAR_4 = &VAR_1->link;
 struct link_qual *VAR_5 = &VAR_1->link.qual;
 struct link_ant *VAR_6 = &VAR_1->link.ant;
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_2->data;




 if (!VAR_1->intf_sta_count)
  return;





 VAR_5->rx_success++;






 if (!FUNC_1(VAR_7->frame_control) ||
     !(VAR_3->dev_flags & VAR_0))
  return;




 FUNC_0(&VAR_4->avg_rssi, -VAR_3->rssi);




 FUNC_0(&VAR_6->rssi_ant, -VAR_3->rssi);
}
