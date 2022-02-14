
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_vf {int vf_id; int vf_states; } ;
struct TYPE_2__ {scalar_t__ vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; struct i40e_vf* vf; struct i40e_hw hw; } ;
typedef int i40e_status ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int,int,int ,int *,int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_2,
     enum virtchnl_ops VAR_3,
     i40e_status VAR_4, u8 *VAR_5,
     u16 VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_2->hw;
 struct i40e_vf *VAR_8 = VAR_2->vf;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2->num_alloc_vfs; VAR_9++, VAR_8++) {
  int VAR_10 = VAR_8->vf_id + (int)VAR_7->func_caps.vf_base_id;

  if (!FUNC_1(VAR_1, &VAR_8->vf_states) &&
      !FUNC_1(VAR_0, &VAR_8->vf_states))
   continue;




  FUNC_0(VAR_7, VAR_10, VAR_3, VAR_4,
           VAR_5, VAR_6, ((void*)0));
 }
}
