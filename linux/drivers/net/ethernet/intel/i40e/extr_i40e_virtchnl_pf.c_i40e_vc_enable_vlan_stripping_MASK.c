
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_vsi {int dummy; } ;
struct i40e_vf {size_t lan_vsi_idx; TYPE_1__* pf; int vf_states; } ;
typedef int i40e_status ;
struct TYPE_2__ {struct i40e_vsi** vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_vf*,int ,int ) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct i40e_vf *VAR_3, u8 *VAR_4)
{
 i40e_status VAR_5 = 0;
 struct i40e_vsi *VAR_6;

 if (!FUNC_2(VAR_1, &VAR_3->vf_states)) {
  VAR_5 = VAR_0;
  goto err;
 }

 VAR_6 = VAR_3->pf->vsi[VAR_3->lan_vsi_idx];
 FUNC_1(VAR_6);


err:
 return FUNC_0(VAR_3, VAR_2,
           VAR_5);
}
