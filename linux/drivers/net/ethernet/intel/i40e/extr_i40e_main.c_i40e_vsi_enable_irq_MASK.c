
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int num_q_vectors; struct i40e_pf* back; } ;
struct i40e_pf {int flags; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40e_vsi*,int) ;
 int FUNC_2 (struct i40e_pf*) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->back;
 int VAR_3;

 if (VAR_2->flags & VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_q_vectors; VAR_3++)
   FUNC_1(VAR_1, VAR_3);
 } else {
  FUNC_2(VAR_2);
 }

 FUNC_0(&VAR_2->hw);
 return 0;
}
