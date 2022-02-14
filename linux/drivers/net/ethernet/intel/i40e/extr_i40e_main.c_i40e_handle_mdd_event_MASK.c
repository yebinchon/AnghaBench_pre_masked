
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_vf {int vf_states; int num_mdd_events; } ;
struct TYPE_3__ {int base_queue; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; int state; TYPE_2__* pdev; struct i40e_vf* vf; struct i40e_hw hw; } ;
struct TYPE_4__ {int dev; } ;


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
 int FUNC_0 (int) ;
 int VAR_25 ;
 int FUNC_1 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct i40e_hw*) ;
 scalar_t__ FUNC_6 (struct i40e_pf*) ;
 scalar_t__ FUNC_7 (struct i40e_pf*) ;
 int FUNC_8 (struct i40e_hw*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct i40e_pf *VAR_28)
{
 struct i40e_hw *VAR_29 = &VAR_28->hw;
 bool VAR_30 = 0;
 struct i40e_vf *VAR_31;
 u32 VAR_32;
 int VAR_33;

 if (!FUNC_10(VAR_27, VAR_28->state))
  return;


 VAR_32 = FUNC_8(VAR_29, VAR_8);
 if (VAR_32 & VAR_15) {
  u8 VAR_34 = (VAR_32 & VAR_11) >>
    VAR_12;
  u16 VAR_35 = (VAR_32 & VAR_16) >>
    VAR_17;
  u8 VAR_36 = (VAR_32 & VAR_9) >>
    VAR_10;
  u16 VAR_37 = ((VAR_32 & VAR_13) >>
    VAR_14) -
    VAR_28->hw.func_caps.base_queue;
  if (FUNC_7(VAR_28))
   FUNC_4(&VAR_28->pdev->dev, "Malicious Driver Detection event 0x%02x on TX queue %d PF number 0x%02x VF number 0x%02x\n",
     VAR_36, VAR_37, VAR_34, VAR_35);
  FUNC_11(VAR_29, VAR_8, 0xffffffff);
  VAR_30 = 1;
 }
 VAR_32 = FUNC_8(VAR_29, VAR_0);
 if (VAR_32 & VAR_7) {
  u8 VAR_38 = (VAR_32 & VAR_3) >>
    VAR_4;
  u8 VAR_39 = (VAR_32 & VAR_1) >>
    VAR_2;
  u16 VAR_40 = ((VAR_32 & VAR_5) >>
    VAR_6) -
    VAR_28->hw.func_caps.base_queue;
  if (FUNC_6(VAR_28))
   FUNC_4(&VAR_28->pdev->dev, "Malicious Driver Detection event 0x%02x on RX queue %d of function 0x%02x\n",
     VAR_39, VAR_40, VAR_38);
  FUNC_11(VAR_29, VAR_0, 0xffffffff);
  VAR_30 = 1;
 }

 if (VAR_30) {
  VAR_32 = FUNC_8(VAR_29, VAR_22);
  if (VAR_32 & VAR_23) {
   FUNC_11(VAR_29, VAR_22, 0xFFFF);
   FUNC_3(&VAR_28->pdev->dev, "TX driver issue detected on PF\n");
  }
  VAR_32 = FUNC_8(VAR_29, VAR_20);
  if (VAR_32 & VAR_21) {
   FUNC_11(VAR_29, VAR_20, 0xFFFF);
   FUNC_3(&VAR_28->pdev->dev, "RX driver issue detected on PF\n");
  }
 }


 for (VAR_33 = 0; VAR_33 < VAR_28->num_alloc_vfs && VAR_30; VAR_33++) {
  VAR_31 = &(VAR_28->vf[VAR_33]);
  VAR_32 = FUNC_8(VAR_29, FUNC_1(VAR_33));
  if (VAR_32 & VAR_26) {
   FUNC_11(VAR_29, FUNC_1(VAR_33), 0xFFFF);
   VAR_31->num_mdd_events++;
   FUNC_4(&VAR_28->pdev->dev, "TX driver issue detected on VF %d\n",
     VAR_33);
   FUNC_4(&VAR_28->pdev->dev,
     "Use PF Control I/F to re-enable the VF\n");
   FUNC_9(VAR_24, &VAR_31->vf_states);
  }

  VAR_32 = FUNC_8(VAR_29, FUNC_0(VAR_33));
  if (VAR_32 & VAR_25) {
   FUNC_11(VAR_29, FUNC_0(VAR_33), 0xFFFF);
   VAR_31->num_mdd_events++;
   FUNC_4(&VAR_28->pdev->dev, "RX driver issue detected on VF %d\n",
     VAR_33);
   FUNC_4(&VAR_28->pdev->dev,
     "Use PF Control I/F to re-enable the VF\n");
   FUNC_9(VAR_24, &VAR_31->vf_states);
  }
 }


 FUNC_2(VAR_27, VAR_28->state);
 VAR_32 = FUNC_8(VAR_29, VAR_18);
 VAR_32 |= VAR_19;
 FUNC_11(VAR_29, VAR_18, VAR_32);
 FUNC_5(VAR_29);
}
