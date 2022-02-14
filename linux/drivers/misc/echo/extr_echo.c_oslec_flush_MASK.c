
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr_pos; } ;
struct oslec_state {int lbgn_upper; int lbgn_upper_acc; int taps; int curr_pos; scalar_t__ pstates; int * fir_taps16; TYPE_1__ fir_state_bg; TYPE_1__ fir_state; scalar_t__ nonupdate_dwell; scalar_t__ lbgn_acc; scalar_t__ lbgn; scalar_t__ rx_2; scalar_t__ rx_1; scalar_t__ tx_2; scalar_t__ tx_1; scalar_t__ lclean_bg; scalar_t__ lclean; scalar_t__ lrx; scalar_t__ ltx; scalar_t__ lclean_bgacc; scalar_t__ lcleanacc; scalar_t__ lrxacc; scalar_t__ ltxacc; } ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct oslec_state *VAR_0)
{
 int VAR_1;

 VAR_0->ltxacc = VAR_0->lrxacc = VAR_0->lcleanacc = VAR_0->lclean_bgacc = 0;
 VAR_0->ltx = VAR_0->lrx = VAR_0->lclean = VAR_0->lclean_bg = 0;
 VAR_0->tx_1 = VAR_0->tx_2 = VAR_0->rx_1 = VAR_0->rx_2 = 0;

 VAR_0->lbgn = VAR_0->lbgn_acc = 0;
 VAR_0->lbgn_upper = 200;
 VAR_0->lbgn_upper_acc = VAR_0->lbgn_upper << 13;

 VAR_0->nonupdate_dwell = 0;

 FUNC_0(&VAR_0->fir_state);
 FUNC_0(&VAR_0->fir_state_bg);
 VAR_0->fir_state.curr_pos = VAR_0->taps - 1;
 VAR_0->fir_state_bg.curr_pos = VAR_0->taps - 1;
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  FUNC_1(VAR_0->fir_taps16[VAR_1], 0, VAR_0->taps * sizeof(int16_t));

 VAR_0->curr_pos = VAR_0->taps - 1;
 VAR_0->pstates = 0;
}
