
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int qos; int seq_num; int amsdu; } ;
struct TYPE_3__ {struct recv_reorder_ctrl* preorder_ctrl; struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int lock; } ;
struct recv_reorder_ctrl {int reordering_ctrl_timer; struct __queue pending_recvframe_queue; } ;
struct _adapter {int surprise_removed; int driver_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct recv_reorder_ctrl*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct recv_reorder_ctrl*,union recv_frame*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct _adapter*,union recv_frame*) ;
 scalar_t__ FUNC_6 (struct _adapter*,struct recv_reorder_ctrl*,int) ;
 int FUNC_7 (union recv_frame*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct _adapter *VAR_4,
        union recv_frame *VAR_5)
{
 unsigned long VAR_6;
 struct rx_pkt_attrib *VAR_7 = &VAR_5->u.hdr.attrib;
 struct recv_reorder_ctrl *VAR_8 = VAR_5->u.hdr.preorder_ctrl;
 struct __queue *VAR_9 =
    &VAR_8->pending_recvframe_queue;

 if (!VAR_7->amsdu) {

  FUNC_7(VAR_5);
  if (VAR_7->qos != 1) {
   if (!VAR_4->driver_stopped &&
       !VAR_4->surprise_removed) {
    FUNC_5(VAR_4, VAR_5);
    return 0;
   } else {
    return -VAR_0;
   }
  }
 }
 FUNC_8(&VAR_9->lock, VAR_6);

 if (!FUNC_0(VAR_8, VAR_7->seq_num))
  goto _err_exit;

 if (!FUNC_2(VAR_8, VAR_5))
  goto _err_exit;
 if (FUNC_6(VAR_4, VAR_8, 0)) {
  FUNC_3(&VAR_8->reordering_ctrl_timer,
     VAR_3 + FUNC_4(VAR_2));
  FUNC_9(&VAR_9->lock, VAR_6);
 } else {
  FUNC_9(&VAR_9->lock, VAR_6);
  FUNC_1(&VAR_8->reordering_ctrl_timer);
 }
 return 0;
_err_exit:
 FUNC_9(&VAR_9->lock, VAR_6);
 return -VAR_1;
}
