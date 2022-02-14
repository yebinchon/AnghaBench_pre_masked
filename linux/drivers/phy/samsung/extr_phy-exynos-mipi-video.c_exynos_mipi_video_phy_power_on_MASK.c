
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_phy_desc {int data; } ;
struct phy {int dummy; } ;
struct exynos_mipi_video_phy {int dummy; } ;


 int FUNC_0 (int ,struct exynos_mipi_video_phy*,int) ;
 struct video_phy_desc* FUNC_1 (struct phy*) ;
 struct exynos_mipi_video_phy* FUNC_2 (struct video_phy_desc*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct video_phy_desc *VAR_1 = FUNC_1(VAR_0);
 struct exynos_mipi_video_phy *VAR_2 = FUNC_2(VAR_1);

 return FUNC_0(VAR_1->data, VAR_2, 1);
}
