
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct max14577_charger {int charger; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct max14577_charger* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct max14577_charger *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_2(VAR_2->charger);

 return 0;
}
