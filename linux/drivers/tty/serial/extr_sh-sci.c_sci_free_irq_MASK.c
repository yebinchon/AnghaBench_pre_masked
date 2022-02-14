
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port {int* irqs; int * irqstr; } ;


 scalar_t__ FUNC_0 (struct sci_port*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct sci_port*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sci_port *VAR_1)
{
 int VAR_2, VAR_3;





 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_4 = VAR_1->irqs[VAR_2];





  if (FUNC_3(VAR_4 < 0))
   continue;


  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   if (VAR_1->irqs[VAR_3] == VAR_4)
    VAR_3 = VAR_2 + 1;
  if (VAR_3 > VAR_2)
   continue;

  FUNC_1(VAR_1->irqs[VAR_2], VAR_1);
  FUNC_2(VAR_1->irqstr[VAR_2]);

  if (FUNC_0(VAR_1)) {

   return;
  }
 }
}
