
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work; } ;
struct bnxt_cp_ring_info {TYPE_1__ dim; } ;
struct bnxt {int cp_nr_rings; TYPE_2__** bnapi; } ;
struct TYPE_4__ {int napi; scalar_t__ rx_ring; struct bnxt_cp_ring_info cp_ring; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bnapi)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  struct bnxt_cp_ring_info *VAR_2 = &VAR_0->bnapi[VAR_1]->cp_ring;

  if (VAR_0->bnapi[VAR_1]->rx_ring)
   FUNC_0(&VAR_2->dim.work);

  FUNC_1(&VAR_0->bnapi[VAR_1]->napi);
 }
}
