
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct atl2_hw {int dummy; } ;
struct atl2_adapter {struct atl2_hw hw; TYPE_2__* netdev; int reset_task; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int tx_carrier_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct atl2_hw*,int ) ;
 int FUNC_1 (struct atl2_hw*) ;
 int FUNC_2 (struct atl2_hw*,int ,int) ;
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
 int FUNC_3 (struct atl2_adapter*) ;
 int FUNC_4 (struct atl2_adapter*) ;
 int FUNC_5 (struct atl2_adapter*) ;
 int FUNC_6 (struct atl2_adapter*) ;
 struct atl2_adapter* FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_12, void *VAR_13)
{
 struct atl2_adapter *VAR_14 = FUNC_7(VAR_13);
 struct atl2_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_15, VAR_11);
 if (0 == VAR_16)
  return VAR_1;


 if (VAR_16 & VAR_6)
  FUNC_4(VAR_14);


 FUNC_2(VAR_15, VAR_11, VAR_16 | VAR_2);


 if (VAR_16 & VAR_7) {
  if (FUNC_8(VAR_14->netdev)) {
   FUNC_2(VAR_15, VAR_11, 0);
   FUNC_2(VAR_15, VAR_10, 0);
   FUNC_1(VAR_15);
   FUNC_9(&VAR_14->reset_task);
   return VAR_0;
  }
 }


 if (VAR_16 & (VAR_3 | VAR_4)) {
  FUNC_2(VAR_15, VAR_11, 0);
  FUNC_2(VAR_15, VAR_10, 0);
  FUNC_1(VAR_15);
  FUNC_9(&VAR_14->reset_task);
  return VAR_0;
 }


 if (VAR_16 & (VAR_6 | VAR_5)) {
  VAR_14->netdev->stats.tx_carrier_errors++;
  FUNC_3(VAR_14);
 }


 if (VAR_16 & VAR_9)
  FUNC_6(VAR_14);


 if (VAR_16 & VAR_8)
  FUNC_5(VAR_14);


 FUNC_2(&VAR_14->hw, VAR_11, 0);
 return VAR_0;
}
