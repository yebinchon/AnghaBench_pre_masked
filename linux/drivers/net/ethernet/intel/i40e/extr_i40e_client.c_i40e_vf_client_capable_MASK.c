
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_client_instance* cinst; } ;
struct i40e_client_instance {TYPE_3__* client; int lan_info; int state; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* vf_capable ) (int *,TYPE_3__*,int ) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct i40e_pf *VAR_1, u32 VAR_2)
{
 struct i40e_client_instance *VAR_3 = VAR_1->cinst;
 int VAR_4 = 0;

 if (!VAR_3 || !VAR_3->client)
  goto out;
 if (!VAR_3->client->ops || !VAR_3->client->ops->vf_capable) {
  FUNC_0(&VAR_1->pdev->dev,
   "Cannot locate client instance VF capability routine\n");
  goto out;
 }
 if (!FUNC_2(VAR_0, &VAR_3->state))
  goto out;

 VAR_4 = VAR_3->client->ops->vf_capable(&VAR_3->lan_info,
      VAR_3->client,
      VAR_2);
out:
 return VAR_4;
}
