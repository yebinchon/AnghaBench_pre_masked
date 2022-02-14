
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct brcmstb_waketmr {int reboot_notifier; } ;


 struct brcmstb_waketmr* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct brcmstb_waketmr *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->reboot_notifier);

 return 0;
}
