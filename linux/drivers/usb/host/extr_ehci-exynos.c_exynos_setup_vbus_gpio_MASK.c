
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (!VAR_1->of_node)
  return;

 VAR_3 = FUNC_3(VAR_1->of_node, "samsung,vbus-gpio", 0);
 if (!FUNC_2(VAR_3))
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_0,
        "ehci_vbus_gpio");
 if (VAR_2)
  FUNC_0(VAR_1, "can't request ehci vbus gpio %d", VAR_3);
}
