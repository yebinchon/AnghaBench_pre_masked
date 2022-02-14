
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct i40e_qvlist_info {size_t num_vectors; struct i40e_qv_info* qv_info; } ;
struct i40e_qv_info {size_t v_idx; scalar_t__ ceq_idx; size_t itr_idx; scalar_t__ aeq_idx; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {size_t iwarp_base_vector; size_t num_iwarp_msix; struct i40e_hw hw; } ;
struct i40e_info {TYPE_1__* qvlist_info; struct i40e_pf* pf; } ;
struct i40e_client {int dummy; } ;
struct TYPE_4__ {size_t num_vectors; struct i40e_qv_info* qv_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct i40e_qv_info*,size_t) ;
 int FUNC_6 (struct i40e_hw*,size_t,size_t) ;

__attribute__((used)) static int FUNC_7(struct i40e_info *VAR_16,
        struct i40e_client *VAR_17,
        struct i40e_qvlist_info *VAR_18)
{
 struct i40e_pf *VAR_19 = VAR_16->pf;
 struct i40e_hw *VAR_20 = &VAR_19->hw;
 struct i40e_qv_info *VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_16->qvlist_info = FUNC_4(FUNC_5(VAR_16->qvlist_info, VAR_21,
        VAR_18->num_vectors - 1), VAR_2);
 if (!VAR_16->qvlist_info)
  return -VAR_1;
 VAR_16->qvlist_info->num_vectors = VAR_18->num_vectors;

 for (VAR_23 = 0; VAR_23 < VAR_18->num_vectors; VAR_23++) {
  VAR_21 = &VAR_18->qv_info[VAR_23];
  if (!VAR_21)
   continue;
  VAR_22 = VAR_21->v_idx;


  if ((VAR_22 >= (VAR_19->iwarp_base_vector + VAR_19->num_iwarp_msix)) ||
      (VAR_22 < VAR_19->iwarp_base_vector))
   goto err;

  VAR_16->qvlist_info->qv_info[VAR_23] = *VAR_21;
  VAR_24 = FUNC_1(VAR_22 - 1);

  if (VAR_21->ceq_idx == VAR_14) {

   FUNC_6(VAR_20, VAR_24, VAR_11);
  } else {
   VAR_25 = (VAR_21->ceq_idx &
          VAR_11) |
          (VAR_15 <<
          VAR_12);
   FUNC_6(VAR_20, VAR_24, VAR_25);

   VAR_25 = (VAR_7 |
          (VAR_22 << VAR_9) |
          (VAR_21->itr_idx <<
    VAR_8) |
          (VAR_13 <<
    VAR_10));
   FUNC_6(VAR_20, FUNC_0(VAR_21->ceq_idx), VAR_25);
  }
  if (VAR_21->aeq_idx != VAR_14) {
   VAR_25 = (VAR_4 |
          (VAR_22 << VAR_6) |
          (VAR_21->itr_idx <<
    VAR_5));

   FUNC_6(VAR_20, VAR_3, VAR_25);
  }
 }

 FUNC_2(VAR_20);
 return 0;
err:
 FUNC_3(VAR_16->qvlist_info);
 VAR_16->qvlist_info = ((void*)0);
 return -VAR_0;
}
