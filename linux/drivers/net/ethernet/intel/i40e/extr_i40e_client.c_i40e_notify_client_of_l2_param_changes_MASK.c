
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_client_instance* cinst; } ;
struct i40e_params {int dummy; } ;
struct TYPE_7__ {int params; } ;
struct i40e_client_instance {TYPE_4__* client; TYPE_3__ lan_info; int state; } ;
typedef int params ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* l2_param_change ) (TYPE_3__*,TYPE_4__*,struct i40e_params*) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i40e_vsi*,struct i40e_params*) ;
 int FUNC_2 (int *,struct i40e_params*,int) ;
 int FUNC_3 (struct i40e_params*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,struct i40e_params*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct i40e_vsi *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->back;
 struct i40e_client_instance *VAR_3 = VAR_2->cinst;
 struct i40e_params VAR_4;

 if (!VAR_3 || !VAR_3->client)
  return;
 if (!VAR_3->client->ops || !VAR_3->client->ops->l2_param_change) {
  FUNC_0(&VAR_1->back->pdev->dev,
   "Cannot locate client instance l2_param_change routine\n");
  return;
 }
 if (!FUNC_5(VAR_0, &VAR_3->state)) {
  FUNC_0(&VAR_1->back->pdev->dev, "Client is not open, abort l2 param change\n");
  return;
 }
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_1, &VAR_4);
 FUNC_2(&VAR_3->lan_info.params, &VAR_4, sizeof(struct i40e_params));
 VAR_3->client->ops->l2_param_change(&VAR_3->lan_info, VAR_3->client,
        &VAR_4);
}
