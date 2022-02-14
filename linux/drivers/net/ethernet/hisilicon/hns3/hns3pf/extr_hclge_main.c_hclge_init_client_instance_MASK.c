
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_client {int type; } ;
struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct TYPE_4__ {struct hnae3_client* client; } ;
struct TYPE_3__ {struct hnae3_client* client; } ;
struct hclge_vport {TYPE_2__ roce; TYPE_1__ nic; } ;
struct hclge_dev {int num_vmdq_vport; struct hnae3_client* roce_client; struct hnae3_client* nic_client; struct hclge_vport* vport; } ;


 int VAR_0 ;


 int FUNC_0 (struct hnae3_ae_dev*,struct hclge_vport*) ;
 int FUNC_1 (struct hnae3_ae_dev*,struct hclge_vport*) ;
 int FUNC_2 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_3(struct hnae3_client *VAR_1,
          struct hnae3_ae_dev *VAR_2)
{
 struct hclge_dev *VAR_3 = VAR_2->priv;
 struct hclge_vport *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_vmdq_vport + 1; VAR_5++) {
  VAR_4 = &VAR_3->vport[VAR_5];

  switch (VAR_1->type) {
  case 129:

   VAR_3->nic_client = VAR_1;
   VAR_4->nic.client = VAR_1;
   VAR_6 = FUNC_0(VAR_2, VAR_4);
   if (VAR_6)
    goto clear_nic;

   VAR_6 = FUNC_1(VAR_2, VAR_4);
   if (VAR_6)
    goto clear_roce;

   break;
  case 128:
   if (FUNC_2(VAR_3)) {
    VAR_3->roce_client = VAR_1;
    VAR_4->roce.client = VAR_1;
   }

   VAR_6 = FUNC_1(VAR_2, VAR_4);
   if (VAR_6)
    goto clear_roce;

   break;
  default:
   return -VAR_0;
  }
 }

 return 0;

clear_nic:
 VAR_3->nic_client = ((void*)0);
 VAR_4->nic.client = ((void*)0);
 return VAR_6;
clear_roce:
 VAR_3->roce_client = ((void*)0);
 VAR_4->roce.client = ((void*)0);
 return VAR_6;
}
