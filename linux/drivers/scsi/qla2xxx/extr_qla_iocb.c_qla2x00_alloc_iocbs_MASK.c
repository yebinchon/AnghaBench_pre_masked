
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* hw; } ;
typedef int srb_t ;
struct TYPE_2__ {int base_qpair; } ;


 void* FUNC_0 (int ,int *) ;

void *
FUNC_1(struct scsi_qla_host *VAR_0, srb_t *VAR_1)
{
 return FUNC_0(VAR_0->hw->base_qpair, VAR_1);
}
