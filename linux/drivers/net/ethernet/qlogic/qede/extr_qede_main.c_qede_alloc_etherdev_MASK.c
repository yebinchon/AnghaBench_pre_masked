
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ wol_support; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {int wol_enabled; int vlan_list; TYPE_2__ dev_info; int stats; int q_num_tx_buffers; int q_num_rx_buffers; int ops; int dp_level; int dp_module; struct pci_dev* pdev; struct qed_dev* cdev; struct net_device* ndev; } ;
struct qed_dev_eth_info {int num_queues; int num_tc; } ;
struct qed_dev {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*,int,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_2__*,struct qed_dev_eth_info*,int) ;
 int FUNC_5 (int *,int ,int) ;
 struct qede_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;

__attribute__((used)) static struct qede_dev *FUNC_8(struct qed_dev *VAR_3,
         struct pci_dev *VAR_4,
         struct qed_dev_eth_info *VAR_5,
         u32 VAR_6, u8 VAR_7)
{
 struct net_device *VAR_8;
 struct qede_dev *VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_9),
      VAR_5->num_queues * VAR_5->num_tc,
      VAR_5->num_queues);
 if (!VAR_8) {
  FUNC_7("etherdev allocation failed\n");
  return ((void*)0);
 }

 VAR_9 = FUNC_6(VAR_8);
 VAR_9->ndev = VAR_8;
 VAR_9->cdev = VAR_3;
 VAR_9->pdev = VAR_4;
 VAR_9->dp_module = VAR_6;
 VAR_9->dp_level = VAR_7;
 VAR_9->ops = VAR_2;
 VAR_9->q_num_rx_buffers = VAR_0;
 VAR_9->q_num_tx_buffers = VAR_1;

 FUNC_0(VAR_9, "Allocated netdev with %d tx queues and %d rx queues\n",
  VAR_5->num_queues, VAR_5->num_queues);

 FUNC_2(VAR_8, &VAR_4->dev);

 FUNC_5(&VAR_9->stats, 0, sizeof(VAR_9->stats));
 FUNC_4(&VAR_9->dev_info, VAR_5, sizeof(*VAR_5));




 if (VAR_9->dev_info.common.wol_support)
  VAR_9->wol_enabled = 1;

 FUNC_1(&VAR_9->vlan_list);

 return VAR_9;
}
