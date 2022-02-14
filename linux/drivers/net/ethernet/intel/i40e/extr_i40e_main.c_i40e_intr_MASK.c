
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {struct i40e_q_vector** q_vectors; } ;
struct i40e_q_vector {int napi; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; size_t lan_vsi; int state; TYPE_1__* pdev; int empr_count; int globr_count; int corer_count; struct i40e_hw hw; struct i40e_vsi** vsi; int sw_int_count; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i40e_hw*,int ,char*) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_44, void *VAR_45)
{
 struct i40e_pf *VAR_46 = (struct i40e_pf *)VAR_45;
 struct i40e_hw *VAR_47 = &VAR_46->hw;
 irqreturn_t VAR_48 = VAR_33;
 u32 VAR_49, VAR_50;
 u32 VAR_51, VAR_52;

 VAR_49 = FUNC_7(VAR_47, VAR_7);
 VAR_52 = FUNC_7(VAR_47, VAR_10);


 if ((VAR_49 & VAR_19) == 0)
  goto enable_intr;


 if (((VAR_49 & ~VAR_19) == 0) ||
     (VAR_49 & VAR_24))
  VAR_46->sw_int_count++;

 if ((VAR_46->flags & VAR_1) &&
     (VAR_49 & VAR_14)) {
  VAR_52 &= ~VAR_14;
  FUNC_0(&VAR_46->pdev->dev, "cleared PE_CRITERR\n");
  FUNC_8(VAR_35, VAR_46->state);
 }


 if (VAR_49 & VAR_23) {
  struct i40e_vsi *VAR_53 = VAR_46->vsi[VAR_46->lan_vsi];
  struct i40e_q_vector *VAR_54 = VAR_53->q_vectors[0];







  if (!FUNC_9(VAR_36, VAR_46->state))
   FUNC_6(&VAR_54->napi);
 }

 if (VAR_49 & VAR_8) {
  VAR_52 &= ~VAR_11;
  FUNC_8(VAR_34, VAR_46->state);
  FUNC_2(&VAR_46->hw, VAR_0, "AdminQ event\n");
 }

 if (VAR_49 & VAR_20) {
  VAR_52 &= ~VAR_13;
  FUNC_8(VAR_38, VAR_46->state);
 }

 if (VAR_49 & VAR_26) {
  VAR_52 &= ~VAR_16;
  FUNC_8(VAR_43, VAR_46->state);
 }

 if (VAR_49 & VAR_17) {
  if (!FUNC_9(VAR_42, VAR_46->state))
   FUNC_8(VAR_41, VAR_46->state);
  VAR_52 &= ~VAR_12;
  VAR_51 = FUNC_7(VAR_47, VAR_2);
  VAR_51 = (VAR_51 & VAR_3)
         >> VAR_4;
  if (VAR_51 == VAR_29) {
   VAR_46->corer_count++;
  } else if (VAR_51 == VAR_31) {
   VAR_46->globr_count++;
  } else if (VAR_51 == VAR_30) {
   VAR_46->empr_count++;
   FUNC_8(VAR_37, VAR_46->state);
  }
 }

 if (VAR_49 & VAR_18) {
  VAR_49 &= ~VAR_18;
  FUNC_1(&VAR_46->pdev->dev, "HMC error interrupt\n");
  FUNC_1(&VAR_46->pdev->dev, "HMC error info 0x%x, HMC error data 0x%x\n",
    FUNC_7(VAR_47, VAR_6),
    FUNC_7(VAR_47, VAR_5));
 }

 if (VAR_49 & VAR_25) {
  u32 VAR_55 = FUNC_7(VAR_47, VAR_27);

  if (VAR_55 & VAR_28) {
   VAR_49 &= ~VAR_15;
   FUNC_4(VAR_46);
  }
 }





 VAR_50 = VAR_49 & VAR_52;
 if (VAR_50) {
  FUNC_1(&VAR_46->pdev->dev, "unhandled interrupt icr0=0x%08x\n",
    VAR_50);
  if ((VAR_50 & VAR_22) ||
      (VAR_50 & VAR_21) ||
      (VAR_50 & VAR_9)) {
   FUNC_1(&VAR_46->pdev->dev, "device will be reset\n");
   FUNC_8(VAR_39, VAR_46->state);
   FUNC_5(VAR_46);
  }
  VAR_52 &= ~VAR_50;
 }
 VAR_48 = VAR_32;

enable_intr:

 FUNC_10(VAR_47, VAR_10, VAR_52);
 if (!FUNC_9(VAR_36, VAR_46->state) ||
     FUNC_9(VAR_40, VAR_46->state)) {
  FUNC_5(VAR_46);
  FUNC_3(VAR_46);
 }

 return VAR_48;
}
