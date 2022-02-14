
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fwnode; } ;
struct wcove_typec {TYPE_1__ tcpc; int tcpm; int regmap; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 struct wcove_typec* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct wcove_typec *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;


 FUNC_2(VAR_5->regmap, VAR_0, &VAR_6);
 FUNC_3(VAR_5->regmap, VAR_0, VAR_6 | VAR_1);
 FUNC_2(VAR_5->regmap, VAR_2, &VAR_6);
 FUNC_3(VAR_5->regmap, VAR_2, VAR_6 | VAR_3);

 FUNC_4(VAR_5->tcpm);
 FUNC_0(VAR_5->tcpc.fwnode);

 return 0;
}
