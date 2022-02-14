
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ice_vf {int vf_id; int vf_states; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int num_alloc_vfs; struct ice_vf* vf; struct ice_hw hw; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,int ,int,int,int *,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ice_pf *VAR_2, enum virtchnl_ops VAR_3,
      enum virtchnl_status_code VAR_4, u8 *VAR_5, u16 VAR_6)
{
 struct ice_hw *VAR_7 = &VAR_2->hw;
 struct ice_vf *VAR_8 = VAR_2->vf;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2->num_alloc_vfs; VAR_9++, VAR_8++) {

  if (!FUNC_1(VAR_1, VAR_8->vf_states) &&
      !FUNC_1(VAR_0, VAR_8->vf_states))
   continue;




  FUNC_0(VAR_7, VAR_8->vf_id, VAR_3, VAR_4, VAR_5,
          VAR_6, ((void*)0));
 }
}
