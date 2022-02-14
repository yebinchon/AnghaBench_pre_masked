
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring {int state; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_tx_queues; int state; int flags2; struct ixgbe_ring** tx_ring; struct ixgbe_hw hw; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*,int) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*,int) ;
 int FUNC_6 (struct ixgbe_adapter*,int) ;
 int FUNC_7 (struct ixgbe_adapter*,int,int) ;





 int FUNC_8 (struct ixgbe_adapter*) ;
 int VAR_16 ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int VAR_17 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_18, void *VAR_19)
{
 struct ixgbe_adapter *VAR_20 = VAR_19;
 struct ixgbe_hw *VAR_21 = &VAR_20->hw;
 u32 VAR_22;







 VAR_22 = FUNC_0(VAR_21, VAR_8);
 VAR_22 &= 0xFFFF0000;

 FUNC_1(VAR_21, VAR_1, VAR_22);

 if (VAR_22 & VAR_5)
  FUNC_4(VAR_20);

 if (VAR_22 & VAR_6)
  FUNC_8(VAR_20);

 switch (VAR_21->mac.type) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_21->phy.type == VAR_16 &&
      (VAR_22 & VAR_4)) {
   VAR_20->flags2 |= VAR_12;
   FUNC_10(VAR_20);
   FUNC_1(VAR_21, VAR_1,
     VAR_4);
  }
  if (VAR_22 & VAR_2) {
   FUNC_2(VAR_17, "Received ECC Err, initiating reset\n");
   FUNC_11(VAR_14, &VAR_20->state);
   FUNC_10(VAR_20);
   FUNC_1(VAR_21, VAR_1, VAR_2);
  }

  if (VAR_22 & VAR_3) {
   int VAR_23 = 0;
   int VAR_24;
   for (VAR_24 = 0; VAR_24 < VAR_20->num_tx_queues; VAR_24++) {
    struct ixgbe_ring *VAR_25 = VAR_20->tx_ring[VAR_24];
    if (FUNC_12(VAR_15,
             &VAR_25->state))
     VAR_23++;
   }
   if (VAR_23) {

    FUNC_1(VAR_21, VAR_9, VAR_10);
    VAR_20->flags2 |= VAR_11;
    FUNC_10(VAR_20);
   }
  }
  FUNC_6(VAR_20, VAR_22);
  FUNC_5(VAR_20, VAR_22);
  break;
 default:
  break;
 }

 FUNC_3(VAR_20, VAR_22);

 if (FUNC_14(VAR_22 & VAR_7))
  FUNC_9(VAR_20);


 if (!FUNC_13(VAR_13, &VAR_20->state))
  FUNC_7(VAR_20, 0, 0);

 return VAR_0;
}
