
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct host_sp_status_block {int dummy; } ;
struct bnx2x_slowpath {int dummy; } ;
struct bnx2x {int fw_stats_data_sz; int fw_stats_req_sz; int t2_mapping; int t2; int eq_mapping; int eq_ring; int spq_mapping; int spq; TYPE_2__* ilt; TYPE_1__* context; int slowpath_mapping; int slowpath; int def_status_blk_mapping; int def_status_blk; int fw_stats_mapping; int fw_stats; } ;
struct TYPE_4__ {int lines; } ;
struct TYPE_3__ {int size; int cxt_mapping; int vcxt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*) ;

void FUNC_6(struct bnx2x *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4->fw_stats, VAR_4->fw_stats_mapping,
         VAR_4->fw_stats_data_sz + VAR_4->fw_stats_req_sz);

 if (FUNC_2(VAR_4))
  return;

 FUNC_1(VAR_4->def_status_blk, VAR_4->def_status_blk_mapping,
         sizeof(struct host_sp_status_block));

 FUNC_1(VAR_4->slowpath, VAR_4->slowpath_mapping,
         sizeof(struct bnx2x_slowpath));

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_4); VAR_5++)
  FUNC_1(VAR_4->context[VAR_5].vcxt, VAR_4->context[VAR_5].cxt_mapping,
          VAR_4->context[VAR_5].size);
 FUNC_4(VAR_4, VAR_1);

 FUNC_0(VAR_4->ilt->lines);

 FUNC_1(VAR_4->spq, VAR_4->spq_mapping, VAR_0);

 FUNC_1(VAR_4->eq_ring, VAR_4->eq_mapping,
         VAR_0 * VAR_2);

 FUNC_1(VAR_4->t2, VAR_4->t2_mapping, VAR_3);

 FUNC_5(VAR_4);
}
