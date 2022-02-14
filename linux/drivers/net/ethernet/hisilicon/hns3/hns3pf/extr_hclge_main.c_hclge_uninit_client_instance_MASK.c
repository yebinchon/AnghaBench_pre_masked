
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hnae3_client {scalar_t__ type; TYPE_3__* ops; } ;
struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct TYPE_9__ {int * client; } ;
struct TYPE_10__ {int * client; } ;
struct hclge_vport {TYPE_4__ nic; TYPE_5__ roce; } ;
struct hclge_dev {int num_vmdq_vport; int * nic_client; int state; TYPE_2__* roce_client; struct hclge_vport* vport; } ;
struct TYPE_8__ {int (* uninit_instance ) (TYPE_4__*,int ) ;} ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* uninit_instance ) (TYPE_5__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hnae3_client *VAR_5,
      struct hnae3_ae_dev *VAR_6)
{
 struct hclge_dev *VAR_7 = VAR_6->priv;
 struct hclge_vport *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_vmdq_vport + 1; VAR_9++) {
  VAR_8 = &VAR_7->vport[VAR_9];
  if (VAR_7->roce_client) {
   FUNC_0(VAR_1, &VAR_7->state);
   while (FUNC_4(VAR_2, &VAR_7->state))
    FUNC_1(VAR_3);

   VAR_7->roce_client->ops->uninit_instance(&VAR_8->roce,
        0);
   VAR_7->roce_client = ((void*)0);
   VAR_8->roce.client = ((void*)0);
  }
  if (VAR_5->type == VAR_4)
   return;
  if (VAR_7->nic_client && VAR_5->ops->uninit_instance) {
   FUNC_0(VAR_0, &VAR_7->state);
   while (FUNC_4(VAR_2, &VAR_7->state))
    FUNC_1(VAR_3);

   VAR_5->ops->uninit_instance(&VAR_8->nic, 0);
   VAR_7->nic_client = ((void*)0);
   VAR_8->nic.client = ((void*)0);
  }
 }
}
