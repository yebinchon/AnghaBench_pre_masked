
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_q_vector** q_vectors; scalar_t__ netdev; } ;
struct i40e_q_vector {int v_idx; int napi; int affinity_mask; struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 struct i40e_q_vector* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_5, int VAR_6, int VAR_7)
{
 struct i40e_q_vector *VAR_8;


 VAR_8 = FUNC_1(sizeof(struct i40e_q_vector), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->vsi = VAR_5;
 VAR_8->v_idx = VAR_6;
 FUNC_0(&VAR_8->affinity_mask, VAR_3);

 if (VAR_5->netdev)
  FUNC_2(VAR_5->netdev, &VAR_8->napi,
          VAR_4, VAR_2);


 VAR_5->q_vectors[VAR_6] = VAR_8;

 return 0;
}
