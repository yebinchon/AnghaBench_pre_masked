
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct virtchnl_iwarp_qvlist_info {size_t num_vectors; struct virtchnl_iwarp_qv_info* qv_info; } ;
struct virtchnl_iwarp_qv_info {size_t v_idx; scalar_t__ ceq_idx; } ;
struct i40e_vf {size_t vf_id; struct virtchnl_iwarp_qvlist_info* qvlist_info; struct i40e_pf* pf; } ;
struct TYPE_2__ {size_t num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (size_t) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct virtchnl_iwarp_qvlist_info*) ;
 size_t FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct i40e_vf *VAR_7)
{
 struct i40e_pf *VAR_8 = VAR_7->pf;
 struct virtchnl_iwarp_qvlist_info *VAR_9 = VAR_7->qvlist_info;
 u32 VAR_10;
 u32 VAR_11;

 if (!VAR_7->qvlist_info)
  return;

 VAR_10 = VAR_8->hw.func_caps.num_msix_vectors_vf;
 for (VAR_11 = 0; VAR_11 < VAR_9->num_vectors; VAR_11++) {
  struct virtchnl_iwarp_qv_info *VAR_12;
  u32 VAR_13, VAR_14;
  struct i40e_hw *VAR_15 = &VAR_8->hw;
  u32 VAR_16, VAR_17, VAR_18;

  VAR_12 = &VAR_9->qv_info[VAR_11];
  if (!VAR_12)
   continue;
  VAR_16 = VAR_12->v_idx;
  if (VAR_12->ceq_idx != VAR_0) {



   VAR_17 = (VAR_10 - 1) * VAR_7->vf_id + VAR_12->ceq_idx;
   VAR_18 = FUNC_3(VAR_15, FUNC_0(VAR_17));
   VAR_13 = (VAR_18 & VAR_1)
     >> VAR_2;
   VAR_14 = (VAR_18 & VAR_3)
     >> VAR_4;

   VAR_17 = ((VAR_10 - 1) * VAR_7->vf_id) + (VAR_16 - 1);
   VAR_18 = (VAR_13 &
          VAR_5) |
          (VAR_14 <<
          VAR_6);

   FUNC_4(VAR_15, FUNC_1(VAR_17), VAR_18);
  }
 }
 FUNC_2(VAR_7->qvlist_info);
 VAR_7->qvlist_info = ((void*)0);
}
