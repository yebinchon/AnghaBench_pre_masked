
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct atl1c_hw {int intr_mask; } ;
struct atl1c_adapter {struct atl1c_hw hw; int common_task; int work_event; int napi; struct pci_dev* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (struct atl1c_adapter*,int ) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (struct atl1c_adapter*) ;
 int VAR_13 ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 struct atl1c_adapter* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_12 (struct atl1c_adapter*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_14, void *VAR_15)
{
 struct net_device *VAR_16 = VAR_15;
 struct atl1c_adapter *VAR_17 = FUNC_10(VAR_16);
 struct pci_dev *VAR_18 = VAR_17->pdev;
 struct atl1c_hw *VAR_19 = &VAR_17->hw;
 int VAR_20 = VAR_1;
 int VAR_21 = VAR_3;
 u32 VAR_22;
 u32 VAR_23;

 do {
  FUNC_0(VAR_19, VAR_12, &VAR_23);
  VAR_22 = VAR_23 & VAR_19->intr_mask;

  if (VAR_22 == 0 || (VAR_22 & VAR_4) != 0) {
   if (VAR_20 != VAR_1)
    VAR_21 = VAR_2;
   break;
  }

  if (VAR_22 & VAR_6)
   FUNC_4(VAR_17);

  FUNC_1(VAR_19, VAR_12, VAR_22 | VAR_4);
  if (VAR_22 & VAR_9) {
   if (FUNC_8(FUNC_9(&VAR_17->napi))) {
    VAR_19->intr_mask &= ~VAR_9;
    FUNC_1(VAR_19, VAR_11, VAR_19->intr_mask);
    FUNC_2(&VAR_17->napi);
   }
  }
  if (VAR_22 & VAR_10)
   FUNC_3(VAR_17, VAR_13);

  VAR_21 = VAR_2;

  if (VAR_22 & VAR_5) {
   if (FUNC_11(VAR_17))
    FUNC_6(&VAR_18->dev,
     "atl1c hardware error (status = 0x%x)\n",
     VAR_22 & VAR_5);

   FUNC_14(VAR_0, &VAR_17->work_event);
   FUNC_13(&VAR_17->common_task);
   return VAR_2;
  }

  if (VAR_22 & VAR_8)
   if (FUNC_12(VAR_17))
    FUNC_7(&VAR_18->dev,
     "TX/RX overflow (status = 0x%x)\n",
     VAR_22 & VAR_8);


  if (VAR_22 & (VAR_6 | VAR_7)) {
   VAR_16->stats.tx_carrier_errors++;
   FUNC_5(VAR_17);
   break;
  }

 } while (--VAR_20 > 0);

 FUNC_1(&VAR_17->hw, VAR_12, 0);
 return VAR_21;
}
