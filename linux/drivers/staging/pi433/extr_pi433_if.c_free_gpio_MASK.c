
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_device {int * gpiod; int * irq_num; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct pi433_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pi433_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

  if (FUNC_0(VAR_1->gpiod[VAR_2]))
   continue;

  FUNC_1(VAR_1->irq_num[VAR_2], VAR_1);
  FUNC_2(VAR_1->gpiod[VAR_2]);
 }
}
