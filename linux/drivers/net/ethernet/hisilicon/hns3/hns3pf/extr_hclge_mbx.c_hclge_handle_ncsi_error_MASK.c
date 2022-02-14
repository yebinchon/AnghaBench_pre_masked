
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_ae_dev {TYPE_1__* ops; } ;
struct hclge_dev {TYPE_2__* pdev; struct hnae3_ae_dev* ae_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* reset_event ) (TYPE_2__*,int *) ;int (* set_default_reset_request ) (struct hnae3_ae_dev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hnae3_ae_dev*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_1)
{
 struct hnae3_ae_dev *VAR_2 = VAR_1->ae_dev;

 VAR_2->ops->set_default_reset_request(VAR_2, VAR_0);
 FUNC_0(&VAR_1->pdev->dev, "requesting reset due to NCSI error\n");
 VAR_2->ops->reset_event(VAR_1->pdev, ((void*)0));
}
