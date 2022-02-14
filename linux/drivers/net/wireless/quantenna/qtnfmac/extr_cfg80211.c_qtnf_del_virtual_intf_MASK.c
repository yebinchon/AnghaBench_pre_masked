
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {struct net_device* netdev; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int iftype; } ;
struct qtnf_vif {TYPE_2__ wdev; TYPE_1__* netdev; int vifid; TYPE_3__* mac; int high_pri_tx_work; int high_pri_tx_queue; } ;
struct net_device {scalar_t__ reg_state; } ;
struct TYPE_6__ {int macid; } ;
struct TYPE_4__ {int * ieee80211_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct qtnf_vif*) ;
 struct qtnf_vif* FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*) ;

int FUNC_12(struct wiphy *VAR_3, struct wireless_dev *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct qtnf_vif *VAR_6;
 struct sk_buff *VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_4->netdev);

 FUNC_9(VAR_6->mac, 1);


 FUNC_5(VAR_5);
 if (FUNC_4(VAR_5))
  FUNC_3(VAR_5);

 while ((VAR_7 = FUNC_10(&VAR_6->high_pri_tx_queue)))
  FUNC_2(VAR_7);

 FUNC_1(&VAR_6->high_pri_tx_work);

 if (VAR_5->reg_state == VAR_1)
  FUNC_11(VAR_5);

 if (FUNC_7(VAR_6))
  FUNC_6("VIF%u.%u: failed to delete VIF\n", VAR_6->mac->macid,
         VAR_6->vifid);

 VAR_6->netdev->ieee80211_ptr = ((void*)0);
 VAR_6->netdev = ((void*)0);
 VAR_6->wdev.iftype = VAR_2;

 return 0;
}
