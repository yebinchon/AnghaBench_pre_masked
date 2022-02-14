
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbs_info {unsigned int last_state; int power_supply; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct sbs_info *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_0, &VAR_2);
 if (!VAR_3 && VAR_2 != VAR_1->last_state) {
  VAR_1->last_state = VAR_2;
  FUNC_0(VAR_1->power_supply);
  return 1;
 }

 return 0;
}
