
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct mipi_phy_device_desc {unsigned int num_regmaps; unsigned int num_phys; int * phys; int * regmap_names; } ;
struct exynos_mipi_video_phy {unsigned int num_phys; TYPE_1__* phys; int slock; struct phy** regmaps; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {unsigned int index; int * data; struct phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,struct exynos_mipi_video_phy*) ;
 struct exynos_mipi_video_phy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy* FUNC_7 (struct device*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mipi_phy_device_desc* FUNC_8 (struct device*) ;
 int FUNC_9 (struct phy*,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 struct phy* FUNC_11 (struct device_node*,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 const struct mipi_phy_device_desc *VAR_6;
 struct exynos_mipi_video_phy *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct phy_provider *VAR_10;
 unsigned int VAR_11;

 VAR_6 = FUNC_8(VAR_8);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_6->num_regmaps; VAR_11++) {
  VAR_7->regmaps[VAR_11] = FUNC_11(VAR_9,
      VAR_6->regmap_names[VAR_11]);
  if (FUNC_0(VAR_7->regmaps[VAR_11]))
   return FUNC_1(VAR_7->regmaps[VAR_11]);
 }
 VAR_7->num_phys = VAR_6->num_phys;
 FUNC_10(&VAR_7->slock);

 FUNC_4(VAR_8, VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_7->num_phys; VAR_11++) {
  struct phy *VAR_12 = FUNC_7(VAR_8, ((void*)0),
        &VAR_3);
  if (FUNC_0(VAR_12)) {
   FUNC_3(VAR_8, "failed to create PHY %d\n", VAR_11);
   return FUNC_1(VAR_12);
  }

  VAR_7->phys[VAR_11].phy = VAR_12;
  VAR_7->phys[VAR_11].index = VAR_11;
  VAR_7->phys[VAR_11].data = &VAR_6->phys[VAR_11];
  FUNC_9(VAR_12, &VAR_7->phys[VAR_11]);
 }

 VAR_10 = FUNC_6(VAR_8,
     VAR_4);

 return FUNC_2(VAR_10);
}
