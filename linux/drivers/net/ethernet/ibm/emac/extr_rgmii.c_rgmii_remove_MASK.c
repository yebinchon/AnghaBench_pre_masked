
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rgmii_instance {scalar_t__ users; int base; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rgmii_instance*) ;
 struct rgmii_instance* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct rgmii_instance *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->users != 0);

 FUNC_1(VAR_1->base);
 FUNC_2(VAR_1);

 return 0;
}
