
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_client_instance* cinst; } ;
struct i40e_client_instance {TYPE_3__* client; int lan_info; int state; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* virtchnl_receive ) (int *,TYPE_3__*,int ,int *,int ) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct i40e_vsi *VAR_1, u32 VAR_2, u8 *VAR_3, u16 VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_1->back;
 struct i40e_client_instance *VAR_6 = VAR_5->cinst;

 if (!VAR_6 || !VAR_6->client)
  return;
 if (!VAR_6->client->ops || !VAR_6->client->ops->virtchnl_receive) {
  FUNC_0(&VAR_5->pdev->dev,
   "Cannot locate client instance virtual channel receive routine\n");
  return;
 }
 if (!FUNC_2(VAR_0, &VAR_6->state)) {
  FUNC_0(&VAR_5->pdev->dev, "Client is not open, abort virtchnl_receive\n");
  return;
 }
 VAR_6->client->ops->virtchnl_receive(&VAR_6->lan_info, VAR_6->client,
         VAR_2, VAR_3, VAR_4);
}
