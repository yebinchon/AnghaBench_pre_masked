
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct _adapter* adapter; } ;
struct TYPE_5__ {TYPE_1__ hdr; int list; } ;
union recv_frame {TYPE_2__ u; } ;
struct TYPE_6__ {int queue; } ;
struct recv_priv {int free_recvframe_cnt; int rx_pending_cnt; TYPE_3__ free_recv_queue; int * precv_frame_buf; int * pallocated_frame_buf; struct _adapter* adapter; TYPE_3__ recv_pending_queue; int lock; } ;
struct _adapter {int dummy; } ;
typedef int sint ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (struct recv_priv*,struct _adapter*) ;
 int FUNC_7 (struct _adapter*,union recv_frame*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct recv_priv *VAR_3,
      struct _adapter *VAR_4)
{
 sint VAR_5;
 union recv_frame *VAR_6;

 FUNC_5((unsigned char *)VAR_3, 0, sizeof(struct recv_priv));
 FUNC_8(&VAR_3->lock);
 FUNC_1(&VAR_3->free_recv_queue);
 FUNC_1(&VAR_3->recv_pending_queue);
 VAR_3->adapter = VAR_4;
 VAR_3->free_recvframe_cnt = VAR_1;
 VAR_3->pallocated_frame_buf = FUNC_3(VAR_1 *
    sizeof(union recv_frame) + VAR_2,
    VAR_0);
 if (VAR_3->pallocated_frame_buf == ((void*)0))
  return;
 FUNC_2(VAR_3->pallocated_frame_buf);
 VAR_3->precv_frame_buf = VAR_3->pallocated_frame_buf +
        VAR_2 -
        ((addr_t)(VAR_3->pallocated_frame_buf) &
        (VAR_2 - 1));
 VAR_6 = (union recv_frame *)VAR_3->precv_frame_buf;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&(VAR_6->u.list));
  FUNC_4(&(VAR_6->u.list),
     &(VAR_3->free_recv_queue.queue));
  FUNC_7(VAR_4, VAR_6);
  VAR_6->u.hdr.adapter = VAR_4;
  VAR_6++;
 }
 VAR_3->rx_pending_cnt = 1;
 FUNC_6(VAR_3, VAR_4);
}
