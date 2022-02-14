
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vf {int vf_states; } ;
struct i40e_pf {int num_alloc_vfs; struct i40e_vf* vf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct i40e_pf *VAR_1)
{
 struct i40e_vf *VAR_2 = VAR_1->vf;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_alloc_vfs; VAR_3++)
  if (FUNC_0(VAR_0, &VAR_2[VAR_3].vf_states))
   return 1;
 return 0;
}
