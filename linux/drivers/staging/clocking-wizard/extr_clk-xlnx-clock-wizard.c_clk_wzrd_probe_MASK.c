
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int notifier_call; } ;
struct TYPE_10__ {scalar_t__* clks; int clk_num; } ;
struct clk_wzrd {scalar_t__ base; int speed_grade; scalar_t__ clk_in1; scalar_t__ axi_clk; scalar_t__* clks_internal; scalar_t__* clkout; TYPE_9__ nb; TYPE_1__ clk_data; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char const* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 unsigned long FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,TYPE_9__*) ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (TYPE_2__*,char const*,char const*,int ,int,int) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_12 (TYPE_2__*,char*,...) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,char*,...) ;
 void* FUNC_15 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_16 (TYPE_2__*,struct resource*) ;
 struct clk_wzrd* FUNC_17 (TYPE_2__*,int,int ) ;
 char* FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_16 ;
 scalar_t__ FUNC_21 (struct device_node*,char*,int,char const**) ;
 int FUNC_22 (struct device_node*,char*,int*) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct clk_wzrd*) ;
 int FUNC_25 (scalar_t__) ;
 size_t VAR_17 ;
 size_t VAR_18 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_19)
{
 int VAR_20, VAR_21;
 u32 VAR_22;
 unsigned long VAR_23;
 const char *VAR_24;
 struct clk_wzrd *VAR_25;
 struct resource *VAR_26;
 struct device_node *VAR_27 = VAR_19->dev.of_node;

 VAR_25 = FUNC_17(&VAR_19->dev, sizeof(*VAR_25), VAR_3);
 if (!VAR_25)
  return -VAR_1;
 FUNC_24(VAR_19, VAR_25);

 VAR_26 = FUNC_23(VAR_19, VAR_4, 0);
 VAR_25->base = FUNC_16(&VAR_19->dev, VAR_26);
 if (FUNC_2(VAR_25->base))
  return FUNC_3(VAR_25->base);

 VAR_21 = FUNC_22(VAR_27, "speed-grade", &VAR_25->speed_grade);
 if (!VAR_21) {
  if (VAR_25->speed_grade < 1 || VAR_25->speed_grade > 3) {
   FUNC_14(&VAR_19->dev, "invalid speed grade '%d'\n",
     VAR_25->speed_grade);
   VAR_25->speed_grade = 0;
  }
 }

 VAR_25->clk_in1 = FUNC_15(&VAR_19->dev, "clk_in1");
 if (FUNC_2(VAR_25->clk_in1)) {
  if (VAR_25->clk_in1 != FUNC_1(-VAR_2))
   FUNC_12(&VAR_19->dev, "clk_in1 not found\n");
  return FUNC_3(VAR_25->clk_in1);
 }

 VAR_25->axi_clk = FUNC_15(&VAR_19->dev, "s_axi_aclk");
 if (FUNC_2(VAR_25->axi_clk)) {
  if (VAR_25->axi_clk != FUNC_1(-VAR_2))
   FUNC_12(&VAR_19->dev, "s_axi_aclk not found\n");
  return FUNC_3(VAR_25->axi_clk);
 }
 VAR_21 = FUNC_9(VAR_25->axi_clk);
 if (VAR_21) {
  FUNC_12(&VAR_19->dev, "enabling s_axi_aclk failed\n");
  return VAR_21;
 }
 VAR_23 = FUNC_7(VAR_25->axi_clk);
 if (VAR_23 > VAR_5) {
  FUNC_12(&VAR_19->dev, "s_axi_aclk frequency (%lu) too high\n",
   VAR_23);
  VAR_21 = -VAR_0;
  goto err_disable_clk;
 }


 VAR_22 = FUNC_25(VAR_25->base + FUNC_4(0)) &
      VAR_6;
 VAR_22 |= FUNC_25(VAR_25->base + FUNC_4(2)) &
       VAR_9;
 if (VAR_22)
  FUNC_14(&VAR_19->dev, "fractional div/mul not supported\n");


 VAR_22 = (FUNC_25(VAR_25->base + FUNC_4(0)) &
       VAR_7) >> VAR_8;
 VAR_24 = FUNC_18(VAR_3, "%s_mul", FUNC_13(&VAR_19->dev));
 if (!VAR_24) {
  VAR_21 = -VAR_1;
  goto err_disable_clk;
 }
 VAR_25->clks_internal[VAR_17] = FUNC_10
   (&VAR_19->dev, VAR_24,
    FUNC_5(VAR_25->clk_in1),
    0, VAR_22, 1);
 FUNC_19(VAR_24);
 if (FUNC_2(VAR_25->clks_internal[VAR_17])) {
  FUNC_12(&VAR_19->dev, "unable to register fixed-factor clock\n");
  VAR_21 = FUNC_3(VAR_25->clks_internal[VAR_17]);
  goto err_disable_clk;
 }


 VAR_22 = (FUNC_25(VAR_25->base + FUNC_4(0)) &
   VAR_12) >> VAR_13;
 VAR_24 = FUNC_18(VAR_3, "%s_mul_div", FUNC_13(&VAR_19->dev));
 if (!VAR_24) {
  VAR_21 = -VAR_1;
  goto err_rm_int_clk;
 }

 VAR_25->clks_internal[VAR_18] = FUNC_10
   (&VAR_19->dev, VAR_24,
    FUNC_5(VAR_25->clks_internal[VAR_17]),
    0, 1, VAR_22);
 if (FUNC_2(VAR_25->clks_internal[VAR_18])) {
  FUNC_12(&VAR_19->dev, "unable to register divider clock\n");
  VAR_21 = FUNC_3(VAR_25->clks_internal[VAR_18]);
  goto err_rm_int_clk;
 }


 for (VAR_20 = VAR_14 - 1; VAR_20 >= 0 ; VAR_20--) {
  const char *VAR_28;

  if (FUNC_21(VAR_27, "clock-output-names", VAR_20,
        &VAR_28)) {
   FUNC_12(&VAR_19->dev,
    "clock output name not specified\n");
   VAR_21 = -VAR_0;
   goto err_rm_int_clks;
  }
  VAR_22 = FUNC_25(VAR_25->base + FUNC_4(2) + VAR_20 * 12);
  VAR_22 &= VAR_10;
  VAR_22 >>= VAR_11;
  VAR_25->clkout[VAR_20] = FUNC_10
   (&VAR_19->dev, VAR_28, VAR_24, 0, 1, VAR_22);
  if (FUNC_2(VAR_25->clkout[VAR_20])) {
   int VAR_29;

   for (VAR_29 = VAR_20 + 1; VAR_29 < VAR_14; VAR_29++)
    FUNC_11(VAR_25->clkout[VAR_29]);
   FUNC_12(&VAR_19->dev,
    "unable to register divider clock\n");
   VAR_21 = FUNC_3(VAR_25->clkout[VAR_20]);
   goto err_rm_int_clks;
  }
 }

 FUNC_19(VAR_24);

 VAR_25->clk_data.clks = VAR_25->clkout;
 VAR_25->clk_data.clk_num = FUNC_0(VAR_25->clkout);
 FUNC_20(VAR_27, VAR_16, &VAR_25->clk_data);

 if (VAR_25->speed_grade) {
  VAR_25->nb.notifier_call = VAR_15;

  VAR_21 = FUNC_8(VAR_25->clk_in1,
         &VAR_25->nb);
  if (VAR_21)
   FUNC_14(&VAR_19->dev,
     "unable to register clock notifier\n");

  VAR_21 = FUNC_8(VAR_25->axi_clk, &VAR_25->nb);
  if (VAR_21)
   FUNC_14(&VAR_19->dev,
     "unable to register clock notifier\n");
 }

 return 0;

err_rm_int_clks:
 FUNC_11(VAR_25->clks_internal[1]);
err_rm_int_clk:
 FUNC_19(VAR_24);
 FUNC_11(VAR_25->clks_internal[0]);
err_disable_clk:
 FUNC_6(VAR_25->axi_clk);

 return VAR_21;
}
