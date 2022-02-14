
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* qp; } ;
struct scif_endpt {size_t state; scalar_t__ conn_async_state; int lock; TYPE_3__ qp_info; int sendwq; int recvwq; scalar_t__ conreqcnt; int conwq; scalar_t__ conn_err; int conn_pend_wq; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_5__ {int this_device; } ;
struct TYPE_8__ {TYPE_1__ mdev; } ;
struct TYPE_6__ {int outbound_q; int inbound_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct file*,int *,int *,struct scif_endpt*) ;
 int FUNC_1 (int ,char*,struct scif_endpt*,int ) ;
 int FUNC_2 (int *) ;
 int * VAR_8 ;
 TYPE_4__ VAR_9 ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__poll_t
FUNC_7(struct file *VAR_10, poll_table *VAR_11, struct scif_endpt *VAR_12)
{
 __poll_t VAR_13 = 0;

 FUNC_1(VAR_9.mdev.this_device,
  "SCIFAPI pollfd: ep %p %s\n", VAR_12, VAR_8[VAR_12->state]);

 FUNC_5(&VAR_12->lock);


 if (VAR_12->conn_async_state == VAR_0) {
  FUNC_0(VAR_10, &VAR_12->conn_pend_wq, VAR_11, VAR_12);
  if (VAR_12->conn_async_state == VAR_0) {
   if (VAR_12->state == VAR_5 ||
       VAR_12->state == VAR_6 ||
       VAR_12->conn_err)
    VAR_13 |= VAR_4;
   goto exit;
  }
 }


 if (VAR_12->state == VAR_7) {
  FUNC_0(VAR_10, &VAR_12->conwq, VAR_11, VAR_12);
  if (VAR_12->state == VAR_7) {
   if (VAR_12->conreqcnt)
    VAR_13 |= VAR_3;
   goto exit;
  }
 }


 if (VAR_12->state == VAR_5 || VAR_12->state == VAR_6) {
  if (FUNC_2(VAR_11) & VAR_3)
   FUNC_0(VAR_10, &VAR_12->recvwq, VAR_11, VAR_12);
  if (FUNC_2(VAR_11) & VAR_4)
   FUNC_0(VAR_10, &VAR_12->sendwq, VAR_11, VAR_12);
  if (VAR_12->state == VAR_5 ||
      VAR_12->state == VAR_6) {

   if (FUNC_3(&VAR_12->qp_info.qp->inbound_q, 1))
    VAR_13 |= VAR_3;

   if (FUNC_4(&VAR_12->qp_info.qp->outbound_q))
    VAR_13 |= VAR_4;

   if (VAR_12->state == VAR_6)
    VAR_13 |= VAR_2;
   goto exit;
  }
 }


 VAR_13 |= VAR_1;
exit:
 FUNC_6(&VAR_12->lock);
 return VAR_13;
}
