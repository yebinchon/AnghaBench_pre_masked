
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int wq; int card_boot; int ind_ab; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct anybuss_host *VAR_4 = VAR_3;
 int VAR_5;
 VAR_5 = FUNC_2(VAR_4->regmap);
 if (VAR_5 < 0)
  return VAR_1;
 FUNC_0(&VAR_4->ind_ab, VAR_5);
 FUNC_1(&VAR_4->card_boot);
 FUNC_3(&VAR_4->wq);
 return VAR_0;
}
