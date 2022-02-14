
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int handle; int ppsense_buf; scalar_t__ reserved; scalar_t__ flags; scalar_t__ chain_offset; scalar_t__ sg_list_offset; int sense_len; int function; } ;
union atto_vda_req {TYPE_2__ scsi; } ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__* dwords; } ;
struct esas2r_request {TYPE_3__* vrq_md; int vda_req_sz; TYPE_1__ func_rsp; int req_type; int req_stat; scalar_t__ timeout; scalar_t__ flags; int comp_cb; int * interrupt_cb; void* data_buf; int sg_table_head; union atto_vda_req* vrq; } ;
struct esas2r_adapter {int cmd_ref_no; struct esas2r_request** req_table; } ;
struct TYPE_6__ {scalar_t__ phys_addr; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_4(struct esas2r_request *VAR_6,
       struct esas2r_adapter *VAR_7)
{
 union atto_vda_req *VAR_8 = VAR_6->vrq;

 FUNC_0(&VAR_6->sg_table_head);
 VAR_6->data_buf = (void *)(VAR_8 + 1);
 VAR_6->interrupt_cb = ((void*)0);
 VAR_6->comp_cb = VAR_5;
 VAR_6->flags = 0;
 VAR_6->timeout = 0;
 VAR_6->req_stat = VAR_1;
 VAR_6->req_type = VAR_2;


 VAR_6->func_rsp.dwords[0] = 0;
 VAR_6->func_rsp.dwords[1] = 0;
 VAR_6->vda_req_sz = VAR_0;



 if (VAR_7->req_table[FUNC_1(VAR_8->scsi.handle)])
  FUNC_3();




 VAR_7->req_table[FUNC_1(VAR_8->scsi.handle)] = VAR_6;





 VAR_8->scsi.handle = (VAR_7->cmd_ref_no++ << 16) | (u16)VAR_8->scsi.handle;






 VAR_8->scsi.function = VAR_4;
 VAR_8->scsi.sense_len = VAR_3;


 VAR_8->scsi.sg_list_offset = 0;
 VAR_8->scsi.chain_offset = 0;
 VAR_8->scsi.flags = 0;
 VAR_8->scsi.reserved = 0;


 VAR_8->scsi.ppsense_buf
  = FUNC_2(VAR_6->vrq_md->phys_addr +
         sizeof(union atto_vda_req));
}
