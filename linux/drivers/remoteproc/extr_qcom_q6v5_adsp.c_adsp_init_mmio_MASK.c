
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct qcom_adsp {int halt_lpass; int halt_map; TYPE_1__* dev; int qdsp6ss_base; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int,int *) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (struct device_node*) ;

__attribute__((used)) static int FUNC_10(struct qcom_adsp *VAR_3,
    struct platform_device *VAR_4)
{
 struct device_node *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_3->qdsp6ss_base = FUNC_3(&VAR_4->dev, VAR_6->start,
   FUNC_8(VAR_6));
 if (!VAR_3->qdsp6ss_base) {
  FUNC_2(VAR_3->dev, "failed to map QDSP6SS registers\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_5(VAR_4->dev.of_node, "qcom,halt-regs", 0);
 if (!VAR_5) {
  FUNC_2(&VAR_4->dev, "failed to parse qcom,halt-regs\n");
  return -VAR_0;
 }

 VAR_3->halt_map = FUNC_9(VAR_5);
 FUNC_4(VAR_5);
 if (FUNC_0(VAR_3->halt_map))
  return FUNC_1(VAR_3->halt_map);

 VAR_7 = FUNC_6(VAR_4->dev.of_node, "qcom,halt-regs",
   1, &VAR_3->halt_lpass);
 if (VAR_7 < 0) {
  FUNC_2(&VAR_4->dev, "no offset in syscon\n");
  return VAR_7;
 }

 return 0;
}
