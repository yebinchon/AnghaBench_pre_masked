
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct otx2_mbox_dev {int mbox_lock; void* mbase; } ;
struct otx2_mbox {int tr_shift; int ndevs; void* hwbase; struct otx2_mbox_dev* dev; struct pci_dev* pdev; void* reg_base; int trigger; void* rx_size; void* tx_size; void* rx_start; void* tx_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct otx2_mbox_dev* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct otx2_mbox*) ;
 int FUNC_2 (struct otx2_mbox*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct otx2_mbox *VAR_16, void *VAR_17, struct pci_dev *VAR_18,
     void *VAR_19, int VAR_20, int VAR_21)
{
 struct otx2_mbox_dev *VAR_22;
 int VAR_23;

 switch (VAR_20) {
 case 135:
 case 131:
  VAR_16->tx_start = VAR_6;
  VAR_16->rx_start = VAR_4;
  VAR_16->tx_size = VAR_5;
  VAR_16->rx_size = VAR_3;
  break;
 case 133:
 case 129:
  VAR_16->tx_start = VAR_4;
  VAR_16->rx_start = VAR_6;
  VAR_16->tx_size = VAR_3;
  VAR_16->rx_size = VAR_5;
  break;
 case 134:
 case 130:
  VAR_16->tx_start = VAR_11;
  VAR_16->rx_start = VAR_9;
  VAR_16->tx_size = VAR_10;
  VAR_16->rx_size = VAR_8;
  break;
 case 132:
 case 128:
  VAR_16->tx_start = VAR_9;
  VAR_16->rx_start = VAR_11;
  VAR_16->tx_size = VAR_8;
  VAR_16->rx_size = VAR_10;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20) {
 case 135:
 case 134:
  VAR_16->trigger = VAR_12;
  VAR_16->tr_shift = 4;
  break;
 case 133:
 case 132:
  VAR_16->trigger = VAR_13;
  VAR_16->tr_shift = 0;
  break;
 case 131:
 case 130:
  VAR_16->trigger = VAR_14;
  VAR_16->tr_shift = 12;
  break;
 case 129:
 case 128:
  VAR_16->trigger = VAR_15;
  VAR_16->tr_shift = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_16->reg_base = VAR_19;
 VAR_16->hwbase = VAR_17;
 VAR_16->pdev = VAR_18;

 VAR_16->dev = FUNC_0(VAR_21, sizeof(struct otx2_mbox_dev), VAR_2);
 if (!VAR_16->dev) {
  FUNC_1(VAR_16);
  return -VAR_1;
 }

 VAR_16->ndevs = VAR_21;
 for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++) {
  VAR_22 = &VAR_16->dev[VAR_23];
  VAR_22->mbase = VAR_16->hwbase + (VAR_23 * VAR_7);
  FUNC_3(&VAR_22->mbox_lock);

  FUNC_2(VAR_16, VAR_23);
 }

 return 0;
}
