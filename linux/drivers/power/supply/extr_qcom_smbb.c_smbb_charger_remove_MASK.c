
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {scalar_t__ addr; int regmap; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smbb_charger* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct smbb_charger *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->regmap, VAR_3->addr + VAR_1, VAR_0, 0);

 return 0;
}
