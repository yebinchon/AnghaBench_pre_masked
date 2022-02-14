
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_tmu {int regmap; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct wcove_tmu* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4)
{
 struct wcove_tmu *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;


 FUNC_1(VAR_5->regmap, VAR_0, &VAR_6);
 FUNC_2(VAR_5->regmap, VAR_0,
   VAR_6 | VAR_1);
 FUNC_1(VAR_5->regmap, VAR_2, &VAR_6);
 FUNC_2(VAR_5->regmap, VAR_2,
   VAR_6 | VAR_3);
 return 0;
}
