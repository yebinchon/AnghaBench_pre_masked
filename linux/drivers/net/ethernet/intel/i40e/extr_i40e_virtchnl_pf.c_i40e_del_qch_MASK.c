
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vf {int num_tc; TYPE_1__* ch; struct i40e_pf* pf; } ;
struct i40e_pf {int * vsi; } ;
struct TYPE_2__ {int vsi_idx; scalar_t__ vsi_id; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct i40e_vf *VAR_0)
{
 struct i40e_pf *VAR_1 = VAR_0->pf;
 int VAR_2;




 for (VAR_2 = 1; VAR_2 < VAR_0->num_tc; VAR_2++) {
  if (VAR_0->ch[VAR_2].vsi_idx) {
   FUNC_0(VAR_1->vsi[VAR_0->ch[VAR_2].vsi_idx]);
   VAR_0->ch[VAR_2].vsi_idx = 0;
   VAR_0->ch[VAR_2].vsi_id = 0;
  }
 }
}
