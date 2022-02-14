
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_ring_grp_info {int dummy; } ;
struct bnxt {int cp_nr_rings; TYPE_1__* grp_info; } ;
struct TYPE_2__ {void* cp_fw_ring_id; void* agg_fw_ring_id; void* rx_fw_ring_id; void* fw_grp_id; void* fw_stats_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  VAR_3->grp_info = FUNC_0(VAR_3->cp_nr_rings,
           sizeof(struct bnxt_ring_grp_info),
           VAR_1);
  if (!VAR_3->grp_info)
   return -VAR_0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->cp_nr_rings; VAR_5++) {
  if (VAR_4)
   VAR_3->grp_info[VAR_5].fw_stats_ctx = VAR_2;
  VAR_3->grp_info[VAR_5].fw_grp_id = VAR_2;
  VAR_3->grp_info[VAR_5].rx_fw_ring_id = VAR_2;
  VAR_3->grp_info[VAR_5].agg_fw_ring_id = VAR_2;
  VAR_3->grp_info[VAR_5].cp_fw_ring_id = VAR_2;
 }
 return 0;
}
