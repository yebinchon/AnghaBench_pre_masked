
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_client {int type; } ;
struct hnae3_ae_dev {TYPE_2__* pdev; TYPE_1__* ops; int flag; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* init_client_instance ) (struct hnae3_client*,struct hnae3_ae_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hnae3_client*,struct hnae3_ae_dev*) ;

__attribute__((used)) static int FUNC_4(struct hnae3_client *VAR_1,
          struct hnae3_ae_dev *VAR_2)
{
 int VAR_3;


 if (!(FUNC_1(VAR_1->type) &&
       FUNC_2(VAR_2->flag, VAR_0))) {
  return 0;
 }

 VAR_3 = VAR_2->ops->init_client_instance(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_2->pdev->dev,
   "fail to instantiate client, ret = %d\n", VAR_3);

 return VAR_3;
}
