
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int num_alloc_vsi; scalar_t__* vsi; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct i40e_pf *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_alloc_vsi; VAR_1++) {
  if (VAR_0->vsi[VAR_1])
   FUNC_0(VAR_0->vsi[VAR_1]);
 }
}
