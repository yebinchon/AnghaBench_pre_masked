
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iavf_vsi {struct iavf_adapter* back; } ;
struct iavf_client_instance {int state; int lan_info; TYPE_3__* client; } ;
struct iavf_adapter {TYPE_1__* pdev; struct iavf_client_instance* cinst; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* close ) (int *,TYPE_3__*,int) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;

void FUNC_4(struct iavf_vsi *VAR_1, bool VAR_2)
{
 struct iavf_adapter *VAR_3 = VAR_1->back;
 struct iavf_client_instance *VAR_4 = VAR_3->cinst;

 if (!VAR_4 || !VAR_4->client || !VAR_4->client->ops ||
     !VAR_4->client->ops->close) {
  FUNC_1(&VAR_1->back->pdev->dev,
   "Cannot locate client instance close function\n");
  return;
 }
 VAR_4->client->ops->close(&VAR_4->lan_info, VAR_4->client, VAR_2);
 FUNC_2(&VAR_4->lan_info);
 FUNC_0(VAR_0, &VAR_4->state);
}
