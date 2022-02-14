
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct da9052_battery {int psy; int status; TYPE_1__* da9052; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct da9052_battery*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct da9052_battery *VAR_8 = VAR_7;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8->da9052->irq_data, VAR_6);
 VAR_6 -= VAR_9;

 if (VAR_6 == VAR_0)
  VAR_8->status = VAR_5;
 else
  FUNC_0(VAR_8, ((void*)0));

 if (VAR_6 == VAR_0 || VAR_6 == VAR_1 ||
     VAR_6 == VAR_3 || VAR_6 == VAR_2) {
  FUNC_1(VAR_8->psy);
 }

 return VAR_4;
}
