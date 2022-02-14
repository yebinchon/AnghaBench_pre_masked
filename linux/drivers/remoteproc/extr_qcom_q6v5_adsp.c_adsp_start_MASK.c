
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int mem_phys; int q6v5; int xo; int dev; int clks; int num_clks; scalar_t__ qdsp6ss_base; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (scalar_t__,unsigned int,int,int,int ) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct rproc *VAR_11)
{
 struct qcom_adsp *VAR_12 = (struct qcom_adsp *)VAR_11->priv;
 int VAR_13;
 unsigned int VAR_14;

 FUNC_10(&VAR_12->q6v5);

 VAR_13 = FUNC_4(VAR_12->xo);
 if (VAR_13)
  goto disable_irqs;

 FUNC_6(VAR_12->dev, VAR_6);
 VAR_13 = FUNC_8(VAR_12->dev);
 if (VAR_13)
  goto disable_xo_clk;

 VAR_13 = FUNC_2(VAR_12->num_clks, VAR_12->clks);
 if (VAR_13) {
  FUNC_5(VAR_12->dev, "adsp clk_enable failed\n");
  goto disable_power_domain;
 }


 FUNC_14(1, VAR_12->qdsp6ss_base + VAR_9);


 FUNC_14(1, VAR_12->qdsp6ss_base + VAR_8);


 FUNC_14(1, VAR_12->qdsp6ss_base + VAR_7);


 FUNC_14(VAR_12->mem_phys >> 4, VAR_12->qdsp6ss_base + VAR_10);


 FUNC_14(0x1, VAR_12->qdsp6ss_base + VAR_3);


 FUNC_14(0x1, VAR_12->qdsp6ss_base + VAR_0);


 VAR_13 = FUNC_13(VAR_12->qdsp6ss_base + VAR_2,
   VAR_14, (VAR_14 & FUNC_0(0)) != 0, 10, VAR_1);
 if (VAR_13) {
  FUNC_5(VAR_12->dev, "failed to bootup adsp\n");
  goto disable_adsp_clks;
 }

 VAR_13 = FUNC_12(&VAR_12->q6v5, FUNC_7(5 * VAR_5));
 if (VAR_13 == -VAR_4) {
  FUNC_5(VAR_12->dev, "start timed out\n");
  goto disable_adsp_clks;
 }

 return 0;

disable_adsp_clks:
 FUNC_1(VAR_12->num_clks, VAR_12->clks);
disable_power_domain:
 FUNC_6(VAR_12->dev, 0);
 FUNC_9(VAR_12->dev);
disable_xo_clk:
 FUNC_3(VAR_12->xo);
disable_irqs:
 FUNC_11(&VAR_12->q6v5);

 return VAR_13;
}
