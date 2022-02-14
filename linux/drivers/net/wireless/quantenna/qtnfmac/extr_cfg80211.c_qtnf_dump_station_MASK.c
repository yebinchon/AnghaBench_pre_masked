
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int generation; scalar_t__ filled; } ;
struct TYPE_2__ {int iftype; int current_bss; } ;
struct qtnf_vif {int generation; int netdev; TYPE_1__ wdev; int sta_list; int bssid; } ;
struct qtnf_sta_node {int mac_addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qtnf_vif*,int *,struct station_info*) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;
 struct qtnf_sta_node* FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_3, struct net_device *VAR_4,
    int VAR_5, u8 *VAR_6, struct station_info *VAR_7)
{
 struct qtnf_vif *VAR_8 = FUNC_3(VAR_4);
 const struct qtnf_sta_node *VAR_9;
 int VAR_10;

 switch (VAR_8->wdev.iftype) {
 case 128:
  if (VAR_5 != 0 || !VAR_8->wdev.current_bss)
   return -VAR_0;

  FUNC_1(VAR_6, VAR_8->bssid);
  break;
 case 129:
  VAR_9 = FUNC_4(&VAR_8->sta_list, VAR_5);
  if (FUNC_5(!VAR_9))
   return -VAR_0;

  FUNC_1(VAR_6, VAR_9->mac_addr);
  break;
 default:
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_6, VAR_7);

 if (VAR_8->wdev.iftype == 129) {
  if (VAR_10 == -VAR_0) {
   FUNC_0(VAR_8->netdev, VAR_6, VAR_2);
   VAR_7->filled = 0;
  }
 }

 VAR_7->generation = VAR_8->generation;

 return VAR_10;
}
