
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_slowpath_params {int dp_level; int is_vf; int recov_in_prog; int name; int drv_eng; int drv_rev; int drv_minor; int drv_major; int int_mode; int dp_module; int protocol; } ;
struct qede_dev {TYPE_4__* ndev; int rx_copybreak; TYPE_2__* ops; int qede_lock; int sp_task; int flags; int dev_info; struct qed_slowpath_params stats; struct qed_dev* cdev; } ;
struct qed_probe_params {int dp_level; int is_vf; int recov_in_prog; int name; int drv_eng; int drv_rev; int drv_minor; int drv_major; int int_mode; int dp_module; int protocol; } ;
struct qed_dev_eth_info {int dummy; } ;
struct qed_dev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int sp_params ;
typedef int probe_params ;
typedef enum qede_probe_mode { ____Placeholder_qede_probe_mode } qede_probe_mode ;
typedef int dev_info ;
struct TYPE_12__ {int (* fill_dev_info ) (struct qed_dev*,struct qed_dev_eth_info*) ;TYPE_3__* common; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int (* slowpath_start ) (struct qed_dev*,struct qed_slowpath_params*) ;int (* remove ) (struct qed_dev*) ;int (* slowpath_stop ) (struct qed_dev*) ;struct qed_dev* (* probe ) (struct pci_dev*,struct qed_slowpath_params*) ;} ;
struct TYPE_9__ {int (* register_ops ) (struct qed_dev*,int *,struct qede_dev*) ;TYPE_1__* common; } ;
struct TYPE_8__ {int (* set_name ) (struct qed_dev*,int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qede_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,struct qed_dev_eth_info*,int) ;
 int FUNC_5 (struct qed_slowpath_params*,int ,int) ;
 int FUNC_6 (int *) ;
 struct qede_dev* FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (char*) ;
 TYPE_6__* VAR_14 ;
 struct qede_dev* FUNC_10 (struct qed_dev*,struct pci_dev*,struct qed_dev_eth_info*,int ,int) ;
 int FUNC_11 (struct qede_dev*) ;
 int VAR_15 ;
 int FUNC_12 (struct qede_dev*) ;
 int FUNC_13 (struct qede_dev*,int) ;
 int FUNC_14 (struct qede_dev*,int) ;
 int FUNC_15 (struct qede_dev*,int) ;
 int FUNC_16 (TYPE_4__*) ;
 int VAR_16 ;
 int FUNC_17 (struct qed_dev*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,char*,int ) ;
 struct qed_dev* FUNC_21 (struct pci_dev*,struct qed_slowpath_params*) ;
 int FUNC_22 (struct qed_dev*,struct qed_slowpath_params*) ;
 int FUNC_23 (struct qed_dev*,struct qed_dev_eth_info*) ;
 int FUNC_24 (struct qed_dev*,int ) ;
 int FUNC_25 (struct qed_dev*,int *,struct qede_dev*) ;
 int FUNC_26 (struct qed_dev*) ;
 int FUNC_27 (struct qed_dev*) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static int FUNC_29(struct pci_dev *VAR_17, u32 VAR_18, u8 VAR_19,
   bool VAR_20, enum qede_probe_mode VAR_21)
{
 struct qed_probe_params VAR_22;
 struct qed_slowpath_params VAR_23;
 struct qed_dev_eth_info VAR_24;
 struct qede_dev *VAR_25;
 struct qed_dev *VAR_26;
 int VAR_27;

 if (FUNC_28(VAR_19 & VAR_12))
  FUNC_9("Starting qede probe\n");

 FUNC_5(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.protocol = VAR_13;
 VAR_22.dp_module = VAR_18;
 VAR_22.dp_level = VAR_19;
 VAR_22.is_vf = VAR_20;
 VAR_22.recov_in_prog = (VAR_21 == VAR_7);
 VAR_26 = VAR_14->common->probe(VAR_17, &VAR_22);
 if (!VAR_26) {
  VAR_27 = -VAR_0;
  goto err0;
 }

 FUNC_17(VAR_26);


 FUNC_5(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.int_mode = VAR_11;
 VAR_23.drv_major = VAR_4;
 VAR_23.drv_minor = VAR_5;
 VAR_23.drv_rev = VAR_8;
 VAR_23.drv_eng = VAR_2;
 FUNC_20(VAR_23.name, "qede LAN", VAR_10);
 VAR_27 = VAR_14->common->slowpath_start(VAR_26, &VAR_23);
 if (VAR_27) {
  FUNC_9("Cannot start slowpath\n");
  goto err1;
 }


 VAR_27 = VAR_14->fill_dev_info(VAR_26, &VAR_24);
 if (VAR_27)
  goto err2;

 if (VAR_21 != VAR_7) {
  VAR_25 = FUNC_10(VAR_26, VAR_17, &VAR_24, VAR_18,
        VAR_19);
  if (!VAR_25) {
   VAR_27 = -VAR_1;
   goto err2;
  }
 } else {
  struct net_device *VAR_28 = FUNC_8(VAR_17);

  VAR_25 = FUNC_7(VAR_28);
  VAR_25->cdev = VAR_26;
  FUNC_5(&VAR_25->stats, 0, sizeof(VAR_25->stats));
  FUNC_4(&VAR_25->dev_info, &VAR_24, sizeof(VAR_24));
 }

 if (VAR_20)
  FUNC_19(VAR_3, &VAR_25->flags);

 FUNC_11(VAR_25);

 VAR_27 = FUNC_14(VAR_25, (VAR_21 == VAR_7));
 if (VAR_27)
  goto err3;

 if (VAR_21 != VAR_7) {





  FUNC_1(&VAR_25->sp_task, VAR_16);
  FUNC_6(&VAR_25->qede_lock);

  VAR_27 = FUNC_18(VAR_25->ndev);
  if (VAR_27) {
   FUNC_0(VAR_25, "Cannot register net-device\n");
   goto err4;
  }
 }

 VAR_25->ops->common->set_name(VAR_26, VAR_25->ndev->name);


 if (!VAR_20)
  FUNC_13(VAR_25, (VAR_21 == VAR_6));

 VAR_25->ops->register_ops(VAR_26, &VAR_15, VAR_25);






 VAR_25->rx_copybreak = VAR_9;

 FUNC_12(VAR_25);
 return 0;

err4:
 FUNC_15(VAR_25, (VAR_21 == VAR_7));
err3:
 FUNC_3(VAR_25->ndev);
err2:
 VAR_14->common->slowpath_stop(VAR_26);
err1:
 VAR_14->common->remove(VAR_26);
err0:
 return VAR_27;
}
