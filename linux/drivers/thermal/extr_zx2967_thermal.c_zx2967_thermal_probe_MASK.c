
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct zx2967_thermal_priv {TYPE_2__* clk_topcrm; TYPE_2__* clk_apb; int * dev; TYPE_2__* tzd; int lock; TYPE_2__* regs; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_10__ {TYPE_1__* tzp; } ;
struct TYPE_9__ {scalar_t__ slope; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,char*,...) ;
 void* FUNC_5 (int *,char*) ;
 TYPE_2__* FUNC_6 (int *,struct resource*) ;
 struct zx2967_thermal_priv* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct zx2967_thermal_priv*) ;
 TYPE_2__* FUNC_11 (int *,int ,struct zx2967_thermal_priv*,int *) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct zx2967_thermal_priv *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_9(VAR_5, VAR_3, 0);
 VAR_6->regs = FUNC_6(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->regs))
  return FUNC_1(VAR_6->regs);

 VAR_6->clk_topcrm = FUNC_5(&VAR_5->dev, "topcrm");
 if (FUNC_0(VAR_6->clk_topcrm)) {
  VAR_8 = FUNC_1(VAR_6->clk_topcrm);
  FUNC_4(&VAR_5->dev, "failed to get topcrm clock: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_6->clk_topcrm);
 if (VAR_8) {
  FUNC_4(&VAR_5->dev, "failed to enable topcrm clock: %d\n",
   VAR_8);
  return VAR_8;
 }

 VAR_6->clk_apb = FUNC_5(&VAR_5->dev, "apb");
 if (FUNC_0(VAR_6->clk_apb)) {
  VAR_8 = FUNC_1(VAR_6->clk_apb);
  FUNC_4(&VAR_5->dev, "failed to get apb clock: %d\n", VAR_8);
  goto disable_clk_topcrm;
 }

 VAR_8 = FUNC_3(VAR_6->clk_apb);
 if (VAR_8) {
  FUNC_4(&VAR_5->dev, "failed to enable apb clock: %d\n",
   VAR_8);
  goto disable_clk_topcrm;
 }

 FUNC_8(&VAR_6->lock);
 VAR_6->tzd = FUNC_11(&VAR_5->dev,
     0, VAR_6, &VAR_4);

 if (FUNC_0(VAR_6->tzd)) {
  VAR_8 = FUNC_1(VAR_6->tzd);
  FUNC_4(&VAR_5->dev, "failed to register sensor: %d\n", VAR_8);
  goto disable_clk_all;
 }

 if (VAR_6->tzd->tzp->slope == 0) {
  FUNC_12(&VAR_5->dev, VAR_6->tzd);
  FUNC_4(&VAR_5->dev, "coefficients of sensor is invalid\n");
  VAR_8 = -VAR_0;
  goto disable_clk_all;
 }

 VAR_6->dev = &VAR_5->dev;
 FUNC_10(VAR_5, VAR_6);

 return 0;

disable_clk_all:
 FUNC_2(VAR_6->clk_apb);
disable_clk_topcrm:
 FUNC_2(VAR_6->clk_topcrm);
 return VAR_8;
}
