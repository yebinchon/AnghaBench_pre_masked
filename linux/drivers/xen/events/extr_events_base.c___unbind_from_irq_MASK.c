
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ refcnt; } ;




 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 size_t FUNC_3 (unsigned int) ;
 int VAR_0 ;
 struct irq_info* FUNC_4 (unsigned int) ;
 int* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 size_t FUNC_7 (unsigned int) ;
 int VAR_1 ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct irq_info*) ;

__attribute__((used)) static void FUNC_11(unsigned int VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);
 struct irq_info *VAR_4 = FUNC_4(VAR_2);

 if (VAR_4->refcnt > 0) {
  VAR_4->refcnt--;
  if (VAR_4->refcnt != 0)
   return;
 }

 if (FUNC_0(VAR_3)) {
  unsigned int VAR_5 = FUNC_1(VAR_2);

  FUNC_8(VAR_3);

  switch (FUNC_6(VAR_2)) {
  case 128:
   FUNC_5(VAR_1, VAR_5)[FUNC_7(VAR_2)] = -1;
   break;
  case 129:
   FUNC_5(VAR_0, VAR_5)[FUNC_3(VAR_2)] = -1;
   break;
  default:
   break;
  }

  FUNC_10(VAR_4);
 }

 FUNC_9(VAR_2);
}
