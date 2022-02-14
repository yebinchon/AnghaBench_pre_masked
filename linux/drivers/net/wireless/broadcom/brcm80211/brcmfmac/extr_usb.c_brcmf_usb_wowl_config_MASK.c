
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_usbdev_info {int wowl_enabled; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct brcmf_usbdev_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, bool VAR_2)
{
 struct brcmf_usbdev_info *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, "Configuring WOWL, enabled=%d\n", VAR_2);
 VAR_3->wowl_enabled = VAR_2;
 if (VAR_2)
  FUNC_2(VAR_3->dev, 1);
 else
  FUNC_2(VAR_3->dev, 0);
}
