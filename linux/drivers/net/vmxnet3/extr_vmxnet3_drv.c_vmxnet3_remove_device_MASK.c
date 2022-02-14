
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_tx_queues; int adapter_pa; TYPE_1__* pdev; int shared_pa; int shared; int queue_desc_pa; int tqd_start; int pm_conf_pa; int pm_conf; int rss_conf_pa; int rss_conf; int coal_conf_pa; int coal_conf; int work; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct Vmxnet3_TxQueueDesc {int dummy; } ;
struct Vmxnet3_RxQueueDesc {int dummy; } ;
struct Vmxnet3_PMConf {int dummy; } ;
struct Vmxnet3_DriverShared {int dummy; } ;
struct Vmxnet3_CoalesceScheme {int dummy; } ;
struct UPT1_RSSConf {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vmxnet3_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int) ;
 struct vmxnet3_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 () ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct vmxnet3_adapter*) ;
 int FUNC_12 (struct vmxnet3_adapter*) ;

__attribute__((used)) static void
FUNC_13(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_8(VAR_3);
 struct vmxnet3_adapter *VAR_5 = FUNC_6(VAR_4);
 int VAR_6 = 0;
 int VAR_7;







  VAR_7 = 1;
 VAR_7 = FUNC_9(VAR_7);

 FUNC_1(&VAR_5->work);

 FUNC_10(VAR_4);

 FUNC_11(VAR_5);
 FUNC_12(VAR_5);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_5->pdev->dev,
      sizeof(struct Vmxnet3_CoalesceScheme),
      VAR_5->coal_conf, VAR_5->coal_conf_pa);
 }




 FUNC_2(&VAR_5->pdev->dev, sizeof(struct Vmxnet3_PMConf),
     VAR_5->pm_conf, VAR_5->pm_conf_pa);

 VAR_6 = sizeof(struct Vmxnet3_TxQueueDesc) * VAR_5->num_tx_queues;
 VAR_6 += sizeof(struct Vmxnet3_RxQueueDesc) * VAR_7;
 FUNC_2(&VAR_5->pdev->dev, VAR_6, VAR_5->tqd_start,
     VAR_5->queue_desc_pa);
 FUNC_2(&VAR_5->pdev->dev,
     sizeof(struct Vmxnet3_DriverShared),
     VAR_5->shared, VAR_5->shared_pa);
 FUNC_3(&VAR_5->pdev->dev, VAR_5->adapter_pa,
    sizeof(struct vmxnet3_adapter), VAR_0);
 FUNC_4(VAR_4);
}
