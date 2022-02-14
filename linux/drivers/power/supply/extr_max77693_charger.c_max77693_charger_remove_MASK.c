
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct max77693_charger {int charger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct max77693_charger* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct max77693_charger *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(&VAR_3->dev, &VAR_2);
 FUNC_0(&VAR_3->dev, &VAR_1);
 FUNC_0(&VAR_3->dev, &VAR_0);

 FUNC_2(VAR_4->charger);

 return 0;
}
