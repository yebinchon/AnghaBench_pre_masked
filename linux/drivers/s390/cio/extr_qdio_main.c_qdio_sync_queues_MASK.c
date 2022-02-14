
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int irq_ptr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*) ;

__attribute__((used)) static inline void FUNC_3(struct qdio_q *VAR_0)
{

 if (FUNC_0(VAR_0->irq_ptr))
  FUNC_1(VAR_0);
 else
  FUNC_2(VAR_0);
}
