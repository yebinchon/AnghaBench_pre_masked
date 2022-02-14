
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_intf {struct queue_entry* beacon; int beacon_skb_mutex; } ;
struct rt2x00_dev {scalar_t__ packet_filter; int intf_sta_count; int intf_ap_count; int flags; struct data_queue* bcn; } ;
struct queue_entry {int flags; } ;
struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct data_queue {unsigned int limit; struct queue_entry* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rt2x00_dev*,struct rt2x00_intf*,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 struct rt2x00_intf* FUNC_5 (struct ieee80211_vif*) ;

int FUNC_6(struct ieee80211_hw *VAR_6,
       struct ieee80211_vif *VAR_7)
{
 struct rt2x00_dev *VAR_8 = VAR_6->priv;
 struct rt2x00_intf *VAR_9 = FUNC_5(VAR_7);
 struct data_queue *VAR_10 = VAR_8->bcn;
 struct queue_entry *VAR_11 = ((void*)0);
 unsigned int VAR_12;





 if (!FUNC_3(VAR_0, &VAR_8->flags) ||
     !FUNC_3(VAR_1, &VAR_8->flags))
  return -VAR_3;







 for (VAR_12 = 0; VAR_12 < VAR_10->limit; VAR_12++) {
  VAR_11 = &VAR_10->entries[VAR_12];
  if (!FUNC_2(VAR_4, &VAR_11->flags))
   break;
 }

 if (FUNC_4(VAR_12 == VAR_10->limit))
  return -VAR_2;






 if (VAR_7->type == VAR_5)
  VAR_8->intf_ap_count++;
 else
  VAR_8->intf_sta_count++;

 FUNC_0(&VAR_9->beacon_skb_mutex);
 VAR_9->beacon = VAR_11;
 FUNC_1(VAR_8, VAR_9, VAR_7->type,
         VAR_7->addr, ((void*)0));






 VAR_8->packet_filter = 0;

 return 0;
}
