
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct act8945a_charger {int work; scalar_t__ init_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct act8945a_charger *VAR_3 = VAR_2;

 if (VAR_3->init_done)
  FUNC_0(&VAR_3->work);

 return VAR_0;
}
