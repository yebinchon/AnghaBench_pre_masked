
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
struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct TYPE_9__ {int * client; } ;
struct TYPE_10__ {int * client; } ;
struct hclgevf_dev {TYPE_4__ nic; int * nic_client; int state; TYPE_5__ roce; TYPE_2__* roce_client; } ;
struct TYPE_8__ {int (* uninit_instance ) (TYPE_4__*,int ) ;} ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* uninit_instance ) (TYPE_5__*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(struct hnae3_client *VAR_2,
        struct hnae3_ae_dev *VAR_3)
{
 struct hclgevf_dev *VAR_4 = VAR_3->priv;


 if (VAR_4->roce_client) {
  VAR_4->roce_client->ops->uninit_instance(&VAR_4->roce, 0);
  VAR_4->roce_client = ((void*)0);
  VAR_4->roce.client = ((void*)0);
 }


 if (VAR_2->ops->uninit_instance && VAR_4->nic_client &&
     VAR_2->type != VAR_1) {
  FUNC_0(VAR_0, &VAR_4->state);

  VAR_2->ops->uninit_instance(&VAR_4->nic, 0);
  VAR_4->nic_client = ((void*)0);
  VAR_4->nic.client = ((void*)0);
 }
}
