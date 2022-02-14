
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct virtchnl_iwarp_qvlist_info {size_t num_vectors; struct virtchnl_iwarp_qv_info* qv_info; } ;
struct virtchnl_iwarp_qv_info {size_t v_idx; scalar_t__ ceq_idx; size_t itr_idx; scalar_t__ aeq_idx; } ;
struct i40e_vf {size_t vf_id; TYPE_3__* qvlist_info; struct i40e_pf* pf; } ;
struct TYPE_7__ {size_t num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_2__ func_caps; } ;
struct i40e_pf {struct i40e_hw hw; TYPE_1__* pdev; } ;
struct TYPE_8__ {size_t num_vectors; struct virtchnl_iwarp_qv_info* qv_info; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (size_t) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (size_t) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_3 (int *,char*,size_t,size_t) ;
 int FUNC_4 (struct i40e_vf*,size_t) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 size_t FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (TYPE_3__*,struct virtchnl_iwarp_qv_info*,size_t) ;
 int FUNC_9 (struct i40e_hw*,int ,size_t) ;

__attribute__((used)) static int FUNC_10(struct i40e_vf *VAR_17,
        struct virtchnl_iwarp_qvlist_info *VAR_18)
{
 struct i40e_pf *VAR_19 = VAR_17->pf;
 struct i40e_hw *VAR_20 = &VAR_19->hw;
 struct virtchnl_iwarp_qv_info *VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26, VAR_27;
 u32 VAR_28;
 int VAR_29 = 0;

 VAR_28 = VAR_19->hw.func_caps.num_msix_vectors_vf;

 if (VAR_18->num_vectors > VAR_28) {
  FUNC_3(&VAR_19->pdev->dev,
    "Incorrect number of iwarp vectors %u. Maximum %u allowed.\n",
    VAR_18->num_vectors,
    VAR_28);
  VAR_29 = -VAR_0;
  goto err_out;
 }

 FUNC_5(VAR_17->qvlist_info);
 VAR_17->qvlist_info = FUNC_6(FUNC_8(VAR_17->qvlist_info, VAR_21,
           VAR_18->num_vectors - 1),
      VAR_2);
 if (!VAR_17->qvlist_info) {
  VAR_29 = -VAR_1;
  goto err_out;
 }
 VAR_17->qvlist_info->num_vectors = VAR_18->num_vectors;

 VAR_28 = VAR_19->hw.func_caps.num_msix_vectors_vf;
 for (VAR_23 = 0; VAR_23 < VAR_18->num_vectors; VAR_23++) {
  VAR_21 = &VAR_18->qv_info[VAR_23];
  if (!VAR_21)
   continue;


  if (!FUNC_4(VAR_17, VAR_21->v_idx)) {
   VAR_29 = -VAR_0;
   goto err_free;
  }

  VAR_22 = VAR_21->v_idx;

  VAR_17->qvlist_info->qv_info[VAR_23] = *VAR_21;

  VAR_24 = ((VAR_28 - 1) * VAR_17->vf_id) + (VAR_22 - 1);




  VAR_25 = FUNC_7(VAR_20, FUNC_2(VAR_24));
  VAR_26 = ((VAR_25 & VAR_13) >>
    VAR_14);
  VAR_27 = ((VAR_25 & VAR_15) >>
    VAR_16);

  if (VAR_21->ceq_idx != VAR_3) {
   VAR_24 = (VAR_28 - 1) * VAR_17->vf_id + VAR_21->ceq_idx;
   VAR_25 = (VAR_8 |
   (VAR_22 << VAR_10) |
   (VAR_21->itr_idx << VAR_9) |
   (VAR_27 << VAR_12) |
   (VAR_26 << VAR_11));
   FUNC_9(VAR_20, FUNC_1(VAR_24), VAR_25);

   VAR_24 = ((VAR_28 - 1) * VAR_17->vf_id) + (VAR_22 - 1);
   VAR_25 = (VAR_21->ceq_idx &
          VAR_13) |
          (VAR_4 <<
          VAR_16);
   FUNC_9(VAR_20, FUNC_2(VAR_24), VAR_25);
  }

  if (VAR_21->aeq_idx != VAR_3) {
   VAR_25 = (VAR_5 |
   (VAR_22 << VAR_7) |
   (VAR_21->itr_idx << VAR_6));

   FUNC_9(VAR_20, FUNC_0(VAR_17->vf_id), VAR_25);
  }
 }

 return 0;
err_free:
 FUNC_5(VAR_17->qvlist_info);
 VAR_17->qvlist_info = ((void*)0);
err_out:
 return VAR_29;
}
