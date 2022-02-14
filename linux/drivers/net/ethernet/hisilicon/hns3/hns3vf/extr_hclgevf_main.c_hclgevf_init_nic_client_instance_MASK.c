
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_client {TYPE_1__* ops; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {int nic; int state; } ;
struct TYPE_2__ {int (* init_instance ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hclgevf_dev*) ;
 int FUNC_1 (struct hnae3_client*,struct hnae3_ae_dev*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hnae3_ae_dev *VAR_1,
         struct hnae3_client *VAR_2)
{
 struct hclgevf_dev *VAR_3 = VAR_1->priv;
 int VAR_4;

 VAR_4 = VAR_2->ops->init_instance(&VAR_3->nic);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_0, &VAR_3->state);
 FUNC_1(VAR_2, VAR_1, 1);

 if (FUNC_2(&VAR_3->nic))
  FUNC_0(VAR_3);

 return 0;
}
