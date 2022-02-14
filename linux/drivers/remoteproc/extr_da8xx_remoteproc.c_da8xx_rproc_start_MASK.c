
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rproc {int bootaddr; scalar_t__ priv; TYPE_1__ dev; } ;
struct reset_control {int dummy; } ;
struct device {int dummy; } ;
struct da8xx_rproc {int bootreg; struct reset_control* dsp_reset; struct clk* dsp_clk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct rproc *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev.parent;
 struct da8xx_rproc *VAR_3 = (struct da8xx_rproc *)VAR_1->priv;
 struct clk *VAR_4 = VAR_3->dsp_clk;
 struct reset_control *VAR_5 = VAR_3->dsp_reset;
 int VAR_6;


 if (VAR_1->bootaddr & 0x3ff) {
  FUNC_2(VAR_2, "invalid boot address: must be aligned to 1KB\n");

  return -VAR_0;
 }

 FUNC_4(VAR_1->bootaddr, VAR_3->bootreg);

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_2, "clk_prepare_enable() failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_2, "reset_control_deassert() failed: %d\n", VAR_6);
  FUNC_0(VAR_4);
  return VAR_6;
 }

 return 0;
}
