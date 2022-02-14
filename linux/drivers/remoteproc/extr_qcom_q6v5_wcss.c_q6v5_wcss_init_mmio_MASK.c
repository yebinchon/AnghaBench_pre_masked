
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct q6v5_wcss {int halt_nc; int halt_wcss; int halt_q6; void* halt_map; void* rmb_base; void* reg_base; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_phandle_args {int * args; int np; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 void* FUNC_3 (TYPE_1__*,struct resource*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int ,struct of_phandle_args*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct q6v5_wcss *VAR_2,
          struct platform_device *VAR_3)
{
 struct of_phandle_args VAR_4;
 struct resource *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3, VAR_1, "qdsp6");
 VAR_2->reg_base = FUNC_3(&VAR_3->dev, VAR_5);
 if (FUNC_0(VAR_2->reg_base))
  return FUNC_1(VAR_2->reg_base);

 VAR_5 = FUNC_6(VAR_3, VAR_1, "rmb");
 VAR_2->rmb_base = FUNC_3(&VAR_3->dev, VAR_5);
 if (FUNC_0(VAR_2->rmb_base))
  return FUNC_1(VAR_2->rmb_base);

 VAR_6 = FUNC_5(VAR_3->dev.of_node,
            "qcom,halt-regs", 3, 0, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "failed to parse qcom,halt-regs\n");
  return -VAR_0;
 }

 VAR_2->halt_map = FUNC_7(VAR_4.np);
 FUNC_4(VAR_4.np);
 if (FUNC_0(VAR_2->halt_map))
  return FUNC_1(VAR_2->halt_map);

 VAR_2->halt_q6 = VAR_4.args[0];
 VAR_2->halt_wcss = VAR_4.args[1];
 VAR_2->halt_nc = VAR_4.args[2];

 return 0;
}
