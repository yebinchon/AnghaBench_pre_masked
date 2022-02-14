
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int dummy; } ;
struct i40e_vf {int lan_vsi_id; } ;
struct i40e_pf {int num_alloc_vfs; struct i40e_vf* vf; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct i40e_vsi* FUNC_1 (struct i40e_pf*,int ) ;

__attribute__((used)) static int FUNC_2(struct i40e_pf *VAR_1, int VAR_2)
{
 struct i40e_vsi *VAR_3;
 struct i40e_vf *VAR_4;
 int VAR_5 = 0;

 if (VAR_2 >= VAR_1->num_alloc_vfs) {
  FUNC_0(&VAR_1->pdev->dev,
   "Invalid VF Identifier %d\n", VAR_2);
  VAR_5 = -VAR_0;
  goto err_out;
 }
 VAR_4 = &VAR_1->vf[VAR_2];
 VAR_3 = FUNC_1(VAR_1, VAR_4->lan_vsi_id);
 if (!VAR_3)
  VAR_5 = -VAR_0;
err_out:
 return VAR_5;
}
