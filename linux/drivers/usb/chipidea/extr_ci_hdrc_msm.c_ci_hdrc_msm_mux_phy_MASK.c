
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_phandle_args {int * args; int np; } ;
struct ci_hdrc_msm {int secondary_phy; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct regmap*,int ,int ) ;
 struct regmap* FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct ci_hdrc_msm *VAR_2,
          struct platform_device *VAR_3)
{
 struct regmap *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 struct of_phandle_args VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->of_node, "phy-select", 2, 0,
            &VAR_6);
 if (VAR_8)
  return 0;

 VAR_4 = FUNC_6(VAR_6.np);
 FUNC_2(VAR_6.np);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_8 = FUNC_5(VAR_4, VAR_6.args[0], VAR_6.args[1]);
 if (VAR_8)
  return VAR_8;

 VAR_2->secondary_phy = !!VAR_6.args[1];
 if (VAR_2->secondary_phy) {
  VAR_7 = FUNC_4(VAR_2->base + VAR_1);
  VAR_7 |= VAR_0;
  FUNC_7(VAR_7, VAR_2->base + VAR_1);
 }

 return 0;
}
