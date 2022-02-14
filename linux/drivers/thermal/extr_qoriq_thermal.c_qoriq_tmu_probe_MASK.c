
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qoriq_tmu_data {int clk; int regs; int little_endian; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct qoriq_tmu_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct platform_device*,struct qoriq_tmu_data*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct qoriq_tmu_data*) ;
 int FUNC_12 (struct platform_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 int VAR_4;
 struct qoriq_tmu_data *VAR_5;
 struct device_node *VAR_6 = VAR_3->dev.of_node;

 VAR_5 = FUNC_6(&VAR_3->dev, sizeof(struct qoriq_tmu_data),
       VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_9(VAR_3, VAR_5);

 VAR_5->little_endian = FUNC_8(VAR_6, "little-endian");

 VAR_5->regs = FUNC_7(VAR_3, 0);
 if (FUNC_0(VAR_5->regs)) {
  FUNC_4(&VAR_3->dev, "Failed to get memory region\n");
  return FUNC_1(VAR_5->regs);
 }

 VAR_5->clk = FUNC_5(&VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);

 VAR_4 = FUNC_3(VAR_5->clk);
 if (VAR_4) {
  FUNC_4(&VAR_3->dev, "Failed to enable clock\n");
  return VAR_4;
 }

 FUNC_11(VAR_5);

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4 < 0)
  goto err;

 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4 < 0) {
  FUNC_4(&VAR_3->dev, "Failed to register sensors\n");
  VAR_4 = -VAR_0;
  goto err;
 }

 return 0;

err:
 FUNC_2(VAR_5->clk);
 FUNC_9(VAR_3, ((void*)0));

 return VAR_4;
}
