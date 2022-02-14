
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_3__* p_cxt_mngr; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_6__ {TYPE_2__* conn_cfg; } ;
struct TYPE_5__ {TYPE_1__* tid_seg; } ;
struct TYPE_4__ {scalar_t__ count; } ;


 int VAR_0 ;

u32 FUNC_0(struct qed_hwfn *VAR_1,
    enum protocol_type VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += VAR_1->p_cxt_mngr->conn_cfg[VAR_2].tid_seg[VAR_4].count;

 return VAR_3;
}
