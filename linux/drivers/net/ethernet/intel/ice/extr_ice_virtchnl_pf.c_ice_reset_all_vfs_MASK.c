
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ice_vsi {int idx; int port_info; } ;
struct ice_vf {size_t lan_vsi_idx; scalar_t__ num_vf_qs; int vf_id; int vf_states; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int num_alloc_vfs; TYPE_1__* pdev; struct ice_vf* vf; struct ice_vsi** vsi; int state; struct ice_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_vf*) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *,int *,int ,int ,int *) ;
 int FUNC_6 (struct ice_vf*) ;
 scalar_t__ FUNC_7 (struct ice_pf*) ;
 int FUNC_8 (struct ice_vf*,int,int) ;
 int FUNC_9 (struct ice_hw*,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int) ;

bool FUNC_13(struct ice_pf *VAR_4, bool VAR_5)
{
 struct ice_hw *VAR_6 = &VAR_4->hw;
 struct ice_vf *VAR_7;
 int VAR_8, VAR_9;


 if (!VAR_4->num_alloc_vfs)
  return 0;


 if (FUNC_10(VAR_3, VAR_4->state))
  return 0;


 for (VAR_8 = 0; VAR_8 < VAR_4->num_alloc_vfs; VAR_8++)
  FUNC_8(&VAR_4->vf[VAR_8], VAR_5, 1);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_alloc_vfs; VAR_8++) {
  struct ice_vsi *VAR_10;

  VAR_7 = &VAR_4->vf[VAR_8];
  VAR_10 = VAR_4->vsi[VAR_7->lan_vsi_idx];
  if (FUNC_11(VAR_1, VAR_7->vf_states))
   FUNC_4(VAR_7);
  FUNC_5(VAR_10->port_info, VAR_10->idx, 0, 0, ((void*)0), ((void*)0),
    ((void*)0), VAR_0, VAR_7->vf_id, ((void*)0));
 }







 for (VAR_9 = 0, VAR_8 = 0; VAR_9 < 10 && VAR_8 < VAR_4->num_alloc_vfs; VAR_9++) {


  while (VAR_8 < VAR_4->num_alloc_vfs) {
   u32 VAR_11;

   VAR_7 = &VAR_4->vf[VAR_8];
   VAR_11 = FUNC_9(VAR_6, FUNC_0(VAR_7->vf_id));
   if (!(VAR_11 & VAR_2)) {

    FUNC_12(10, 20);
    break;
   }




   VAR_8++;
  }
 }




 if (VAR_8 < VAR_4->num_alloc_vfs)
  FUNC_2(&VAR_4->pdev->dev, "VF reset check timeout\n");


 for (VAR_8 = 0; VAR_8 < VAR_4->num_alloc_vfs; VAR_8++) {
  VAR_7 = &VAR_4->vf[VAR_8];

  FUNC_6(VAR_7);






  VAR_7->num_vf_qs = 0;
 }

 if (FUNC_7(VAR_4))
  FUNC_1(&VAR_4->pdev->dev,
   "Failed to free MSIX resources used by SR-IOV\n");

 if (!FUNC_3(VAR_4))
  return 0;

 return 1;
}
