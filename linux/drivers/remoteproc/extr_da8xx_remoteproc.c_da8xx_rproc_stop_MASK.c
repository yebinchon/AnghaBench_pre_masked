
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rproc {TYPE_1__ dev; struct da8xx_rproc* priv; } ;
struct device {int dummy; } ;
struct da8xx_rproc {int dsp_clk; int dsp_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_0)
{
 struct da8xx_rproc *VAR_1 = VAR_0->priv;
 struct device *VAR_2 = VAR_0->dev.parent;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->dsp_reset);
 if (VAR_3) {
  FUNC_1(VAR_2, "reset_control_assert() failed: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_0(VAR_1->dsp_clk);

 return 0;
}
