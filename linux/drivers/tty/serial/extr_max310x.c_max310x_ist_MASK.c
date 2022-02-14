
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max310x_port {TYPE_1__* devtype; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int nr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct max310x_port*,scalar_t__) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct max310x_port *VAR_4 = (struct max310x_port *)VAR_3;
 bool VAR_5 = 0;

 if (VAR_4->devtype->nr > 1) {
  do {
   unsigned int VAR_6 = ~0;

   FUNC_1(FUNC_4(VAR_4->regmap,
       VAR_1, &VAR_6));
   VAR_6 = ((1 << VAR_4->devtype->nr) - 1) & ~VAR_6;
   if (!VAR_6)
    break;
   if (FUNC_3(VAR_4, FUNC_2(VAR_6) - 1) == VAR_0)
    VAR_5 = 1;
  } while (1);
 } else {
  if (FUNC_3(VAR_4, 0) == VAR_0)
   VAR_5 = 1;
 }

 return FUNC_0(VAR_5);
}
