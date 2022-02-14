
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {size_t lbq_curr_idx; size_t lbq_len; int lbq_free_cnt; struct bq_desc* lbq; } ;
struct bq_desc {int dummy; } ;



__attribute__((used)) static struct bq_desc *FUNC_0(struct rx_ring *VAR_0)
{
 struct bq_desc *VAR_1 = &VAR_0->lbq[VAR_0->lbq_curr_idx];
 VAR_0->lbq_curr_idx++;
 if (VAR_0->lbq_curr_idx == VAR_0->lbq_len)
  VAR_0->lbq_curr_idx = 0;
 VAR_0->lbq_free_cnt++;
 return VAR_1;
}
