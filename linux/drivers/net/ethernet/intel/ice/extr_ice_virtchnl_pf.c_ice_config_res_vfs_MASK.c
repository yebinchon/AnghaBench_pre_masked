
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vf {int num_vf_qs; int vf_id; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int num_alloc_vfs; int state; TYPE_1__* pdev; int num_vf_qps; struct ice_vf* vf; struct ice_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_vf*) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_hw*,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static bool FUNC_8(struct ice_pf *VAR_2)
{
 struct ice_hw *VAR_3 = &VAR_2->hw;
 int VAR_4;

 if (FUNC_3(VAR_2)) {
  FUNC_2(&VAR_2->pdev->dev,
   "Cannot allocate VF resources, try with fewer number of VFs\n");
  return 0;
 }


 if (FUNC_7(VAR_0, VAR_2->state))
  FUNC_6(VAR_3, ((void*)0), ((void*)0));


 for (VAR_4 = 0; VAR_4 < VAR_2->num_alloc_vfs; VAR_4++) {
  struct ice_vf *VAR_5 = &VAR_2->vf[VAR_4];

  VAR_5->num_vf_qs = VAR_2->num_vf_qps;
  FUNC_1(&VAR_2->pdev->dev,
   "VF-id %d has %d queues configured\n",
   VAR_5->vf_id, VAR_5->num_vf_qs);
  FUNC_4(VAR_5);
 }

 FUNC_5(VAR_3);
 FUNC_0(VAR_1, VAR_2->state);

 return 1;
}
