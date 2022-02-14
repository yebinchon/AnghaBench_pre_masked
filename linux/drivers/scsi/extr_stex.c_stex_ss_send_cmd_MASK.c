
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct st_msg_header {int handle; void* timeout; scalar_t__ channel; } ;
struct st_hba {int dma_handle; int req_head; int rq_size; int rq_count; scalar_t__ cardtype; scalar_t__ mmio_base; TYPE_3__* ccb; int out_req_cnt; } ;
struct scsi_cmnd {TYPE_2__* request; TYPE_1__* device; } ;
struct req_msg {void* tag; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int sg_count; struct scsi_cmnd* cmd; struct req_msg* req; } ;
struct TYPE_5__ {size_t timeout; } ;
struct TYPE_4__ {scalar_t__ channel; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct st_hba *VAR_4, struct req_msg *VAR_5, u16 VAR_6)
{
 struct scsi_cmnd *VAR_7;
 struct st_msg_header *VAR_8;
 dma_addr_t VAR_9;

 VAR_5->tag = FUNC_0(VAR_6);

 VAR_4->ccb[VAR_6].req = VAR_5;
 VAR_4->out_req_cnt++;

 VAR_7 = VAR_4->ccb[VAR_6].cmd;
 VAR_8 = (struct st_msg_header *)VAR_5 - 1;
 if (FUNC_2(VAR_7)) {
  VAR_8->channel = (u8)VAR_7->device->channel;
  VAR_8->timeout = FUNC_0(VAR_7->request->timeout/VAR_0);
 }
 VAR_9 = VAR_4->dma_handle + VAR_4->req_head * VAR_4->rq_size;
 VAR_9 += (VAR_4->ccb[VAR_6].sg_count+4)/11;
 VAR_8->handle = FUNC_1(VAR_9);

 ++VAR_4->req_head;
 VAR_4->req_head %= VAR_4->rq_count+1;
 if (VAR_4->cardtype == VAR_3) {
  FUNC_4((VAR_9 >> 16) >> 16, VAR_4->mmio_base + VAR_2);
  FUNC_4(VAR_9, VAR_4->mmio_base + VAR_1);
 } else {
  FUNC_4((VAR_9 >> 16) >> 16, VAR_4->mmio_base + VAR_2);
  FUNC_3(VAR_4->mmio_base + VAR_2);
  FUNC_4(VAR_9, VAR_4->mmio_base + VAR_1);
  FUNC_3(VAR_4->mmio_base + VAR_1);
 }
}
