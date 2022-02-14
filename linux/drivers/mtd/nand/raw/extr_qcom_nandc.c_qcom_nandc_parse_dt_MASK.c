
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_nand_controller {TYPE_2__* dev; int data_crci; int cmd_crci; TYPE_1__* props; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {int is_bam; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 struct qcom_nand_controller* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct qcom_nand_controller *VAR_1 = FUNC_2(VAR_0);
 struct device_node *VAR_2 = VAR_1->dev->of_node;
 int VAR_3;

 if (!VAR_1->props->is_bam) {
  VAR_3 = FUNC_1(VAR_2, "qcom,cmd-crci",
        &VAR_1->cmd_crci);
  if (VAR_3) {
   FUNC_0(VAR_1->dev, "command CRCI unspecified\n");
   return VAR_3;
  }

  VAR_3 = FUNC_1(VAR_2, "qcom,data-crci",
        &VAR_1->data_crci);
  if (VAR_3) {
   FUNC_0(VAR_1->dev, "data CRCI unspecified\n");
   return VAR_3;
  }
 }

 return 0;
}
