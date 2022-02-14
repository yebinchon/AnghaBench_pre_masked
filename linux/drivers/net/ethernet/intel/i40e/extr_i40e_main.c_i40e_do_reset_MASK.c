
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int state; } ;
struct i40e_pf {int flags; int num_alloc_vsi; TYPE_1__* pdev; struct i40e_vsi** vsi; int hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i40e_pf*,int) ;
 int FUNC_7 (struct i40e_vsi*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ,int) ;

void FUNC_13(struct i40e_pf *VAR_12, u32 VAR_13, bool VAR_14)
{
 u32 VAR_15;

 FUNC_1(FUNC_8());



 if (VAR_13 & FUNC_0(VAR_7)) {
  FUNC_2(&VAR_12->pdev->dev, "GlobalR requested\n");
  VAR_15 = FUNC_9(&VAR_12->hw, VAR_1);
  VAR_15 |= VAR_3;
  FUNC_12(&VAR_12->hw, VAR_1, VAR_15);

 } else if (VAR_13 & FUNC_0(VAR_5)) {





  FUNC_2(&VAR_12->pdev->dev, "CoreR requested\n");
  VAR_15 = FUNC_9(&VAR_12->hw, VAR_1);
  VAR_15 |= VAR_2;
  FUNC_12(&VAR_12->hw, VAR_1, VAR_15);
  FUNC_5(&VAR_12->hw);

 } else if (VAR_13 & VAR_4) {
  FUNC_2(&VAR_12->pdev->dev, "PFR requested\n");
  FUNC_6(VAR_12, VAR_14);

  FUNC_3(&VAR_12->pdev->dev,
    VAR_12->flags & VAR_0 ?
    "FW LLDP is disabled\n" :
    "FW LLDP is enabled\n");

 } else if (VAR_13 & FUNC_0(VAR_8)) {
  int VAR_16;


  FUNC_3(&VAR_12->pdev->dev,
    "VSI reinit requested\n");
  for (VAR_16 = 0; VAR_16 < VAR_12->num_alloc_vsi; VAR_16++) {
   struct i40e_vsi *VAR_17 = VAR_12->vsi[VAR_16];

   if (VAR_17 != ((void*)0) &&
       FUNC_11(VAR_11,
            VAR_17->state))
    FUNC_7(VAR_12->vsi[VAR_16]);
  }
 } else if (VAR_13 & FUNC_0(VAR_6)) {
  int VAR_18;


  FUNC_3(&VAR_12->pdev->dev, "VSI down requested\n");
  for (VAR_18 = 0; VAR_18 < VAR_12->num_alloc_vsi; VAR_18++) {
   struct i40e_vsi *VAR_19 = VAR_12->vsi[VAR_18];

   if (VAR_19 != ((void*)0) &&
       FUNC_11(VAR_10,
            VAR_19->state)) {
    FUNC_10(VAR_9, VAR_19->state);
    FUNC_4(VAR_19);
   }
  }
 } else {
  FUNC_3(&VAR_12->pdev->dev,
    "bad reset request 0x%08x\n", VAR_13);
 }
}
