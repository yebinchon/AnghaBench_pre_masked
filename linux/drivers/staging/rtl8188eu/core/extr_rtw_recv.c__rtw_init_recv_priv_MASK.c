
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct recv_priv {int signal_stat_sampling_interval; int signal_stat_timer; TYPE_1__ free_recv_queue; int pallocated_frame_buf; struct adapter* adapter; TYPE_1__ uc_swdec_pending_queue; TYPE_1__ recv_pending_queue; } ;
struct recv_frame {struct adapter* adapter; int * pkt; int list; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct recv_frame* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct recv_priv*) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct recv_priv *VAR_5, struct adapter *VAR_6)
{
 int VAR_7;

 struct recv_frame *VAR_8;

 int VAR_9 = VAR_3;

 FUNC_2(&VAR_5->free_recv_queue);
 FUNC_2(&VAR_5->recv_pending_queue);
 FUNC_2(&VAR_5->uc_swdec_pending_queue);

 VAR_5->adapter = VAR_6;

 VAR_5->pallocated_frame_buf = FUNC_7(VAR_0 * sizeof(struct recv_frame) + VAR_1);

 if (!VAR_5->pallocated_frame_buf)
  return VAR_2;

 VAR_8 = FUNC_1(VAR_5->pallocated_frame_buf, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(&VAR_8->list);

  FUNC_3(&VAR_8->list,
         &VAR_5->free_recv_queue.queue);

  VAR_8->pkt = ((void*)0);

  VAR_8->adapter = VAR_6;
  VAR_8++;
 }
 VAR_9 = FUNC_4(VAR_6);

 FUNC_6(&VAR_5->signal_stat_timer, VAR_4,
      0);

 VAR_5->signal_stat_sampling_interval = 1000;

 FUNC_5(VAR_5);

 return VAR_9;
}
