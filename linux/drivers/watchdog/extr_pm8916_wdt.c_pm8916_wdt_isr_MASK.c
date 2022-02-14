
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8916_wdt {int wdev; scalar_t__ baseaddr; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct pm8916_wdt *VAR_5 = VAR_4;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5->regmap, VAR_5->baseaddr + VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_0;

 if (VAR_7 & VAR_1)
  FUNC_1(&VAR_5->wdev);

 return VAR_0;
}
