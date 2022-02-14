
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qede_dev {TYPE_2__* ops; int sp_task; struct qed_dev* cdev; } ;
struct qed_dev {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
typedef enum qede_remove_mode { ____Placeholder_qede_remove_mode } qede_remove_mode ;
struct TYPE_8__ {TYPE_3__* common; } ;
struct TYPE_7__ {int (* remove ) (struct qed_dev*) ;int (* slowpath_stop ) (struct qed_dev*) ;} ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_5__ {int (* set_power_state ) (struct qed_dev*,int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 struct qede_dev* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 TYPE_4__* VAR_3 ;
 int FUNC_7 (struct qede_dev*) ;
 int FUNC_8 (struct qede_dev*,int) ;
 int FUNC_9 (struct qed_dev*,int ) ;
 int FUNC_10 (struct qed_dev*) ;
 int FUNC_11 (struct qed_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_5, enum qede_remove_mode VAR_6)
{
 struct net_device *VAR_7 = FUNC_5(VAR_5);
 struct qede_dev *VAR_8;
 struct qed_dev *VAR_9;

 if (!VAR_7) {
  FUNC_2(&VAR_5->dev, "Device has already been removed\n");
  return;
 }

 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = VAR_8->cdev;

 FUNC_0(VAR_8, "Starting qede_remove\n");

 FUNC_8(VAR_8, (VAR_6 == VAR_1));

 if (VAR_6 != VAR_1) {
  FUNC_12(VAR_7);

  FUNC_1(&VAR_8->sp_task);

  VAR_8->ops->common->set_power_state(VAR_9, VAR_0);

  FUNC_6(VAR_5, ((void*)0));
 }

 FUNC_7(VAR_8);


 VAR_3->common->slowpath_stop(VAR_9);
 if (VAR_4 == VAR_2)
  return;
 VAR_3->common->remove(VAR_9);







 if (VAR_6 != VAR_1)
  FUNC_3(VAR_7);

 FUNC_2(&VAR_5->dev, "Ending qede_remove successfully\n");
}
