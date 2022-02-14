
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_gpadc {int ab8500_gpadc_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ab8500_gpadc *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->ab8500_gpadc_complete);

 return VAR_0;
}
