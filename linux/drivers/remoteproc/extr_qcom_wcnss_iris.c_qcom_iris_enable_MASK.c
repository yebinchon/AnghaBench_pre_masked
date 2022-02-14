
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iris {int vregs; int num_vregs; int dev; int xo_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct qcom_iris *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->num_vregs, VAR_0->vregs);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0->xo_clk);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "failed to enable xo clk\n");
  goto disable_regulators;
 }

 return 0;

disable_regulators:
 FUNC_2(VAR_0->num_vregs, VAR_0->vregs);

 return VAR_1;
}
