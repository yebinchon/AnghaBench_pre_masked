
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qed_hwfn {TYPE_3__* p_rdma_info; } ;
struct TYPE_8__ {int max_fin_rt; } ;
struct TYPE_5__ {scalar_t__ ll2_ooo_q_index; } ;
struct iwarp_init_func_ramrod_data {TYPE_4__ tcp; TYPE_1__ iwarp; } ;
struct TYPE_6__ {scalar_t__ ll2_ooo_handle; } ;
struct TYPE_7__ {TYPE_2__ iwarp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,int ) ;

void
FUNC_1(struct qed_hwfn *VAR_2,
    struct iwarp_init_func_ramrod_data *VAR_3)
{
 VAR_3->iwarp.ll2_ooo_q_index =
  FUNC_0(VAR_2, VAR_1) +
  VAR_2->p_rdma_info->iwarp.ll2_ooo_handle;

 VAR_3->tcp.max_fin_rt = VAR_0;

 return;
}
