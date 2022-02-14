
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsi_hw {struct rsi_common* priv; TYPE_1__* host_intf_ops; } ;
struct rsi_common {int reinit_hw; int iface_down; int mutex; int wlan_init_completion; scalar_t__ hibernate_resume; } ;
struct ieee80211_hw {int wiphy; struct rsi_hw* priv; } ;
struct TYPE_2__ {int (* reinit_device ) (struct rsi_hw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rsi_common*,int ) ;
 int FUNC_4 (struct rsi_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_1->priv;
 struct rsi_common *VAR_3 = VAR_2->priv;

 FUNC_2(VAR_0, "===> Interface UP <===\n");
 FUNC_0(&VAR_3->mutex);
 if (VAR_3->hibernate_resume) {
  VAR_3->reinit_hw = 1;
  VAR_2->host_intf_ops->reinit_device(VAR_2);
  FUNC_5(&VAR_2->priv->wlan_init_completion);
 }
 VAR_3->iface_down = 0;
 FUNC_6(VAR_1->wiphy);
 FUNC_3(VAR_3, 0);
 FUNC_1(&VAR_3->mutex);

 return 0;
}
