
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct reset_control {int dummy; } ;
typedef struct reset_control regmap ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct meson_gx_pwrc_vpu {int genpd; struct reset_control* vapb_clk; struct reset_control* vpu_clk; struct reset_control* rstc; struct reset_control* regmap_hhi; struct reset_control* regmap_ao; } ;
typedef struct reset_control clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct reset_control* FUNC_3 (TYPE_1__*,char*) ;
 struct meson_gx_pwrc_vpu* FUNC_4 (TYPE_1__*,int,int ) ;
 struct reset_control* FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (struct meson_gx_pwrc_vpu*,struct meson_gx_pwrc_vpu const*,int) ;
 int FUNC_7 (struct meson_gx_pwrc_vpu*) ;
 int FUNC_8 (struct meson_gx_pwrc_vpu*) ;
 struct meson_gx_pwrc_vpu* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct platform_device*,struct meson_gx_pwrc_vpu*) ;
 int VAR_4 ;
 int FUNC_13 (int *,int *,int) ;
 struct reset_control* FUNC_14 (int ) ;
 struct reset_control* FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 const struct meson_gx_pwrc_vpu *VAR_6;
 struct regmap *VAR_7, *VAR_8;
 struct meson_gx_pwrc_vpu *VAR_9;
 struct reset_control *VAR_10;
 struct clk *VAR_11;
 struct clk *VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_6 = FUNC_9(&VAR_5->dev);
 if (!VAR_6) {
  FUNC_2(&VAR_5->dev, "failed to get match data\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(&VAR_5->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 FUNC_6(VAR_9, VAR_6, sizeof(*VAR_9));

 VAR_7 = FUNC_14(FUNC_11(VAR_5->dev.of_node));
 if (FUNC_0(VAR_7)) {
  FUNC_2(&VAR_5->dev, "failed to get regmap\n");
  return FUNC_1(VAR_7);
 }

 VAR_8 = FUNC_15(VAR_5->dev.of_node,
           "amlogic,hhi-sysctrl");
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_5->dev, "failed to get HHI regmap\n");
  return FUNC_1(VAR_8);
 }

 VAR_10 = FUNC_5(&VAR_5->dev, 0, 0);
 if (FUNC_0(VAR_10)) {
  if (FUNC_1(VAR_10) != -VAR_2)
   FUNC_2(&VAR_5->dev, "failed to get reset lines\n");
  return FUNC_1(VAR_10);
 }

 VAR_11 = FUNC_3(&VAR_5->dev, "vpu");
 if (FUNC_0(VAR_11)) {
  FUNC_2(&VAR_5->dev, "vpu clock request failed\n");
  return FUNC_1(VAR_11);
 }

 VAR_12 = FUNC_3(&VAR_5->dev, "vapb");
 if (FUNC_0(VAR_12)) {
  FUNC_2(&VAR_5->dev, "vapb clock request failed\n");
  return FUNC_1(VAR_12);
 }

 VAR_9->regmap_ao = VAR_7;
 VAR_9->regmap_hhi = VAR_8;
 VAR_9->rstc = VAR_10;
 VAR_9->vpu_clk = VAR_11;
 VAR_9->vapb_clk = VAR_12;

 FUNC_12(VAR_5, VAR_9);

 VAR_13 = FUNC_7(VAR_9);


 if (!VAR_13) {
  VAR_14 = FUNC_8(VAR_9);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_13(&VAR_9->genpd, &VAR_4,
        VAR_13);

 return FUNC_10(VAR_5->dev.of_node,
         &VAR_9->genpd);
}
