
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9062_watchdog {struct da9062* hw; } ;
struct da9062 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct da9062_watchdog*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct da9062_watchdog *VAR_3,
           unsigned int VAR_4)
{
 struct da9062 *VAR_5 = VAR_3->hw;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5->regmap,
      VAR_0,
      VAR_1,
      VAR_2);

 FUNC_2(150, 300);

 return FUNC_1(VAR_5->regmap,
      VAR_0,
      VAR_1,
      VAR_4);
}
