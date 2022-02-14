
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __queue {int dummy; } ;
struct recv_priv {int recv_tasklet; struct __queue recv_buf_pending_queue; } ;
struct recv_buf {int dummy; } ;
struct adapter {struct recv_priv recvpriv; } ;


 int FUNC_0 (struct recv_buf*,struct __queue*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, struct recv_buf *VAR_1)
{
 struct recv_priv *VAR_2;
 struct __queue *VAR_3;

 VAR_2 = &VAR_0->recvpriv;
 VAR_3 = &VAR_2->recv_buf_pending_queue;


 FUNC_0(VAR_1, VAR_3);


 FUNC_1(&VAR_2->recv_tasklet);
}
