
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct i40e_qvlist_info {size_t num_vectors; struct i40e_qv_info* qv_info; } ;
struct i40e_qv_info {scalar_t__ v_idx; } ;
struct i40e_pf {int hw; } ;
struct i40e_info {struct i40e_qvlist_info* qvlist_info; struct i40e_pf* pf; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_qvlist_info*) ;
 int FUNC_2 (int *,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct i40e_info *VAR_1)
{
 struct i40e_qvlist_info *VAR_2 = VAR_1->qvlist_info;
 u32 VAR_3;

 if (!VAR_1->qvlist_info)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_vectors; VAR_3++) {
  struct i40e_pf *VAR_4 = VAR_1->pf;
  struct i40e_qv_info *VAR_5;
  u32 VAR_6;

  VAR_5 = &VAR_2->qv_info[VAR_3];
  if (!VAR_5)
   continue;
  VAR_6 = FUNC_0(VAR_5->v_idx - 1);
  FUNC_2(&VAR_4->hw, VAR_6, VAR_0);
 }
 FUNC_1(VAR_1->qvlist_info);
 VAR_1->qvlist_info = ((void*)0);
}
