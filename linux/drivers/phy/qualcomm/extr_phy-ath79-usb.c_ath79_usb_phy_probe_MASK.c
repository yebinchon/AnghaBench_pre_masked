
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct phy {int dummy; } ;
struct ath79_usb_phy {struct phy* no_suspend_override; struct phy* reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct ath79_usb_phy* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ) ;
 struct phy* FUNC_5 (int *,int *,int *) ;
 struct phy* FUNC_6 (int *,char*) ;
 struct phy* FUNC_7 (int *,char*) ;
 int VAR_3 ;
 int FUNC_8 (struct phy*,struct ath79_usb_phy*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct ath79_usb_phy *VAR_5;
 struct phy *VAR_6;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->reset = FUNC_6(&VAR_4->dev, "phy");
 if (FUNC_0(VAR_5->reset))
  return FUNC_1(VAR_5->reset);

 VAR_5->no_suspend_override = FUNC_7(
  &VAR_4->dev, "usb-suspend-override");
 if (FUNC_0(VAR_5->no_suspend_override))
  return FUNC_1(VAR_5->no_suspend_override);

 VAR_6 = FUNC_5(&VAR_4->dev, ((void*)0), &VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_8(VAR_6, VAR_5);

 return FUNC_2(FUNC_4(
    &VAR_4->dev, VAR_3));
}
