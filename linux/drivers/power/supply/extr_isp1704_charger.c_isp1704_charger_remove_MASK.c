
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct isp1704_charger {int psy; int nb; int phy; } ;


 int FUNC_0 (struct isp1704_charger*,int ) ;
 struct isp1704_charger* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct isp1704_charger *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->phy, &VAR_1->nb);
 FUNC_2(VAR_1->psy);
 FUNC_0(VAR_1, 0);

 return 0;
}
