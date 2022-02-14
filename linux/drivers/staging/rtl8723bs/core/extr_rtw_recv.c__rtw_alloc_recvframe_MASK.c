
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct adapter* adapter; int list; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int queue; } ;
struct recv_priv {int free_recvframe_cnt; struct __queue free_recv_queue; } ;
struct list_head {int dummy; } ;
struct adapter {struct recv_priv recvpriv; } ;


 struct list_head* FUNC_0 (struct __queue*) ;
 struct list_head* FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

union recv_frame *FUNC_4(struct __queue *VAR_0)
{

 union recv_frame *VAR_1;
 struct list_head *VAR_2, *VAR_3;
 struct adapter *VAR_4;
 struct recv_priv *VAR_5;

 if (FUNC_3(&VAR_0->queue))
  VAR_1 = ((void*)0);
 else {
  VAR_3 = FUNC_0(VAR_0);

  VAR_2 = FUNC_1(VAR_3);

  VAR_1 = (union recv_frame *)VAR_2;

  FUNC_2(&VAR_1->u.hdr.list);
  VAR_4 = VAR_1->u.hdr.adapter;
  if (VAR_4) {
   VAR_5 = &VAR_4->recvpriv;
   if (VAR_0 == &VAR_5->free_recv_queue)
    VAR_5->free_recvframe_cnt--;
  }
 }
 return VAR_1;
}
