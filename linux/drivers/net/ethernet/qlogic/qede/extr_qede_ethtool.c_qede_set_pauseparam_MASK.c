
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct qed_link_params {int supported_caps; int link_up; int pause_config; int override_flags; } ;
struct qed_link_output {int supported_caps; int link_up; int pause_config; int override_flags; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
typedef int params ;
typedef int current_link ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* set_link ) (int ,struct qed_link_params*) ;int (* get_link ) (int ,struct qed_link_params*) ;int (* can_link_change ) (int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qed_link_params*,int ,int) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct qed_link_params*) ;
 int FUNC_5 (int ,struct qed_link_params*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7,
          struct ethtool_pauseparam *VAR_8)
{
 struct qede_dev *VAR_9 = FUNC_2(VAR_7);
 struct qed_link_params VAR_10;
 struct qed_link_output VAR_11;

 if (!VAR_9->ops || !VAR_9->ops->common->can_link_change(VAR_9->cdev)) {
  FUNC_0(VAR_9,
   "Pause settings are not allowed to be changed\n");
  return -VAR_1;
 }

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_9->ops->common->get_link(VAR_9->cdev, &VAR_11);

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.override_flags |= VAR_2;
 if (VAR_8->autoneg) {
  if (!(VAR_11.supported_caps & VAR_6)) {
   FUNC_0(VAR_9, "autoneg not supported\n");
   return -VAR_0;
  }
  VAR_10.pause_config |= VAR_3;
 }
 if (VAR_8->rx_pause)
  VAR_10.pause_config |= VAR_4;
 if (VAR_8->tx_pause)
  VAR_10.pause_config |= VAR_5;

 VAR_10.link_up = 1;
 VAR_9->ops->common->set_link(VAR_9->cdev, &VAR_10);

 return 0;
}
