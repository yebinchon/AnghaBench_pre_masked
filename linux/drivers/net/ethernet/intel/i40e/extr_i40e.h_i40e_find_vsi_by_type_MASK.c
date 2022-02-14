
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ type; } ;
struct i40e_pf {int num_alloc_vsi; struct i40e_vsi** vsi; } ;



__attribute__((used)) static inline struct i40e_vsi *
FUNC_0(struct i40e_pf *VAR_0, u16 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_alloc_vsi; VAR_2++) {
  struct i40e_vsi *VAR_3 = VAR_0->vsi[VAR_2];

  if (VAR_3 && VAR_3->type == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
