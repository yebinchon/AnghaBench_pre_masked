
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8903_pdata {int flt; } ;
struct max8903_data {int fault; int dev; struct max8903_pdata* pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct max8903_data *VAR_3 = VAR_2;
 struct max8903_pdata *VAR_4 = VAR_3->pdata;
 bool VAR_5;

 VAR_5 = FUNC_1(VAR_4->flt) ? 0 : 1;

 if (VAR_5 == VAR_3->fault)
  return VAR_0;

 VAR_3->fault = VAR_5;

 if (VAR_5)
  FUNC_0(VAR_3->dev, "Charger suffers a fault and stops.\n");
 else
  FUNC_0(VAR_3->dev, "Charger recovered from a fault.\n");

 return VAR_0;
}
