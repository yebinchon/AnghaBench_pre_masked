
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {struct adapter* adapter; int recvbuf_lock; int list; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct recv_buf *VAR_0, struct adapter *VAR_1)
{
 FUNC_0(&VAR_0->list);
 FUNC_1(&VAR_0->recvbuf_lock);

 VAR_0->adapter = VAR_1;
}
