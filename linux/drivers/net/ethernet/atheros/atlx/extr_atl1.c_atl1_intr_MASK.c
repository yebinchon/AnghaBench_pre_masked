
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ hw_addr; } ;
struct TYPE_8__ {TYPE_2__* cmb; } ;
struct TYPE_6__ {int tx_carrier_errors; } ;
struct atl1_adapter {TYPE_5__ hw; TYPE_4__* pdev; TYPE_3__ cmb; TYPE_1__ soft_stats; int reset_dev_task; int netdev; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int int_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 scalar_t__ FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct atl1_adapter*) ;
 int FUNC_4 (struct atl1_adapter*) ;
 int FUNC_5 (int ,int *,char*,int) ;
 int FUNC_6 (int,scalar_t__) ;
 struct atl1_adapter* FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (struct atl1_adapter*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_19, void *VAR_20)
{
 struct atl1_adapter *VAR_21 = FUNC_7(VAR_20);
 u32 VAR_22;

 VAR_22 = VAR_21->cmb.cmb->int_stats;
 if (!VAR_22)
  return VAR_1;






 VAR_21->cmb.cmb->int_stats = VAR_22 & (VAR_3 | VAR_2);

 if (VAR_22 & VAR_9)
  FUNC_3(VAR_21);


 FUNC_6(VAR_22 | VAR_5, VAR_21->hw.hw_addr + VAR_18);


 if (VAR_22 & VAR_16)
  FUNC_1(VAR_21);


 if (VAR_22 & VAR_12) {
  if (FUNC_8(VAR_21))
   FUNC_5(VAR_17, &VAR_21->pdev->dev,
    "pcie phy link down %x\n", VAR_22);
  if (FUNC_9(VAR_21->netdev)) {
   FUNC_4(VAR_21);
   FUNC_10(&VAR_21->reset_dev_task);
   return VAR_0;
  }
 }


 if (VAR_22 & (VAR_7 | VAR_8)) {
  if (FUNC_8(VAR_21))
   FUNC_5(VAR_17, &VAR_21->pdev->dev,
    "pcie DMA r/w error (status = 0x%x)\n",
    VAR_22);
  FUNC_4(VAR_21);
  FUNC_10(&VAR_21->reset_dev_task);
  return VAR_0;
 }


 if (VAR_22 & VAR_9) {
  VAR_21->soft_stats.tx_carrier_errors++;
  FUNC_0(VAR_21);
 }


 if (VAR_22 & (VAR_3 | VAR_2) &&
     FUNC_2(VAR_21))
  VAR_21->cmb.cmb->int_stats = VAR_21->cmb.cmb->int_stats &
           ~(VAR_3 | VAR_2);


 if (FUNC_11(VAR_22 & (VAR_15 | VAR_13 |
  VAR_14 | VAR_10 |
  VAR_11))) {
  if (FUNC_8(VAR_21))
   FUNC_5(VAR_17,
    &VAR_21->pdev->dev,
    "rx exception, ISR = 0x%x\n",
    VAR_22);
  FUNC_2(VAR_21);
 }


 FUNC_6(VAR_6 | VAR_4, VAR_21->hw.hw_addr + VAR_18);
 return VAR_0;
}
