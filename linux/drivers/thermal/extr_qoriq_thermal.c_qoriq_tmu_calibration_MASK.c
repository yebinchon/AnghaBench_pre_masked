
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qoriq_tmu_data {TYPE_1__* regs; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int tscfgr; int ttcfgr; int ttr3cr; int ttr2cr; int ttr1cr; int ttr0cr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int* FUNC_1 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*,int) ;
 int FUNC_3 (int const*,int) ;
 struct qoriq_tmu_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct qoriq_tmu_data*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5[4];
 const u32 *VAR_6;
 struct device_node *VAR_7 = VAR_1->dev.of_node;
 struct qoriq_tmu_data *VAR_8 = FUNC_4(VAR_1);

 if (FUNC_2(VAR_7, "fsl,tmu-range", VAR_5, 4)) {
  FUNC_0(&VAR_1->dev, "missing calibration range.\n");
  return -VAR_0;
 }


 FUNC_5(VAR_8, VAR_5[0], &VAR_8->regs->ttr0cr);
 FUNC_5(VAR_8, VAR_5[1], &VAR_8->regs->ttr1cr);
 FUNC_5(VAR_8, VAR_5[2], &VAR_8->regs->ttr2cr);
 FUNC_5(VAR_8, VAR_5[3], &VAR_8->regs->ttr3cr);

 VAR_6 = FUNC_1(VAR_7, "fsl,tmu-calibration", &VAR_4);
 if (VAR_6 == ((void*)0) || VAR_4 % 8) {
  FUNC_0(&VAR_1->dev, "invalid calibration data.\n");
  return -VAR_0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2 += 8, VAR_6 += 2) {
  VAR_3 = FUNC_3(VAR_6, 1);
  FUNC_5(VAR_8, VAR_3, &VAR_8->regs->ttcfgr);
  VAR_3 = FUNC_3(VAR_6 + 1, 1);
  FUNC_5(VAR_8, VAR_3, &VAR_8->regs->tscfgr);
 }

 return 0;
}
