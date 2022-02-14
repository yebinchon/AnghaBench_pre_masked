
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct atl1e_hw {int dummy; } ;
struct atl1e_adapter {struct atl1e_hw hw; int napi; int reset_task; int netdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*) ;
 int FUNC_2 (struct atl1e_hw*,int ,int) ;
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
 int FUNC_3 (int *) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (struct atl1e_adapter*) ;
 int FUNC_6 (struct atl1e_adapter*) ;
 int FUNC_7 (struct atl1e_adapter*) ;
 int FUNC_8 (struct atl1e_adapter*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int) ;
 struct atl1e_adapter* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = VAR_16;
 struct atl1e_adapter *VAR_18 = FUNC_12(VAR_17);
 struct atl1e_hw *VAR_19 = &VAR_18->hw;
 int VAR_20 = VAR_0;
 int VAR_21 = VAR_3;
 u32 VAR_22;

 do {
  VAR_22 = FUNC_0(VAR_19, VAR_14);
  if ((VAR_22 & VAR_1) == 0 ||
    (VAR_22 & VAR_4) != 0) {
   if (VAR_20 != VAR_0)
    VAR_21 = VAR_2;
   break;
  }

  if (VAR_22 & VAR_7)
   FUNC_5(VAR_18);

  FUNC_2(VAR_19, VAR_14, VAR_22 | VAR_4);

  VAR_21 = VAR_2;

  if (VAR_22 & VAR_9) {
   FUNC_11(VAR_18->netdev,
       "pcie phy linkdown %x\n", VAR_22);
   if (FUNC_13(VAR_18->netdev)) {

    FUNC_6(VAR_18);
    FUNC_14(&VAR_18->reset_task);
    break;
   }
  }


  if (VAR_22 & (VAR_5 | VAR_6)) {
   FUNC_11(VAR_18->netdev,
       "PCIE DMA RW error (status = 0x%x)\n",
       VAR_22);
   FUNC_6(VAR_18);
   FUNC_14(&VAR_18->reset_task);
   break;
  }

  if (VAR_22 & VAR_11)
   FUNC_8(VAR_18);


  if (VAR_22 & (VAR_7 | VAR_8)) {
   VAR_17->stats.tx_carrier_errors++;
   FUNC_7(VAR_18);
   break;
  }


  if (VAR_22 & VAR_12)
   FUNC_4(VAR_18);

  if (VAR_22 & VAR_10) {




   FUNC_2(VAR_19, VAR_13,
         VAR_1 & ~VAR_10);
   FUNC_1(VAR_19);
   if (FUNC_9(FUNC_10(
       &VAR_18->napi)))
    FUNC_3(&VAR_18->napi);
  }
 } while (--VAR_20 > 0);

 FUNC_2(&VAR_18->hw, VAR_14, 0);

 return VAR_21;
}
