
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_rcv_buf_cb {int dummy; } ;
struct ql3_adapter {size_t lrg_buf_index; size_t num_large_buffers; int lrg_buf_release_cnt; struct ql_rcv_buf_cb* lrg_buf; } ;



__attribute__((used)) static struct ql_rcv_buf_cb *FUNC_0(struct ql3_adapter *VAR_0)
{
 struct ql_rcv_buf_cb *VAR_1 = ((void*)0);
 VAR_1 = &VAR_0->lrg_buf[VAR_0->lrg_buf_index];
 VAR_0->lrg_buf_release_cnt++;
 if (++VAR_0->lrg_buf_index == VAR_0->num_large_buffers)
  VAR_0->lrg_buf_index = 0;
 return VAR_1;
}
