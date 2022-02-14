
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct bcm_kona_usb {struct phy* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 struct phy* FUNC_3 (struct device*,struct resource*) ;
 struct bcm_kona_usb* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy* FUNC_6 (struct device*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct phy*,int) ;
 int FUNC_8 (struct phy*,struct bcm_kona_usb*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct bcm_kona_usb*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct bcm_kona_usb *VAR_7;
 struct resource *VAR_8;
 struct phy *VAR_9;
 struct phy_provider *VAR_10;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_9(VAR_5, VAR_2, 0);
 VAR_7->regs = FUNC_3(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->regs))
  return FUNC_1(VAR_7->regs);

 FUNC_10(VAR_5, VAR_7);

 VAR_9 = FUNC_6(VAR_6, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);


 FUNC_7(VAR_9, 8);

 FUNC_8(VAR_9, VAR_7);

 VAR_10 = FUNC_5(VAR_6,
   VAR_3);

 return FUNC_2(VAR_10);
}
