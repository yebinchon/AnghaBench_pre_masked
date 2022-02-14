
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_irq {int dsci; } ;


 int FUNC_0 (struct qdio_irq*) ;
 scalar_t__ FUNC_1 (struct qdio_irq*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct qdio_irq *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;
 if (FUNC_1(VAR_0))
  return;
 FUNC_2(VAR_0->dsci, 0);
}
