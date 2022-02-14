
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr_resets; int of_node; int owner; int * ops; } ;
struct zynqmp_reset_data {TYPE_2__ rcdev; int eemi_ops; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct zynqmp_reset_data* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (struct platform_device*,struct zynqmp_reset_data*) ;
 int FUNC_5 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct zynqmp_reset_data *VAR_6;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->eemi_ops = FUNC_5();
 if (FUNC_0(VAR_6->eemi_ops))
  return FUNC_1(VAR_6->eemi_ops);

 FUNC_4(VAR_5, VAR_6);

 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.owner = VAR_2;
 VAR_6->rcdev.of_node = VAR_5->dev.of_node;
 VAR_6->rcdev.nr_resets = VAR_3;

 return FUNC_3(&VAR_5->dev, &VAR_6->rcdev);
}
