
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct esas2r_request {int comp_list; int func_rsp; TYPE_3__* vrq; struct esas2r_request* req_stat; int req_list; } ;
struct TYPE_4__ {scalar_t__ virt_addr; } ;
struct esas2r_adapter {int last_read; int list_size; int queue_lock; struct esas2r_request** req_table; TYPE_1__ outbound_list_md; int * outbound_copy; } ;
struct atto_vda_ob_rsp {int handle; int func_rsp; struct esas2r_request* req_stat; } ;
struct TYPE_5__ {int handle; scalar_t__ function; } ;
struct TYPE_6__ {TYPE_2__ scsi; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (struct esas2r_adapter*,int *) ;
 int FUNC_4 (struct esas2r_adapter*,struct esas2r_request*,struct atto_vda_ob_rsp*) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct esas2r_adapter *VAR_5)
{
 struct atto_vda_ob_rsp *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 struct esas2r_request *VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;

 FUNC_0(VAR_2);

 FUNC_7();

 FUNC_14(&VAR_5->queue_lock, VAR_11);


 VAR_7 = FUNC_9(*VAR_5->outbound_copy) & VAR_0;
 VAR_8 = VAR_5->last_read;

 FUNC_6("rspput_ptr: %x, rspget_ptr: %x", VAR_7, VAR_8);


 if (FUNC_16(VAR_8 == VAR_7)) {
  FUNC_15(&VAR_5->queue_lock, VAR_11);
  FUNC_8();
  return;
 }


 if (FUNC_16(VAR_7 >= VAR_5->list_size)) {
  FUNC_15(&VAR_5->queue_lock, VAR_11);
  FUNC_2();
  FUNC_5(VAR_5);
  FUNC_8();
  return;
 }

 do {
  VAR_8++;

  if (VAR_8 >= VAR_5->list_size)
   VAR_8 = 0;

  VAR_6 = (struct atto_vda_ob_rsp *)VAR_5->outbound_list_md.virt_addr
        + VAR_8;

  VAR_10 = VAR_6->handle;


  if (FUNC_16(FUNC_1(VAR_10) == 0
        || FUNC_1(VAR_10) > VAR_4 +
        VAR_3 + 1)) {
   FUNC_2();
   continue;
  }


  VAR_9 = VAR_5->req_table[FUNC_1(VAR_10)];

  if (FUNC_16(VAR_9 == ((void*)0) || VAR_9->vrq->scsi.handle != VAR_10)) {
   FUNC_2();
   continue;
  }

  FUNC_12(&VAR_9->req_list);


  VAR_9->req_stat = VAR_6->req_stat;

  FUNC_6("handle: %x", VAR_10);
  FUNC_6("rq: %p", VAR_9);
  FUNC_6("req_status: %x", VAR_9->req_stat);

  if (FUNC_10(VAR_9->vrq->scsi.function == VAR_1)) {
   FUNC_4(VAR_5, VAR_9, VAR_6);
  } else {




   FUNC_13(&VAR_9->func_rsp, &VAR_6->func_rsp,
          sizeof(VAR_6->func_rsp));
  }


  FUNC_11(&VAR_9->comp_list, &VAR_2);

 } while (VAR_8 != VAR_7);

 VAR_5->last_read = VAR_8;
 FUNC_15(&VAR_5->queue_lock, VAR_11);

 FUNC_3(VAR_5, &VAR_2);
 FUNC_8();
}
