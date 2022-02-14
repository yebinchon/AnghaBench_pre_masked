
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int domain; } ;
struct gpio_chip {int parent; TYPE_1__ irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct gpio_chip *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_2);
 if (!(VAR_8 & VAR_0))
  return VAR_4;

 FUNC_0(FUNC_2(VAR_7->irq.domain,
         VAR_1));

 FUNC_3(VAR_7->parent);

 return VAR_3;
}
