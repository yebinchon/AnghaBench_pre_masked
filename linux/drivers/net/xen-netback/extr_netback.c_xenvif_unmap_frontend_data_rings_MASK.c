
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sring; } ;
struct TYPE_3__ {scalar_t__ sring; } ;
struct xenvif_queue {TYPE_2__ rx; int vif; TYPE_1__ tx; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct xenvif_queue *VAR_0)
{
 if (VAR_0->tx.sring)
  FUNC_0(FUNC_1(VAR_0->vif),
     VAR_0->tx.sring);
 if (VAR_0->rx.sring)
  FUNC_0(FUNC_1(VAR_0->vif),
     VAR_0->rx.sring);
}
