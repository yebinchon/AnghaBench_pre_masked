
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct st_msg_header {int* cdb; } ;
struct st_hba {scalar_t__ cardtype; int supports_pm; void* mu_status; TYPE_2__* ccb; TYPE_1__* host; int (* send ) (struct st_hba*,struct st_msg_header*,size_t) ;int rq_size; struct st_msg_header* (* alloc_rq ) (struct st_hba*) ;} ;
struct req_msg {int* cdb; } ;
struct TYPE_4__ {int req_type; int * sense_buffer; scalar_t__ sense_bufflen; scalar_t__ sg_count; int * cmd; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_0 (struct st_msg_header*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 struct st_msg_header* FUNC_4 (struct st_hba*) ;
 int FUNC_5 (struct st_hba*,struct st_msg_header*,size_t) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct st_hba *VAR_18, int VAR_19)
{
 struct req_msg *VAR_20;
 struct st_msg_header *VAR_21;
 unsigned long VAR_22;
 unsigned long VAR_23;
 u16 VAR_24 = 0;

 FUNC_2(VAR_18->host->host_lock, VAR_22);

 if ((VAR_18->cardtype == VAR_16 || VAR_18->cardtype == VAR_15) &&
  VAR_18->supports_pm == 1) {
  if (VAR_19 == VAR_13) {
   FUNC_3(VAR_18->host->host_lock, VAR_22);
   return;
  }
 }
 VAR_20 = VAR_18->alloc_rq(VAR_18);
 if (VAR_18->cardtype == VAR_16 || VAR_18->cardtype == VAR_15) {
  VAR_21 = (struct st_msg_header *)VAR_20 - 1;
  FUNC_0(VAR_21, 0, VAR_18->rq_size);
 } else
  FUNC_0(VAR_20, 0, VAR_18->rq_size);

 if ((VAR_18->cardtype == VAR_17 || VAR_18->cardtype == VAR_16
  || VAR_18->cardtype == VAR_15)
  && VAR_19 == VAR_11) {
  VAR_20->cdb[0] = VAR_6;
  VAR_20->cdb[1] = VAR_7;
  VAR_20->cdb[2] = VAR_1;
  VAR_20->cdb[3] = VAR_4;
 } else if ((VAR_18->cardtype == VAR_16 || VAR_18->cardtype == VAR_15)
  && VAR_19 != VAR_11) {
  VAR_20->cdb[0] = VAR_6;
  VAR_20->cdb[1] = VAR_7;
  VAR_20->cdb[2] = VAR_1;
  VAR_20->cdb[3] = VAR_10;
  VAR_20->cdb[4] = VAR_19;
 } else {
  VAR_20->cdb[0] = VAR_0;
  VAR_20->cdb[1] = VAR_3;
  VAR_20->cdb[2] = VAR_2;
 }
 VAR_18->ccb[VAR_24].cmd = ((void*)0);
 VAR_18->ccb[VAR_24].sg_count = 0;
 VAR_18->ccb[VAR_24].sense_bufflen = 0;
 VAR_18->ccb[VAR_24].sense_buffer = ((void*)0);
 VAR_18->ccb[VAR_24].req_type = VAR_9;
 VAR_18->send(VAR_18, VAR_20, VAR_24);
 FUNC_3(VAR_18->host->host_lock, VAR_22);
 VAR_23 = VAR_14;
 while (VAR_18->ccb[VAR_24].req_type & VAR_9) {
  if (FUNC_6(VAR_14, VAR_23 + VAR_12 * VAR_5)) {
   VAR_18->ccb[VAR_24].req_type = 0;
   VAR_18->mu_status = VAR_8;
   return;
  }
  FUNC_1(1);
 }
 VAR_18->mu_status = VAR_8;
}
