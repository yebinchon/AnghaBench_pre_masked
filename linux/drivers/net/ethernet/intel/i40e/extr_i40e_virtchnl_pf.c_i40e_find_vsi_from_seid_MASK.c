
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ seid; } ;
struct i40e_vf {int num_tc; TYPE_1__* ch; struct i40e_pf* pf; } ;
struct i40e_pf {int dummy; } ;
struct TYPE_2__ {int vsi_id; } ;


 struct i40e_vsi* FUNC_0 (struct i40e_pf*,int ) ;

__attribute__((used)) static struct i40e_vsi *FUNC_1(struct i40e_vf *VAR_0, u16 VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_0->pf;
 struct i40e_vsi *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_tc ; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_0->ch[VAR_4].vsi_id);
  if (VAR_3 && VAR_3->seid == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
