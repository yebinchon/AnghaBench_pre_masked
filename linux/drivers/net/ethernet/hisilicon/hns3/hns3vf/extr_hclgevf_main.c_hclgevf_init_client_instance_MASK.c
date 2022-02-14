
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_client {int type; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct TYPE_4__ {struct hnae3_client* client; } ;
struct TYPE_3__ {struct hnae3_client* client; } ;
struct hclgevf_dev {TYPE_2__ roce; struct hnae3_client* roce_client; TYPE_1__ nic; struct hnae3_client* nic_client; } ;


 int VAR_0 ;


 int FUNC_0 (struct hnae3_ae_dev*,struct hnae3_client*) ;
 int FUNC_1 (struct hnae3_ae_dev*,struct hnae3_client*) ;
 int FUNC_2 (struct hclgevf_dev*) ;

__attribute__((used)) static int FUNC_3(struct hnae3_client *VAR_1,
     struct hnae3_ae_dev *VAR_2)
{
 struct hclgevf_dev *VAR_3 = VAR_2->priv;
 int VAR_4;

 switch (VAR_1->type) {
 case 129:
  VAR_3->nic_client = VAR_1;
  VAR_3->nic.client = VAR_1;

  VAR_4 = FUNC_0(VAR_2, VAR_1);
  if (VAR_4)
   goto clear_nic;

  VAR_4 = FUNC_1(VAR_2,
       VAR_3->roce_client);
  if (VAR_4)
   goto clear_roce;

  break;
 case 128:
  if (FUNC_2(VAR_3)) {
   VAR_3->roce_client = VAR_1;
   VAR_3->roce.client = VAR_1;
  }

  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4)
   goto clear_roce;

  break;
 default:
  return -VAR_0;
 }

 return 0;

clear_nic:
 VAR_3->nic_client = ((void*)0);
 VAR_3->nic.client = ((void*)0);
 return VAR_4;
clear_roce:
 VAR_3->roce_client = ((void*)0);
 VAR_3->roce.client = ((void*)0);
 return VAR_4;
}
