
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_client {TYPE_1__* ops; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {int roce; int nic_client; int roce_client; } ;
struct TYPE_2__ {int (* init_instance ) (int *) ;} ;


 int FUNC_0 (struct hclgevf_dev*) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 int FUNC_2 (struct hnae3_client*,struct hnae3_ae_dev*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hnae3_ae_dev *VAR_0,
          struct hnae3_client *VAR_1)
{
 struct hclgevf_dev *VAR_2 = VAR_0->priv;
 int VAR_3;

 if (!FUNC_1(VAR_2) || !VAR_2->roce_client ||
     !VAR_2->nic_client)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = VAR_1->ops->init_instance(&VAR_2->roce);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1, VAR_0, 1);

 return 0;
}
