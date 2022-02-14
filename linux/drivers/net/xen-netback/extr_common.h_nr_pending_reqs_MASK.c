
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {scalar_t__ pending_cons; scalar_t__ pending_prod; } ;
typedef scalar_t__ pending_ring_idx_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline pending_ring_idx_t FUNC_0(struct xenvif_queue *VAR_1)
{
 return VAR_0 -
  VAR_1->pending_prod + VAR_1->pending_cons;
}
