
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oslec_state {int taps; int curr_pos; int cng_level; int lbgn_upper; int lbgn_upper_acc; struct oslec_state** fir_taps16; int fir_state; int fir_state_bg; scalar_t__ lbgn_acc; scalar_t__ lbgn; scalar_t__ rx_2; scalar_t__ rx_1; scalar_t__ tx_2; scalar_t__ tx_1; scalar_t__ lclean_bg; scalar_t__ lclean; scalar_t__ lrx; scalar_t__ ltx; scalar_t__ lclean_bgacc; scalar_t__ lcleanacc; scalar_t__ lrxacc; scalar_t__ ltxacc; scalar_t__ pstates; scalar_t__ cond_met; void* snapshot; scalar_t__* yvrx; scalar_t__* xvrx; scalar_t__* yvtx; scalar_t__* xvtx; int log2taps; } ;
typedef int int16_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,struct oslec_state*,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct oslec_state*) ;
 struct oslec_state* FUNC_4 (int,int ) ;
 int FUNC_5 (struct oslec_state*,int) ;
 int FUNC_6 (int) ;

struct oslec_state *FUNC_7(int VAR_1, int VAR_2)
{
 struct oslec_state *VAR_3;
 int VAR_4;
 const int16_t *VAR_5;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->taps = VAR_1;
 VAR_3->log2taps = FUNC_6(VAR_1);
 VAR_3->curr_pos = VAR_3->taps - 1;

 VAR_3->fir_taps16[0] =
     FUNC_2(VAR_3->taps, sizeof(int16_t), VAR_0);
 if (!VAR_3->fir_taps16[0])
  goto error_oom_0;

 VAR_3->fir_taps16[1] =
     FUNC_2(VAR_3->taps, sizeof(int16_t), VAR_0);
 if (!VAR_3->fir_taps16[1])
  goto error_oom_1;

 VAR_5 = FUNC_0(&VAR_3->fir_state, VAR_3->fir_taps16[0], VAR_3->taps);
 if (!VAR_5)
  goto error_state;
 VAR_5 = FUNC_0(&VAR_3->fir_state_bg, VAR_3->fir_taps16[1], VAR_3->taps);
 if (!VAR_5)
  goto error_state_bg;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  VAR_3->xvtx[VAR_4] = VAR_3->yvtx[VAR_4] = VAR_3->xvrx[VAR_4] = VAR_3->yvrx[VAR_4] = 0;

 VAR_3->cng_level = 1000;
 FUNC_5(VAR_3, VAR_2);

 VAR_3->snapshot = FUNC_2(VAR_3->taps, sizeof(int16_t), VAR_0);
 if (!VAR_3->snapshot)
  goto error_snap;

 VAR_3->cond_met = 0;
 VAR_3->pstates = 0;
 VAR_3->ltxacc = VAR_3->lrxacc = VAR_3->lcleanacc = VAR_3->lclean_bgacc = 0;
 VAR_3->ltx = VAR_3->lrx = VAR_3->lclean = VAR_3->lclean_bg = 0;
 VAR_3->tx_1 = VAR_3->tx_2 = VAR_3->rx_1 = VAR_3->rx_2 = 0;
 VAR_3->lbgn = VAR_3->lbgn_acc = 0;
 VAR_3->lbgn_upper = 200;
 VAR_3->lbgn_upper_acc = VAR_3->lbgn_upper << 13;

 return VAR_3;

error_snap:
 FUNC_1(&VAR_3->fir_state_bg);
error_state_bg:
 FUNC_1(&VAR_3->fir_state);
error_state:
 FUNC_3(VAR_3->fir_taps16[1]);
error_oom_1:
 FUNC_3(VAR_3->fir_taps16[0]);
error_oom_0:
 FUNC_3(VAR_3);
 return ((void*)0);
}
