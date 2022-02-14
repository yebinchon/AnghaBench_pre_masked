
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iavf_vsi {TYPE_2__* back; } ;
struct iavf_params {int dummy; } ;
struct TYPE_9__ {struct iavf_params params; } ;
struct iavf_client_instance {TYPE_5__* client; TYPE_4__ lan_info; } ;
struct TYPE_10__ {TYPE_3__* ops; } ;
struct TYPE_8__ {int (* l2_param_change ) (TYPE_4__*,TYPE_5__*,struct iavf_params*) ;} ;
struct TYPE_7__ {TYPE_1__* pdev; struct iavf_client_instance* cinst; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct iavf_vsi*,struct iavf_params*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,struct iavf_params*) ;

void FUNC_3(struct iavf_vsi *VAR_0)
{
 struct iavf_client_instance *VAR_1;
 struct iavf_params VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->back->cinst;

 if (!VAR_1 || !VAR_1->client || !VAR_1->client->ops ||
     !VAR_1->client->ops->l2_param_change) {
  FUNC_0(&VAR_0->back->pdev->dev,
   "Cannot locate client instance l2_param_change function\n");
  return;
 }
 FUNC_1(VAR_0, &VAR_2);
 VAR_1->lan_info.params = VAR_2;
 VAR_1->client->ops->l2_param_change(&VAR_1->lan_info, VAR_1->client,
         &VAR_2);
}
