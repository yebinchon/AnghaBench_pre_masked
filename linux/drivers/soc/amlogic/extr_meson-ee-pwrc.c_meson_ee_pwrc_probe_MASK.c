
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct meson_ee_pwrc_domain_data {int count; int * domains; } ;
struct meson_ee_pwrc_domain {int base; int desc; } ;
struct TYPE_6__ {int num_domains; int ** domains; } ;
struct meson_ee_pwrc {TYPE_1__ xlate; struct meson_ee_pwrc_domain* domains; struct regmap* regmap_hhi; struct regmap* regmap_ao; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 void* FUNC_3 (TYPE_2__*,int,int,int ) ;
 struct meson_ee_pwrc* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct platform_device*,struct meson_ee_pwrc*,struct meson_ee_pwrc_domain*) ;
 struct meson_ee_pwrc_domain_data* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct meson_ee_pwrc*) ;
 struct regmap* FUNC_11 (int ) ;
 struct regmap* FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 const struct meson_ee_pwrc_domain_data *VAR_4;
 struct regmap *VAR_5, *VAR_6;
 struct meson_ee_pwrc *VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = FUNC_7(&VAR_3->dev);
 if (!VAR_4) {
  FUNC_2(&VAR_3->dev, "failed to get match data\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(&VAR_3->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->xlate.domains = FUNC_3(&VAR_3->dev, VAR_4->count,
        sizeof(*VAR_7->xlate.domains),
        VAR_2);
 if (!VAR_7->xlate.domains)
  return -VAR_1;

 VAR_7->domains = FUNC_3(&VAR_3->dev, VAR_4->count,
         sizeof(*VAR_7->domains), VAR_2);
 if (!VAR_7->domains)
  return -VAR_1;

 VAR_7->xlate.num_domains = VAR_4->count;

 VAR_6 = FUNC_11(FUNC_9(VAR_3->dev.of_node));
 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_3->dev, "failed to get HHI regmap\n");
  return FUNC_1(VAR_6);
 }

 VAR_5 = FUNC_12(VAR_3->dev.of_node,
          "amlogic,ao-sysctrl");
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_3->dev, "failed to get AO regmap\n");
  return FUNC_1(VAR_5);
 }

 VAR_7->regmap_ao = VAR_5;
 VAR_7->regmap_hhi = VAR_6;

 FUNC_10(VAR_3, VAR_7);

 for (VAR_8 = 0 ; VAR_8 < VAR_4->count ; ++VAR_8) {
  struct meson_ee_pwrc_domain *VAR_10 = &VAR_7->domains[VAR_8];

  FUNC_5(&VAR_10->desc, &VAR_4->domains[VAR_8], sizeof(VAR_10->desc));

  VAR_9 = FUNC_6(VAR_3, VAR_7, VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_7->xlate.domains[VAR_8] = &VAR_10->base;
 }

 FUNC_8(VAR_3->dev.of_node, &VAR_7->xlate);

 return 0;
}
