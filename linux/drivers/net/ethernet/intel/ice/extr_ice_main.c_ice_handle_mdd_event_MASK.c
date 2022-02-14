
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_vf {scalar_t__ num_mdd_events; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int num_alloc_vfs; TYPE_1__* pdev; struct ice_vf* vf; int state; struct ice_hw hw; } ;
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
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int) ;
 int VAR_37 ;
 int FUNC_1 (int) ;
 int VAR_38 ;
 int FUNC_2 (int) ;
 int VAR_39 ;
 int FUNC_3 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct ice_pf*) ;
 scalar_t__ FUNC_6 (struct ice_pf*) ;
 scalar_t__ FUNC_7 (struct ice_pf*) ;
 int FUNC_8 (struct ice_hw*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct ice_pf *VAR_43)
{
 struct ice_hw *VAR_44 = &VAR_43->hw;
 bool VAR_45 = 0;
 u32 VAR_46;
 int VAR_47;

 if (!FUNC_10(VAR_41, VAR_43->state))
  return;


 VAR_46 = FUNC_8(VAR_44, VAR_10);
 if (VAR_46 & VAR_17) {
  u8 VAR_48 = (VAR_46 & VAR_13) >>
    VAR_14;
  u16 VAR_49 = (VAR_46 & VAR_18) >>
    VAR_19;
  u8 VAR_50 = (VAR_46 & VAR_11) >>
    VAR_12;
  u16 VAR_51 = ((VAR_46 & VAR_15) >>
    VAR_16);

  if (FUNC_7(VAR_43))
   FUNC_4(&VAR_43->pdev->dev, "Malicious Driver Detection event %d on TX queue %d PF# %d VF# %d\n",
     VAR_50, VAR_51, VAR_48, VAR_49);
  FUNC_11(VAR_44, VAR_10, 0xffffffff);
  VAR_45 = 1;
 }

 VAR_46 = FUNC_8(VAR_44, VAR_20);
 if (VAR_46 & VAR_27) {
  u8 VAR_52 = (VAR_46 & VAR_23) >>
    VAR_24;
  u16 VAR_53 = (VAR_46 & VAR_28) >>
    VAR_29;
  u8 VAR_54 = (VAR_46 & VAR_21) >>
    VAR_22;
  u16 VAR_55 = ((VAR_46 & VAR_25) >>
    VAR_26);

  if (FUNC_6(VAR_43))
   FUNC_4(&VAR_43->pdev->dev, "Malicious Driver Detection event %d on TX queue %d PF# %d VF# %d\n",
     VAR_54, VAR_55, VAR_52, VAR_53);
  FUNC_11(VAR_44, VAR_20, 0xffffffff);
  VAR_45 = 1;
 }

 VAR_46 = FUNC_8(VAR_44, VAR_0);
 if (VAR_46 & VAR_7) {
  u8 VAR_56 = (VAR_46 & VAR_3) >>
    VAR_4;
  u16 VAR_57 = (VAR_46 & VAR_8) >>
    VAR_9;
  u8 VAR_58 = (VAR_46 & VAR_1) >>
    VAR_2;
  u16 VAR_59 = ((VAR_46 & VAR_5) >>
    VAR_6);

  if (FUNC_6(VAR_43))
   FUNC_4(&VAR_43->pdev->dev, "Malicious Driver Detection event %d on RX queue %d PF# %d VF# %d\n",
     VAR_58, VAR_59, VAR_56, VAR_57);
  FUNC_11(VAR_44, VAR_0, 0xffffffff);
  VAR_45 = 1;
 }

 if (VAR_45) {
  bool VAR_60 = 0;

  VAR_46 = FUNC_8(VAR_44, VAR_33);
  if (VAR_46 & VAR_34) {
   FUNC_11(VAR_44, VAR_33, 0xFFFF);
   FUNC_4(&VAR_43->pdev->dev, "TX driver issue detected, PF reset issued\n");
   VAR_60 = 1;
  }

  VAR_46 = FUNC_8(VAR_44, VAR_35);
  if (VAR_46 & VAR_36) {
   FUNC_11(VAR_44, VAR_35, 0xFFFF);
   FUNC_4(&VAR_43->pdev->dev, "TX driver issue detected, PF reset issued\n");
   VAR_60 = 1;
  }

  VAR_46 = FUNC_8(VAR_44, VAR_31);
  if (VAR_46 & VAR_32) {
   FUNC_11(VAR_44, VAR_31, 0xFFFF);
   FUNC_4(&VAR_43->pdev->dev, "RX driver issue detected, PF reset issued\n");
   VAR_60 = 1;
  }

  if (VAR_60) {
   FUNC_9(VAR_42, VAR_43->state);
   FUNC_5(VAR_43);
  }
 }


 for (VAR_47 = 0; VAR_47 < VAR_43->num_alloc_vfs; VAR_47++) {
  struct ice_vf *VAR_61 = &VAR_43->vf[VAR_47];

  bool VAR_62 = 0;

  VAR_46 = FUNC_8(VAR_44, FUNC_1(VAR_47));
  if (VAR_46 & VAR_38) {
   FUNC_11(VAR_44, FUNC_1(VAR_47), 0xFFFF);
   VAR_62 = 1;
   FUNC_4(&VAR_43->pdev->dev, "TX driver issue detected on VF %d\n",
     VAR_47);
  }

  VAR_46 = FUNC_8(VAR_44, FUNC_2(VAR_47));
  if (VAR_46 & VAR_39) {
   FUNC_11(VAR_44, FUNC_2(VAR_47), 0xFFFF);
   VAR_62 = 1;
   FUNC_4(&VAR_43->pdev->dev, "TX driver issue detected on VF %d\n",
     VAR_47);
  }

  VAR_46 = FUNC_8(VAR_44, FUNC_3(VAR_47));
  if (VAR_46 & VAR_40) {
   FUNC_11(VAR_44, FUNC_3(VAR_47), 0xFFFF);
   VAR_62 = 1;
   FUNC_4(&VAR_43->pdev->dev, "TX driver issue detected on VF %d\n",
     VAR_47);
  }

  VAR_46 = FUNC_8(VAR_44, FUNC_0(VAR_47));
  if (VAR_46 & VAR_37) {
   FUNC_11(VAR_44, FUNC_0(VAR_47), 0xFFFF);
   VAR_62 = 1;
   FUNC_4(&VAR_43->pdev->dev, "RX driver issue detected on VF %d\n",
     VAR_47);
  }

  if (VAR_62) {
   VAR_61->num_mdd_events++;
   if (VAR_61->num_mdd_events &&
       VAR_61->num_mdd_events <= VAR_30)
    FUNC_4(&VAR_43->pdev->dev,
      "VF %d has had %llu MDD events since last boot, Admin might need to reload AVF driver with this number of events\n",
      VAR_47, VAR_61->num_mdd_events);
  }
 }
}
