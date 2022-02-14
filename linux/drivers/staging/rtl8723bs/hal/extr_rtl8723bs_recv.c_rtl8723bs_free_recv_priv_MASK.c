
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct recv_priv {int * pallocated_recv_buf; int * precv_buf; scalar_t__ free_recv_buf_queue_cnt; int recv_tasklet; } ;
struct recv_buf {int list; } ;
struct adapter {struct recv_priv recvpriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,struct recv_buf*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_1)
{
 u32 VAR_2;
 struct recv_priv *VAR_3;
 struct recv_buf *VAR_4;

 VAR_3 = &VAR_1->recvpriv;


 FUNC_3(&VAR_3->recv_tasklet);


 VAR_4 = (struct recv_buf *)VAR_3->precv_buf;
 if (VAR_4) {
  VAR_3->free_recv_buf_queue_cnt = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   FUNC_1(&VAR_4->list);
   FUNC_2(VAR_1, VAR_4);
   VAR_4++;
  }
  VAR_3->precv_buf = ((void*)0);
 }

 if (VAR_3->pallocated_recv_buf) {
  FUNC_0(VAR_3->pallocated_recv_buf);
  VAR_3->pallocated_recv_buf = ((void*)0);
 }
}
