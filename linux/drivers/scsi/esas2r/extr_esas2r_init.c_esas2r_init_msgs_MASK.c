
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {scalar_t__ req_stat; int flags; int comp_cb; } ;
struct esas2r_adapter {scalar_t__ init_msg; int queue_lock; struct esas2r_request general_req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

bool FUNC_8(struct esas2r_adapter *VAR_8)
{
 bool VAR_9 = 1;
 struct esas2r_request *VAR_10 = &VAR_8->general_req;

 FUNC_3(VAR_10, VAR_8);
 VAR_10->comp_cb = VAR_7;

 if (VAR_8->init_msg == 0)
  VAR_8->init_msg = VAR_0;

 while (VAR_8->init_msg) {
  if (FUNC_0(VAR_8, VAR_10)) {
   unsigned long VAR_11;
   while (1) {
    FUNC_6(&VAR_8->queue_lock, VAR_11);
    FUNC_4(VAR_8, VAR_10);
    FUNC_7(&VAR_8->queue_lock, VAR_11);
    FUNC_5(VAR_8, VAR_10);
    if (VAR_10->req_stat != VAR_4)
     break;
   }
  }

  if (VAR_10->req_stat == VAR_5
      || ((VAR_10->flags & VAR_3)
   && VAR_10->req_stat != VAR_6))
   continue;

  FUNC_1(VAR_2, "init message %x failed (%x, %x)",
      VAR_8->init_msg, VAR_10->req_stat, VAR_10->flags);
  VAR_8->init_msg = VAR_1;
  VAR_9 = 0;
  break;
 }

 FUNC_2(VAR_10, VAR_8);
 return VAR_9;
}
