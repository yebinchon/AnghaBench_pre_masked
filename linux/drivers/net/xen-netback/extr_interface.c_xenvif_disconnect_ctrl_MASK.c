
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sring; } ;
struct xenvif {TYPE_1__ ctrl; scalar_t__ ctrl_irq; } ;


 int FUNC_0 (scalar_t__,struct xenvif*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct xenvif*) ;
 int FUNC_3 (struct xenvif*) ;

void FUNC_4(struct xenvif *VAR_0)
{
 if (VAR_0->ctrl_irq) {
  FUNC_2(VAR_0);
  FUNC_0(VAR_0->ctrl_irq, VAR_0);
  VAR_0->ctrl_irq = 0;
 }

 if (VAR_0->ctrl.sring) {
  FUNC_1(FUNC_3(VAR_0),
     VAR_0->ctrl.sring);
  VAR_0->ctrl.sring = ((void*)0);
 }
}
