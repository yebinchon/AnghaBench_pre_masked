
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_irq {scalar_t__* dsci; } ;


 int FUNC_0 (struct qdio_irq*) ;
 scalar_t__ FUNC_1 (struct qdio_irq*) ;

int FUNC_2(struct qdio_irq *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;
 if (FUNC_1(VAR_0))
  return 0;
 if (*VAR_0->dsci)
  return 1;
 else
  return 0;
}
