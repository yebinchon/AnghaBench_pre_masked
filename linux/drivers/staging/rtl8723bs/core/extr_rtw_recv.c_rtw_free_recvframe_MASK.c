
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; scalar_t__ len; struct adapter* adapter; } ;
struct TYPE_3__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_1__ u; } ;
struct __queue {int lock; } ;
struct recv_priv {int free_recvframe_cnt; struct __queue free_recv_queue; } ;
struct adapter {struct recv_priv recvpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union recv_frame*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(union recv_frame *VAR_1, struct __queue *VAR_2)
{
 struct adapter *VAR_3 = VAR_1->u.hdr.adapter;
 struct recv_priv *VAR_4 = &VAR_3->recvpriv;

 FUNC_3(VAR_1);


 FUNC_4(&VAR_2->lock);

 FUNC_2(&(VAR_1->u.hdr.list));

 VAR_1->u.hdr.len = 0;

 FUNC_1(&(VAR_1->u.hdr.list), FUNC_0(VAR_2));

 if (VAR_3) {
  if (VAR_2 == &VAR_4->free_recv_queue)
    VAR_4->free_recvframe_cnt++;
 }
 FUNC_5(&VAR_2->lock);
 return VAR_0;
}
