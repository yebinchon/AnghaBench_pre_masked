
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_dp_phy {struct device* dev; struct phy* grf; struct phy* phy_24m; } ;
struct device {TYPE_1__* parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy*,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct phy* FUNC_5 (struct device*,char*) ;
 struct rockchip_dp_phy* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 struct phy* FUNC_8 (struct device*,struct device_node*,int *) ;
 int VAR_6 ;
 int FUNC_9 (struct phy*,struct rockchip_dp_phy*) ;
 int FUNC_10 (struct phy*,int ,int) ;
 int VAR_7 ;
 struct phy* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct phy_provider *VAR_11;
 struct rockchip_dp_phy *VAR_12;
 struct phy *VAR_13;
 int VAR_14;

 if (!VAR_10)
  return -VAR_0;

 if (!VAR_9->parent || !VAR_9->parent->of_node)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_9, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_9;

 VAR_12->phy_24m = FUNC_5(VAR_9, "24m");
 if (FUNC_0(VAR_12->phy_24m)) {
  FUNC_4(VAR_9, "cannot get clock 24m\n");
  return FUNC_1(VAR_12->phy_24m);
 }

 VAR_14 = FUNC_3(VAR_12->phy_24m, 24000000);
 if (VAR_14 < 0) {
  FUNC_4(VAR_12->dev, "cannot set clock phy_24m %d\n", VAR_14);
  return VAR_14;
 }

 VAR_12->grf = FUNC_11(VAR_9->parent->of_node);
 if (FUNC_0(VAR_12->grf)) {
  FUNC_4(VAR_9, "rk3288-dp needs the General Register Files syscon\n");
  return FUNC_1(VAR_12->grf);
 }

 VAR_14 = FUNC_10(VAR_12->grf, VAR_5, VAR_3 |
      VAR_4);
 if (VAR_14 != 0) {
  FUNC_4(VAR_12->dev, "Could not config GRF edp ref clk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13 = FUNC_8(VAR_9, VAR_10, &VAR_7);
 if (FUNC_0(VAR_13)) {
  FUNC_4(VAR_9, "failed to create phy\n");
  return FUNC_1(VAR_13);
 }
 FUNC_9(VAR_13, VAR_12);

 VAR_11 = FUNC_7(VAR_9, VAR_6);

 return FUNC_2(VAR_11);
}
