
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {int irp_pending; scalar_t__ len; scalar_t__ transfer_len; int * pend; int * ptail; int * phead; int * pdata; int * pbuf; int * pallocated_buf; int * pskb; int purb; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct _adapter *VAR_2,
        struct recv_buf *VAR_3)
{
 int VAR_4 = 0;

 VAR_3->irp_pending = 0;
 VAR_3->purb = FUNC_0(0, VAR_1);
 if (!VAR_3->purb)
  VAR_4 = -VAR_0;
 VAR_3->pskb = ((void*)0);
 VAR_3->pallocated_buf = ((void*)0);
 VAR_3->pbuf = ((void*)0);
 VAR_3->pdata = ((void*)0);
 VAR_3->phead = ((void*)0);
 VAR_3->ptail = ((void*)0);
 VAR_3->pend = ((void*)0);
 VAR_3->transfer_len = 0;
 VAR_3->len = 0;
 return VAR_4;
}
