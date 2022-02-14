
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_3__* ops; } ;
struct TYPE_4__ {int tx_lpi_timer; int tx_lpi_enable; int enable; int adv_caps; } ;
struct qed_link_params {int link_up; TYPE_1__ eee; int override_flags; int eee_supported; } ;
struct qed_link_output {int link_up; TYPE_1__ eee; int override_flags; int eee_supported; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int advertised; int tx_lpi_timer; int tx_lpi_enabled; int eee_enabled; } ;
typedef int params ;
typedef int current_link ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* set_link ) (int ,struct qed_link_params*) ;int (* get_link ) (int ,struct qed_link_params*) ;int (* can_link_change ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct qed_link_params*,int ,int) ;
 struct qede_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct qed_link_params*) ;
 int FUNC_6 (int ,struct qed_link_params*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_8, struct ethtool_eee *VAR_9)
{
 struct qede_dev *VAR_10 = FUNC_3(VAR_8);
 struct qed_link_output VAR_11;
 struct qed_link_params VAR_12;

 if (!VAR_10->ops->common->can_link_change(VAR_10->cdev)) {
  FUNC_0(VAR_10, "Link settings are not allowed to be changed\n");
  return -VAR_3;
 }

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_10->ops->common->get_link(VAR_10->cdev, &VAR_11);

 if (!VAR_11.eee_supported) {
  FUNC_0(VAR_10, "EEE is not supported\n");
  return -VAR_3;
 }

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.override_flags |= VAR_6;

 if (!(VAR_9->advertised & (VAR_1 |
       VAR_0)) ||
     ((VAR_9->advertised & (VAR_1 |
       VAR_0)) !=
      VAR_9->advertised)) {
  FUNC_1(VAR_10, VAR_7,
      "Invalid advertised capabilities %d\n",
      VAR_9->advertised);
  return -VAR_2;
 }

 if (VAR_9->advertised & VAR_1)
  VAR_12.eee.adv_caps = VAR_5;
 if (VAR_9->advertised & VAR_0)
  VAR_12.eee.adv_caps |= VAR_4;
 VAR_12.eee.enable = VAR_9->eee_enabled;
 VAR_12.eee.tx_lpi_enable = VAR_9->tx_lpi_enabled;
 VAR_12.eee.tx_lpi_timer = VAR_9->tx_lpi_timer;

 VAR_12.link_up = 1;
 VAR_10->ops->common->set_link(VAR_10->cdev, &VAR_12);

 return 0;
}
