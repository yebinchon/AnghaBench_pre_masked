
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* hi; void* lo; } ;
struct TYPE_9__ {void* sge_len; TYPE_2__ sge_addr; } ;
struct TYPE_10__ {TYPE_4__ cdb_sge; int hdr_second_dword; } ;
union iscsi_task_hdr {TYPE_5__ ext_cdb_cmd; } ;
typedef void* u32 ;
struct ystorm_iscsi_task_st_ctx {union iscsi_task_hdr pdu_hdr; } ;
struct TYPE_6__ {int hi; int lo; } ;
struct TYPE_8__ {int sge_len; TYPE_1__ sge_addr; } ;
struct scsi_initiator_cmd_params {TYPE_3__ extended_cdb_sge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static
void FUNC_2(struct ystorm_iscsi_task_st_ctx *VAR_1,
       struct scsi_initiator_cmd_params *VAR_2)
{
 union iscsi_task_hdr *VAR_3 = &VAR_1->pdu_hdr;
 u32 VAR_4;

 if (!VAR_2->extended_cdb_sge.sge_len)
  return;

 FUNC_0(VAR_3->ext_cdb_cmd.hdr_second_dword,
    VAR_0,
    VAR_2->extended_cdb_sge.sge_len);
 VAR_4 = FUNC_1(VAR_2->extended_cdb_sge.sge_addr.lo);
 VAR_3->ext_cdb_cmd.cdb_sge.sge_addr.lo = VAR_4;
 VAR_4 = FUNC_1(VAR_2->extended_cdb_sge.sge_addr.hi);
 VAR_3->ext_cdb_cmd.cdb_sge.sge_addr.hi = VAR_4;
 VAR_4 = FUNC_1(VAR_2->extended_cdb_sge.sge_len);
 VAR_3->ext_cdb_cmd.cdb_sge.sge_len = VAR_4;
}
