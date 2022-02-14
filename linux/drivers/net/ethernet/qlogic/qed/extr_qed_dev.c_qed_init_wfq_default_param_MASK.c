
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_vports; TYPE_1__* qm_vport_params; } ;
struct qed_hwfn {TYPE_2__ qm_info; } ;
struct TYPE_3__ {int vport_wfq; } ;



__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_0,
           u32 VAR_1)

{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->qm_info.num_vports; VAR_2++)
  VAR_0->qm_info.qm_vport_params[VAR_2].vport_wfq = 1;
}
