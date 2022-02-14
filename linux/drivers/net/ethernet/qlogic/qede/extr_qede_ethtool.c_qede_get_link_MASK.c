
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct qed_link_output {int link_up; } ;
struct net_device {int dummy; } ;
typedef int current_link ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* get_link ) (int ,struct qed_link_output*) ;} ;


 int FUNC_0 (struct qed_link_output*,int ,int) ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct qed_link_output*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct qede_dev *VAR_1 = FUNC_1(VAR_0);
 struct qed_link_output VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_1->ops->common->get_link(VAR_1->cdev, &VAR_2);

 return VAR_2.link_up;
}
