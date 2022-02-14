
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vector_irq; } ;
struct hclgevf_dev {TYPE_2__ misc_vector; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hclgevf_dev*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,char*,struct hclgevf_dev*) ;

__attribute__((used)) static int FUNC_5(struct hclgevf_dev *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);

 VAR_2 = FUNC_4(VAR_1->misc_vector.vector_irq, VAR_0,
     0, "hclgevf_cmd", VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev, "VF failed to request misc irq(%d)\n",
   VAR_1->misc_vector.vector_irq);
  return VAR_2;
 }

 FUNC_1(VAR_1, 0);


 FUNC_2(&VAR_1->misc_vector, 1);

 return VAR_2;
}
