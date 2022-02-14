
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_txq {int irq_name; struct hinic_sq* sq; int netdev; } ;
struct hinic_sq {int irq; int msix_entry; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; int tx_weight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hinic_hwdev*,int ,int ,int ,int ,int ,int ) ;
 struct hinic_dev* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct hinic_txq*) ;
 int VAR_5 ;
 int FUNC_4 (struct hinic_txq*,int ) ;
 int FUNC_5 (struct hinic_txq*) ;

__attribute__((used)) static int FUNC_6(struct hinic_txq *VAR_6)
{
 struct hinic_dev *VAR_7 = FUNC_2(VAR_6->netdev);
 struct hinic_hwdev *VAR_8 = VAR_7->hwdev;
 struct hinic_hwif *VAR_9 = VAR_8->hwif;
 struct pci_dev *VAR_10 = VAR_9->pdev;
 struct hinic_sq *VAR_11 = VAR_6->sq;
 int VAR_12;

 FUNC_4(VAR_6, VAR_7->tx_weight);

 FUNC_1(VAR_7->hwdev, VAR_11->msix_entry,
        VAR_3, VAR_0,
        VAR_2, VAR_1,
        VAR_4);

 VAR_12 = FUNC_3(VAR_11->irq, VAR_5, 0, VAR_6->irq_name, VAR_6);
 if (VAR_12) {
  FUNC_0(&VAR_10->dev, "Failed to request Tx irq\n");
  FUNC_5(VAR_6);
  return VAR_12;
 }

 return 0;
}
