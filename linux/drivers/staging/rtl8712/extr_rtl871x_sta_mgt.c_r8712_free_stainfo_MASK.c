
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int lock; } ;
struct TYPE_14__ {int lock; } ;
struct TYPE_12__ {int lock; } ;
struct TYPE_10__ {int lock; } ;
struct xmit_priv {TYPE_8__ be_pending; TYPE_6__ bk_pending; TYPE_4__ vi_pending; TYPE_2__ vo_pending; } ;
struct TYPE_15__ {int tx_pending; int sta_pending; } ;
struct TYPE_13__ {int tx_pending; int sta_pending; } ;
struct TYPE_11__ {int tx_pending; int sta_pending; } ;
struct TYPE_9__ {int tx_pending; int sta_pending; } ;
struct sta_xmit_priv {TYPE_7__ be_q; TYPE_5__ bk_q; TYPE_3__ vi_q; TYPE_1__ vo_q; } ;
struct __queue {int lock; int queue; } ;
struct sta_priv {int asoc_sta_count; struct __queue free_sta_queue; } ;
struct sta_info {int list; struct recv_reorder_ctrl* recvreorder_ctrl; int sta_recvpriv; struct sta_xmit_priv sta_xmitpriv; int hash_list; } ;
struct recv_reorder_ctrl {int reordering_ctrl_timer; } ;
struct _adapter {struct sta_priv stapriv; struct xmit_priv xmitpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sta_xmit_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xmit_priv*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct _adapter *VAR_0, struct sta_info *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 struct __queue *VAR_4;
 struct recv_reorder_ctrl *VAR_5;
 struct sta_xmit_priv *VAR_6;
 struct xmit_priv *VAR_7 = &VAR_0->xmitpriv;
 struct sta_priv *VAR_8 = &VAR_0->stapriv;

 if (VAR_1 == ((void*)0))
  return;
 VAR_4 = &VAR_8->free_sta_queue;
 VAR_6 = &VAR_1->sta_xmitpriv;
 FUNC_7(&(VAR_7->vo_pending.lock), VAR_3);
 FUNC_5(VAR_7, &VAR_6->vo_q.sta_pending);
 FUNC_4(&(VAR_6->vo_q.tx_pending));
 FUNC_9(&(VAR_7->vo_pending.lock), VAR_3);
 FUNC_7(&(VAR_7->vi_pending.lock), VAR_3);
 FUNC_5(VAR_7, &VAR_6->vi_q.sta_pending);
 FUNC_4(&(VAR_6->vi_q.tx_pending));
 FUNC_9(&(VAR_7->vi_pending.lock), VAR_3);
 FUNC_7(&(VAR_7->bk_pending.lock), VAR_3);
 FUNC_5(VAR_7, &VAR_6->bk_q.sta_pending);
 FUNC_4(&(VAR_6->bk_q.tx_pending));
 FUNC_9(&(VAR_7->bk_pending.lock), VAR_3);
 FUNC_7(&(VAR_7->be_pending.lock), VAR_3);
 FUNC_5(VAR_7, &VAR_6->be_q.sta_pending);
 FUNC_4(&(VAR_6->be_q.tx_pending));
 FUNC_9(&(VAR_7->be_pending.lock), VAR_3);
 FUNC_4(&VAR_1->hash_list);
 VAR_8->asoc_sta_count--;

 FUNC_1(&VAR_1->sta_xmitpriv);
 FUNC_0(&VAR_1->sta_recvpriv);



 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  VAR_5 = &VAR_1->recvreorder_ctrl[VAR_2];
  FUNC_2(&VAR_5->reordering_ctrl_timer);
 }
 FUNC_6(&(VAR_4->lock));

 FUNC_3(&VAR_1->list, &VAR_4->queue);
 FUNC_8(&(VAR_4->lock));
}
