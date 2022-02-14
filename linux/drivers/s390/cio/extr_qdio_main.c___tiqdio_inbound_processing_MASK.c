
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {unsigned int first_to_check; int irq_ptr; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 scalar_t__ FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qdio_q*,unsigned int) ;
 int FUNC_5 (struct qdio_q*,unsigned int) ;
 int FUNC_6 (struct qdio_q*,int) ;
 int FUNC_7 (struct qdio_q*) ;
 int FUNC_8 (struct qdio_q*) ;
 int FUNC_9 (struct qdio_q*) ;
 int FUNC_10 (struct qdio_q*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(struct qdio_q *VAR_3)
{
 unsigned int VAR_4 = VAR_3->first_to_check;
 int VAR_5;

 FUNC_10(VAR_3, VAR_0);
 if (FUNC_1(VAR_3) && FUNC_2(VAR_3))
  FUNC_8(VAR_3);


 FUNC_3(VAR_3->irq_ptr);

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5 == 0)
  return;

 VAR_4 = FUNC_0(VAR_4, VAR_5);
 VAR_3->first_to_check = VAR_4;
 FUNC_6(VAR_3, VAR_5);

 if (!FUNC_4(VAR_3, VAR_4)) {
  FUNC_10(VAR_3, VAR_1);
  if (!FUNC_9(VAR_3))
   return;
 }

 FUNC_7(VAR_3);




 if (!FUNC_4(VAR_3, VAR_4)) {
  FUNC_10(VAR_3, VAR_2);
  FUNC_9(VAR_3);
 }
}
