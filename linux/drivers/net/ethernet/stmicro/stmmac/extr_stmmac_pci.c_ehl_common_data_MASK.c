
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_stmmacenet_data {int rx_queues_to_use; int tx_queues_to_use; int clk_ptp_rate; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0,
      struct plat_stmmacenet_data *VAR_1)
{
 int VAR_2;

 VAR_1->rx_queues_to_use = 8;
 VAR_1->tx_queues_to_use = 8;
 VAR_1->clk_ptp_rate = 200000000;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
