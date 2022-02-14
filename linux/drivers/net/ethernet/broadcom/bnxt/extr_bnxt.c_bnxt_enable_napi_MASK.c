
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int work; } ;
struct bnxt_cp_ring_info {TYPE_1__ dim; } ;
struct bnxt {int cp_nr_rings; TYPE_2__** bnapi; } ;
struct TYPE_4__ {int in_reset; int napi; scalar_t__ rx_ring; struct bnxt_cp_ring_info cp_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->cp_nr_rings; VAR_3++) {
  struct bnxt_cp_ring_info *VAR_4 = &VAR_2->bnapi[VAR_3]->cp_ring;
  VAR_2->bnapi[VAR_3]->in_reset = 0;

  if (VAR_2->bnapi[VAR_3]->rx_ring) {
   FUNC_0(&VAR_4->dim.work, VAR_1);
   VAR_4->dim.mode = VAR_0;
  }
  FUNC_1(&VAR_2->bnapi[VAR_3]->napi);
 }
}
