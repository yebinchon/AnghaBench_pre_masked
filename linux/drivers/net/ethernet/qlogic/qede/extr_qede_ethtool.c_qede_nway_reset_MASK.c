
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct qed_link_params {int link_up; } ;
struct qed_link_output {int link_up; } ;
struct net_device {int dummy; } ;
typedef int link_params ;
typedef int current_link ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* set_link ) (int ,struct qed_link_params*) ;int (* get_link ) (int ,struct qed_link_params*) ;int (* can_link_change ) (int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_link_params*,int ,int) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct qed_link_params*) ;
 int FUNC_6 (int ,struct qed_link_params*) ;
 int FUNC_7 (int ,struct qed_link_params*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_2(VAR_1);
 struct qed_link_output VAR_3;
 struct qed_link_params VAR_4;

 if (!VAR_2->ops || !VAR_2->ops->common->can_link_change(VAR_2->cdev)) {
  FUNC_0(VAR_2, "Link settings are not allowed to be changed\n");
  return -VAR_0;
 }

 if (!FUNC_3(VAR_1))
  return 0;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_2->ops->common->get_link(VAR_2->cdev, &VAR_3);
 if (!VAR_3.link_up)
  return 0;


 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.link_up = 0;
 VAR_2->ops->common->set_link(VAR_2->cdev, &VAR_4);
 VAR_4.link_up = 1;
 VAR_2->ops->common->set_link(VAR_2->cdev, &VAR_4);

 return 0;
}
