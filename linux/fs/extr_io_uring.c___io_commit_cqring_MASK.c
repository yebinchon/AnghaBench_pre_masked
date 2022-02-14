
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; } ;
struct io_rings {TYPE_1__ cq; } ;
struct io_ring_ctx {scalar_t__ cached_cq_tail; int cq_fasync; int cq_wait; struct io_rings* rings; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct io_ring_ctx *VAR_2)
{
 struct io_rings *VAR_3 = VAR_2->rings;

 if (VAR_2->cached_cq_tail != FUNC_0(VAR_3->cq.tail)) {

  FUNC_2(&VAR_3->cq.tail, VAR_2->cached_cq_tail);

  if (FUNC_4(&VAR_2->cq_wait)) {
   FUNC_3(&VAR_2->cq_wait);
   FUNC_1(&VAR_2->cq_fasync, VAR_1, VAR_0);
  }
 }
}
