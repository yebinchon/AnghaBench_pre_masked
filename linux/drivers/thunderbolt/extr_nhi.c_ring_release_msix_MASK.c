
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {scalar_t__ irq; scalar_t__ vector; TYPE_1__* nhi; } ;
struct TYPE_2__ {int msix_ida; } ;


 int FUNC_0 (scalar_t__,struct tb_ring*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tb_ring *VAR_0)
{
 if (VAR_0->irq <= 0)
  return;

 FUNC_0(VAR_0->irq, VAR_0);
 FUNC_1(&VAR_0->nhi->msix_ida, VAR_0->vector);
 VAR_0->vector = 0;
 VAR_0->irq = 0;
}
