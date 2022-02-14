
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {TYPE_1__* vif; } ;
struct TYPE_2__ {scalar_t__ disabled; scalar_t__ stall_timeout; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct xenvif_queue*) ;
 scalar_t__ FUNC_2 (struct xenvif_queue*) ;
 scalar_t__ FUNC_3 (struct xenvif_queue*) ;

__attribute__((used)) static bool FUNC_4(struct xenvif_queue *VAR_0)
{
 return FUNC_3(VAR_0) ||
  (VAR_0->vif->stall_timeout &&
   (FUNC_2(VAR_0) ||
    FUNC_1(VAR_0))) ||
  FUNC_0() ||
  VAR_0->vif->disabled;
}
