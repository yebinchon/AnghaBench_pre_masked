
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {scalar_t__ pdata; scalar_t__ pend; scalar_t__ pbuf; scalar_t__ ptail; scalar_t__ phead; scalar_t__ ref_cnt; scalar_t__ len; scalar_t__ transfer_len; } ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct _adapter *VAR_1, struct recv_buf *VAR_2)
{
 VAR_2->transfer_len = 0;
 VAR_2->len = 0;
 VAR_2->ref_cnt = 0;
 if (VAR_2->pbuf) {
  VAR_2->pdata = VAR_2->pbuf;
  VAR_2->phead = VAR_2->pbuf;
  VAR_2->ptail = VAR_2->pbuf;
  VAR_2->pend = VAR_2->pdata + VAR_0;
 }
}
