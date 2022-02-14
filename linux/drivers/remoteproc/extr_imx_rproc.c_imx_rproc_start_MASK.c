
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct imx_rproc* priv; } ;
struct imx_rproc_dcfg {int src_start; int src_mask; int src_reg; } ;
struct imx_rproc {int regmap; struct device* dev; struct imx_rproc_dcfg* dcfg; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rproc *VAR_0)
{
 struct imx_rproc *VAR_1 = VAR_0->priv;
 const struct imx_rproc_dcfg *VAR_2 = VAR_1->dcfg;
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->regmap, VAR_2->src_reg,
     VAR_2->src_mask, VAR_2->src_start);
 if (VAR_4)
  FUNC_0(VAR_3, "Failed to enable M4!\n");

 return VAR_4;
}
