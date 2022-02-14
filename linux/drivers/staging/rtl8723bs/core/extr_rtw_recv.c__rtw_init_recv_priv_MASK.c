
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct adapter* adapter; scalar_t__ len; } ;
struct TYPE_5__ {TYPE_1__ hdr; int list; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct TYPE_6__ {int queue; } ;
struct recv_priv {int free_recvframe_cnt; int signal_stat_sampling_interval; int signal_stat_timer; TYPE_3__ free_recv_queue; int * precv_frame_buf; scalar_t__ pallocated_frame_buf; struct adapter* adapter; TYPE_3__ uc_swdec_pending_queue; TYPE_3__ recv_pending_queue; int lock; } ;
struct adapter {int dummy; } ;
typedef int sint ;
typedef int SIZE_PTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,union recv_frame*) ;
 int FUNC_6 (struct recv_priv*) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

sint FUNC_10(struct recv_priv *VAR_5, struct adapter *VAR_6)
{
 sint VAR_7;
 union recv_frame *VAR_8;
 sint VAR_9 = VAR_3;

 FUNC_7(&VAR_5->lock);

 FUNC_2(&VAR_5->free_recv_queue);
 FUNC_2(&VAR_5->recv_pending_queue);
 FUNC_2(&VAR_5->uc_swdec_pending_queue);

 VAR_5->adapter = VAR_6;

 VAR_5->free_recvframe_cnt = VAR_0;

 VAR_5->pallocated_frame_buf = FUNC_9(VAR_0 * sizeof(union recv_frame) + VAR_1);

 if (!VAR_5->pallocated_frame_buf) {
  VAR_9 = VAR_2;
  goto exit;
 }

 VAR_5->precv_frame_buf = (u8 *)FUNC_1((SIZE_PTR)(VAR_5->pallocated_frame_buf), VAR_1);



 VAR_8 = (union recv_frame *) VAR_5->precv_frame_buf;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(&(VAR_8->u.list));

  FUNC_3(&(VAR_8->u.list), &(VAR_5->free_recv_queue.queue));

  FUNC_5(VAR_6, VAR_8);

  VAR_8->u.hdr.len = 0;

  VAR_8->u.hdr.adapter = VAR_6;
  VAR_8++;

 }

 VAR_9 = FUNC_4(VAR_6);

 FUNC_8(&VAR_5->signal_stat_timer, VAR_4,
      0);

 VAR_5->signal_stat_sampling_interval = 2000;

 FUNC_6(VAR_5);

exit:
 return VAR_9;
}
