
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_mbx_nembed_cmd {TYPE_4__* sge; } ;
struct TYPE_5__ {int nembed_cmd; } ;
struct TYPE_6__ {TYPE_1__ un; } ;
struct TYPE_7__ {TYPE_2__ mqe; } ;
struct lpfcMboxq {TYPE_3__ u; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {size_t length; int pa_hi; int pa_lo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct lpfcMboxq *VAR_0, uint32_t VAR_1,
        dma_addr_t VAR_2, uint32_t VAR_3)
{
 struct lpfc_mbx_nembed_cmd *VAR_4;

 VAR_4 = (struct lpfc_mbx_nembed_cmd *)
    &VAR_0->u.mqe.un.nembed_cmd;
 VAR_4->sge[VAR_1].pa_lo = FUNC_1(VAR_2);
 VAR_4->sge[VAR_1].pa_hi = FUNC_0(VAR_2);
 VAR_4->sge[VAR_1].length = VAR_3;
}
