
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {int addba_in_progress; int lock; int mid; scalar_t__ agg_amsdu; scalar_t__ agg_timeout; scalar_t__ agg_wsize; scalar_t__ begin; scalar_t__ last_idle; scalar_t__ idle; scalar_t__ enabled; scalar_t__ dot1x_open; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wil_ring_tx_data *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->dot1x_open = 0;
 VAR_1->enabled = 0;
 VAR_1->idle = 0;
 VAR_1->last_idle = 0;
 VAR_1->begin = 0;
 VAR_1->agg_wsize = 0;
 VAR_1->agg_timeout = 0;
 VAR_1->agg_amsdu = 0;
 VAR_1->addba_in_progress = 0;
 VAR_1->mid = VAR_0;
 FUNC_1(&VAR_1->lock);
}
