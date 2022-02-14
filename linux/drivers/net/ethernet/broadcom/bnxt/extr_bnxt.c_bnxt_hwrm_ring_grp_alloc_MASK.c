
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct hwrm_ring_grp_alloc_output {int ring_group_id; } ;
struct hwrm_ring_grp_alloc_input {void* sc; void* ar; void* rr; void* cr; int member_0; } ;
struct bnxt {int flags; size_t rx_nr_rings; int hwrm_cmd_lock; TYPE_3__* grp_info; TYPE_2__* rx_ring; struct hwrm_ring_grp_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_6__ {int fw_grp_id; int fw_stats_ctx; int agg_fw_ring_id; int rx_fw_ring_id; int cp_fw_ring_id; } ;
struct TYPE_5__ {TYPE_1__* bnapi; } ;
struct TYPE_4__ {unsigned int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_ring_grp_alloc_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_grp_alloc_input*,int ,int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_3)
{
 u16 VAR_4;
 u32 VAR_5 = 0;

 if (VAR_3->flags & VAR_0)
  return 0;

 FUNC_4(&VAR_3->hwrm_cmd_lock);
 for (VAR_4 = 0; VAR_4 < VAR_3->rx_nr_rings; VAR_4++) {
  struct hwrm_ring_grp_alloc_input VAR_6 = {0};
  struct hwrm_ring_grp_alloc_output *VAR_7 =
     VAR_3->hwrm_cmd_resp_addr;
  unsigned int VAR_8 = VAR_3->rx_ring[VAR_4].bnapi->index;

  FUNC_1(VAR_3, &VAR_6, VAR_2, -1, -1);

  VAR_6.cr = FUNC_2(VAR_3->grp_info[VAR_8].cp_fw_ring_id);
  VAR_6.rr = FUNC_2(VAR_3->grp_info[VAR_8].rx_fw_ring_id);
  VAR_6.ar = FUNC_2(VAR_3->grp_info[VAR_8].agg_fw_ring_id);
  VAR_6.sc = FUNC_2(VAR_3->grp_info[VAR_8].fw_stats_ctx);

  VAR_5 = FUNC_0(VAR_3, &VAR_6, sizeof(VAR_6),
     VAR_1);
  if (VAR_5)
   break;

  VAR_3->grp_info[VAR_8].fw_grp_id =
   FUNC_3(VAR_7->ring_group_id);
 }
 FUNC_5(&VAR_3->hwrm_cmd_lock);
 return VAR_5;
}
