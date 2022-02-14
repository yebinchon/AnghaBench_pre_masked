
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_q_vector {int napi; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int state; struct ixgbe_q_vector** q_vector; struct ixgbe_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*,int) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*,int) ;
 int FUNC_6 (struct ixgbe_adapter*,int) ;
 int FUNC_7 (struct ixgbe_adapter*,int,int) ;





 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_11, void *VAR_12)
{
 struct ixgbe_adapter *VAR_13 = VAR_12;
 struct ixgbe_hw *VAR_14 = &VAR_13->hw;
 struct ixgbe_q_vector *VAR_15 = VAR_13->q_vector[0];
 u32 VAR_16;





 FUNC_1(VAR_14, VAR_6, VAR_7);



 VAR_16 = FUNC_0(VAR_14, VAR_2);
 if (!VAR_16) {







  if (!FUNC_12(VAR_8, &VAR_13->state))
   FUNC_7(VAR_13, 1, 1);
  return VAR_1;
 }

 if (VAR_16 & VAR_4)
  FUNC_4(VAR_13);

 switch (VAR_14->mac.type) {
 case 132:
  FUNC_6(VAR_13, VAR_16);

 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_16 & VAR_3) {
   FUNC_2(VAR_10, "Received ECC Err, initiating reset\n");
   FUNC_11(VAR_9, &VAR_13->state);
   FUNC_9(VAR_13);
   FUNC_1(VAR_14, VAR_2, VAR_3);
  }
  FUNC_5(VAR_13, VAR_16);
  break;
 default:
  break;
 }

 FUNC_3(VAR_13, VAR_16);
 if (FUNC_13(VAR_16 & VAR_5))
  FUNC_8(VAR_13);


 FUNC_10(&VAR_15->napi);





 if (!FUNC_12(VAR_8, &VAR_13->state))
  FUNC_7(VAR_13, 0, 0);

 return VAR_0;
}
