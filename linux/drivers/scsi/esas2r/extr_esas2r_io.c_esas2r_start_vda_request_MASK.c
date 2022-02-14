
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct esas2r_request {int vda_req_sz; TYPE_4__* vrq; TYPE_2__* vrq_md; int req_stat; } ;
struct esas2r_inbound_list_source_entry {int length; int address; } ;
struct TYPE_5__ {scalar_t__ virt_addr; } ;
struct esas2r_adapter {scalar_t__ last_write; scalar_t__ list_size; int max_vdareq_size; int flags; TYPE_1__ inbound_list_md; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_3__ scsi; } ;
struct TYPE_6__ {int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct esas2r_adapter*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct esas2r_adapter *VAR_5,
         struct esas2r_request *VAR_6)
{
 struct esas2r_inbound_list_source_entry *VAR_7;
 u32 VAR_8;

 VAR_6->req_stat = VAR_4;




 VAR_5->last_write++;
 if (VAR_5->last_write >= VAR_5->list_size) {
  VAR_5->last_write = 0;

  if (FUNC_6(VAR_0, &VAR_5->flags))
   FUNC_0(VAR_0, &VAR_5->flags);
  else
   FUNC_5(VAR_0, &VAR_5->flags);
 }

 VAR_7 =
  (struct esas2r_inbound_list_source_entry *)VAR_5->inbound_list_md.
  virt_addr
  + VAR_5->last_write;


 if (VAR_6->vda_req_sz == VAR_3)
  VAR_6->vda_req_sz = (u16)(VAR_5->max_vdareq_size / sizeof(u32));

 VAR_7->address = FUNC_2(VAR_6->vrq_md->phys_addr);
 VAR_7->length = FUNC_1(VAR_6->vda_req_sz);


 VAR_8 = VAR_5->last_write;

 if (FUNC_6(VAR_0, &VAR_5->flags))
  VAR_8 |= VAR_1;

 FUNC_3("rq->vrq->scsi.handle:%x", VAR_6->vrq->scsi.handle);
 FUNC_3("dw:%x", VAR_8);
 FUNC_3("rq->vda_req_sz:%x", VAR_6->vda_req_sz);
 FUNC_4(VAR_5, VAR_2, VAR_8);
}
