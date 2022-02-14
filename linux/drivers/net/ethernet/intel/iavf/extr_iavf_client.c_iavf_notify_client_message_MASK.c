
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iavf_vsi {TYPE_3__* back; } ;
struct iavf_client_instance {TYPE_4__* client; int lan_info; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {TYPE_1__* pdev; struct iavf_client_instance* cinst; } ;
struct TYPE_6__ {int (* virtchnl_receive ) (int *,TYPE_4__*,int *,int ) ;} ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_4__*,int *,int ) ;

void FUNC_2(struct iavf_vsi *VAR_0, u8 *VAR_1, u16 VAR_2)
{
 struct iavf_client_instance *VAR_3;

 if (!VAR_0)
  return;

 VAR_3 = VAR_0->back->cinst;
 if (!VAR_3 || !VAR_3->client || !VAR_3->client->ops ||
     !VAR_3->client->ops->virtchnl_receive) {
  FUNC_0(&VAR_0->back->pdev->dev,
   "Cannot locate client instance virtchnl_receive function\n");
  return;
 }
 VAR_3->client->ops->virtchnl_receive(&VAR_3->lan_info, VAR_3->client,
          VAR_1, VAR_2);
}
