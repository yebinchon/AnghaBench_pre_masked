
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct qcom_phy {struct phy_provider* pipe_reset; struct phy_provider* phy_reset; struct phy_provider* pipe_clk; TYPE_1__* vregs; struct phy_provider* base; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct TYPE_3__ {char* supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct device*,char*) ;
 struct phy_provider* FUNC_5 (struct device*,int *) ;
 struct phy_provider* FUNC_6 (struct device*,struct resource*) ;
 struct qcom_phy* FUNC_7 (struct device*,int,int ) ;
 struct phy_provider* FUNC_8 (struct device*,int ) ;
 struct phy_provider* FUNC_9 (struct device*,int ,int *) ;
 int FUNC_10 (struct device*,int ,TYPE_1__*) ;
 void* FUNC_11 (struct device*,char*) ;
 int VAR_3 ;
 int FUNC_12 (struct qcom_phy*) ;
 int FUNC_13 (struct phy_provider*,struct qcom_phy*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct qcom_phy *VAR_7;
 struct resource *VAR_8;
 struct device *VAR_9 = &VAR_5->dev;
 struct phy *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(VAR_9, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_9;

 VAR_8 = FUNC_14(VAR_5, VAR_2, 0);
 VAR_7->base = FUNC_6(VAR_9, VAR_8);
 if (FUNC_1(VAR_7->base))
  return FUNC_2(VAR_7->base);

 VAR_11 = FUNC_12(VAR_7);
 if (VAR_11) {
  FUNC_4(VAR_9, "failed to register pipe_clk\n");
  return VAR_11;
 }

 VAR_7->vregs[0].supply = "vdda-vp";
 VAR_7->vregs[1].supply = "vdda-vph";
 VAR_11 = FUNC_10(VAR_9, FUNC_0(VAR_7->vregs), VAR_7->vregs);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7->pipe_clk = FUNC_5(VAR_9, ((void*)0));
 if (FUNC_1(VAR_7->pipe_clk)) {
  FUNC_4(VAR_9, "failed to acquire pipe clock\n");
  return FUNC_2(VAR_7->pipe_clk);
 }

 VAR_7->phy_reset = FUNC_11(VAR_9, "phy");
 if (FUNC_1(VAR_7->phy_reset)) {
  FUNC_4(VAR_9, "failed to acquire phy reset\n");
  return FUNC_2(VAR_7->phy_reset);
 }

 VAR_7->pipe_reset = FUNC_11(VAR_9, "pipe");
 if (FUNC_1(VAR_7->pipe_reset)) {
  FUNC_4(VAR_9, "failed to acquire pipe reset\n");
  return FUNC_2(VAR_7->pipe_reset);
 }

 VAR_10 = FUNC_9(VAR_9, VAR_9->of_node, &VAR_4);
 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_9, "failed to create phy\n");
  return FUNC_2(VAR_10);
 }

 FUNC_13(VAR_10, VAR_7);

 VAR_6 = FUNC_8(VAR_9, VAR_3);
 if (FUNC_1(VAR_6))
  FUNC_4(VAR_9, "failed to register phy provider\n");

 return FUNC_3(VAR_6);
}
