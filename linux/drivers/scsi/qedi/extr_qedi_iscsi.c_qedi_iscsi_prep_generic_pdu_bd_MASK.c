
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_3__ {void* lo; void* hi; } ;
struct scsi_sge {scalar_t__ sge_len; TYPE_1__ sge_addr; } ;
struct TYPE_4__ {scalar_t__ resp_dma_addr; scalar_t__ resp_bd_tbl; scalar_t__ req_buf; scalar_t__ req_wr_ptr; scalar_t__ req_dma_addr; scalar_t__ req_bd_tbl; } ;
struct qedi_conn {TYPE_2__ gen_pdu; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qedi_conn *VAR_1)
{
 struct scsi_sge *VAR_2;

 VAR_2 = (struct scsi_sge *)VAR_1->gen_pdu.req_bd_tbl;

 VAR_2->sge_addr.hi =
  (u32)((u64)VAR_1->gen_pdu.req_dma_addr >> 32);
 VAR_2->sge_addr.lo = (u32)VAR_1->gen_pdu.req_dma_addr;
 VAR_2->sge_len = VAR_1->gen_pdu.req_wr_ptr -
    VAR_1->gen_pdu.req_buf;
 VAR_2 = (struct scsi_sge *)VAR_1->gen_pdu.resp_bd_tbl;
 VAR_2->sge_addr.hi =
   (u32)((u64)VAR_1->gen_pdu.resp_dma_addr >> 32);
 VAR_2->sge_addr.lo = (u32)VAR_1->gen_pdu.resp_dma_addr;
 VAR_2->sge_len = VAR_0;
}
