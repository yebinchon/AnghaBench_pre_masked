
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_phy {struct device* dev; struct phy* mmio; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 struct phy* FUNC_3 (struct device*,struct resource*) ;
 struct ufs_mtk_phy* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy* FUNC_6 (struct device*,int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (struct phy*,struct ufs_mtk_phy*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct ufs_mtk_phy*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct phy *VAR_7;
 struct phy_provider *VAR_8;
 struct resource *VAR_9;
 struct ufs_mtk_phy *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_6, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_10->mmio = FUNC_3(VAR_6, VAR_9);
 if (FUNC_0(VAR_10->mmio))
  return FUNC_1(VAR_10->mmio);

 VAR_10->dev = VAR_6;

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_6(VAR_6, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_7(VAR_7, VAR_10);

 VAR_8 = FUNC_5(VAR_6, VAR_3);

 return FUNC_2(VAR_8);
}
