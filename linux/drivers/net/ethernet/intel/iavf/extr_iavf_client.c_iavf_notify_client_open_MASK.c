
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iavf_vsi {struct iavf_adapter* back; } ;
struct iavf_client_instance {int state; TYPE_3__* client; int lan_info; } ;
struct iavf_adapter {TYPE_1__* pdev; struct iavf_client_instance* cinst; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* open ) (int *,TYPE_3__*) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct iavf_vsi *VAR_1)
{
 struct iavf_adapter *VAR_2 = VAR_1->back;
 struct iavf_client_instance *VAR_3 = VAR_2->cinst;
 int VAR_4;

 if (!VAR_3 || !VAR_3->client || !VAR_3->client->ops ||
     !VAR_3->client->ops->open) {
  FUNC_0(&VAR_1->back->pdev->dev,
   "Cannot locate client instance open function\n");
  return;
 }
 if (!(FUNC_3(VAR_0, &VAR_3->state))) {
  VAR_4 = VAR_3->client->ops->open(&VAR_3->lan_info, VAR_3->client);
  if (!VAR_4)
   FUNC_1(VAR_0, &VAR_3->state);
 }
}
