
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnxt_ring_struct {void* fw_ring_id; } ;
struct TYPE_5__ {int coal_bufs; int coal_ticks; } ;
struct bnxt_cp_ring_info {TYPE_2__ rx_ring_coal; struct bnxt_ring_struct cp_ring_struct; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct TYPE_6__ {int coal_bufs; int coal_ticks; } ;
struct bnxt {int cp_nr_rings; TYPE_3__ rx_coal; TYPE_1__** bnapi; } ;
struct TYPE_4__ {struct bnxt_cp_ring_info cp_ring; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->cp_nr_rings; VAR_2++) {
  struct bnxt_cp_ring_info *VAR_4 = &VAR_1->bnapi[VAR_2]->cp_ring;
  struct bnxt_ring_struct *VAR_5 = &VAR_4->cp_ring_struct;

  VAR_5->fw_ring_id = VAR_0;
  VAR_4->rx_ring_coal.coal_ticks = VAR_1->rx_coal.coal_ticks;
  VAR_4->rx_ring_coal.coal_bufs = VAR_1->rx_coal.coal_bufs;
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   struct bnxt_cp_ring_info *VAR_6 = VAR_4->cp_ring_arr[VAR_3];

   if (!VAR_6)
    continue;

   VAR_5 = &VAR_6->cp_ring_struct;
   VAR_5->fw_ring_id = VAR_0;
   VAR_6->rx_ring_coal.coal_ticks = VAR_1->rx_coal.coal_ticks;
   VAR_6->rx_ring_coal.coal_bufs = VAR_1->rx_coal.coal_bufs;
  }
 }
}
