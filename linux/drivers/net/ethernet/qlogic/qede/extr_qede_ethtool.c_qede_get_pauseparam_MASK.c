
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct qed_link_output {int pause_config; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; int cmd; } ;
typedef int current_link ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* get_link ) (int ,struct qed_link_output*) ;} ;


 int FUNC_0 (struct qede_dev*,int ,char*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_link_output*,int ,int) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct qed_link_output*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4,
    struct ethtool_pauseparam *VAR_5)
{
 struct qede_dev *VAR_6 = FUNC_2(VAR_4);
 struct qed_link_output VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_6->ops->common->get_link(VAR_6->cdev, &VAR_7);

 if (VAR_7.pause_config & VAR_0)
  VAR_5->autoneg = 1;
 if (VAR_7.pause_config & VAR_1)
  VAR_5->rx_pause = 1;
 if (VAR_7.pause_config & VAR_2)
  VAR_5->tx_pause = 1;

 FUNC_0(VAR_6, VAR_3,
     "ethtool_pauseparam: cmd %d  autoneg %d  rx_pause %d  tx_pause %d\n",
     VAR_5->cmd, VAR_5->autoneg, VAR_5->rx_pause,
     VAR_5->tx_pause);
}
