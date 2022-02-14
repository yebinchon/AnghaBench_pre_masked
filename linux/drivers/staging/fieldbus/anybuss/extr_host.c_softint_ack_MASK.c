
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int softint_pending; int regmap; int ind_ab; int power_on; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct anybuss_host *VAR_2)
{
 unsigned int VAR_3;

 VAR_2->softint_pending = 0;
 if (!VAR_2->power_on)
  return;
 FUNC_1(VAR_2->regmap, VAR_1, &VAR_3);
 VAR_3 &= ~VAR_0;
 VAR_3 |= FUNC_0(&VAR_2->ind_ab) & VAR_0;
 FUNC_2(VAR_2->regmap, VAR_3);
}
