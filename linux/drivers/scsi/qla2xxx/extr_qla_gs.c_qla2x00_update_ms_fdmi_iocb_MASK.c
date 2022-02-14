
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {TYPE_4__* ms_iocb; } ;
struct ct_entry_24xx {void* cmd_byte_count; TYPE_1__* dsd; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_7__ {void* length; } ;
struct TYPE_9__ {void* req_bytecount; TYPE_2__ req_dsd; } ;
typedef TYPE_4__ ms_iocb_entry_t ;
struct TYPE_6__ {void* length; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0, uint32_t VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 ms_iocb_entry_t *VAR_3 = VAR_2->ms_iocb;
 struct ct_entry_24xx *VAR_4 = (struct ct_entry_24xx *)VAR_2->ms_iocb;

 if (FUNC_0(VAR_2)) {
  VAR_4->cmd_byte_count = FUNC_1(VAR_1);
  VAR_4->dsd[0].length = VAR_4->cmd_byte_count;
 } else {
  VAR_3->req_bytecount = FUNC_1(VAR_1);
  VAR_3->req_dsd.length = VAR_3->req_bytecount;
 }
}
