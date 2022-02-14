
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t curr_pos; int coeffs; scalar_t__* history; } ;
struct oslec_state {int tx; int rx; int adaption_mode; int rx_1; int rx_2; int pstates; int log2taps; int ltxacc; int ltx; int lrxacc; int lrx; int clean; int lcleanacc; int lclean; int lclean_bgacc; int lclean_bg; int shift; scalar_t__ nonupdate_dwell; int adapt; int cond_met; int taps; int clean_nlp; int cng_level; int lbgn; unsigned int cng_rndnum; int cng_filter; int lbgn_acc; int curr_pos; int * fir_taps16; scalar_t__ factor; TYPE_1__ fir_state_bg; TYPE_1__ fir_state; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct oslec_state*,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

int16_t FUNC_5(struct oslec_state *VAR_10, int16_t VAR_11, int16_t VAR_12)
{
 int32_t VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;







 VAR_10->tx = VAR_11;
 VAR_10->rx = VAR_12;
 VAR_11 >>= 1;
 VAR_12 >>= 1;
 if (VAR_10->adaption_mode & VAR_7) {
  VAR_15 = VAR_12 << 15;
  VAR_15 -= (VAR_15 >> 4);

  VAR_10->rx_1 += -(VAR_10->rx_1 >> VAR_0) + VAR_15 - VAR_10->rx_2;






  VAR_16 = VAR_10->rx_1 >> 15;
  if (VAR_16 > 16383)
   VAR_16 = 16383;
  if (VAR_16 < -16383)
   VAR_16 = -16383;
  VAR_12 = VAR_16;
  VAR_10->rx_2 = VAR_15;
 }




 {
  int VAR_17, VAR_18;




  VAR_17 = (int)VAR_11 * (int)VAR_11;
  VAR_18 = (int)VAR_10->fir_state.history[VAR_10->fir_state.curr_pos] *
      (int)VAR_10->fir_state.history[VAR_10->fir_state.curr_pos];
  VAR_10->pstates +=
      ((VAR_17 - VAR_18) + (1 << (VAR_10->log2taps - 1))) >> VAR_10->log2taps;
  if (VAR_10->pstates < 0)
   VAR_10->pstates = 0;
 }



 VAR_10->ltxacc += FUNC_0(VAR_11) - VAR_10->ltx;
 VAR_10->ltx = (VAR_10->ltxacc + (1 << 4)) >> 5;
 VAR_10->lrxacc += FUNC_0(VAR_12) - VAR_10->lrx;
 VAR_10->lrx = (VAR_10->lrxacc + (1 << 4)) >> 5;



 VAR_10->fir_state.coeffs = VAR_10->fir_taps16[0];
 VAR_13 = FUNC_1(&VAR_10->fir_state, VAR_11);
 VAR_10->clean = VAR_12 - VAR_13;
 VAR_10->lcleanacc += FUNC_0(VAR_10->clean) - VAR_10->lclean;
 VAR_10->lclean = (VAR_10->lcleanacc + (1 << 4)) >> 5;



 VAR_13 = FUNC_1(&VAR_10->fir_state_bg, VAR_11);
 VAR_14 = VAR_12 - VAR_13;
 VAR_10->lclean_bgacc += FUNC_0(VAR_14) - VAR_10->lclean_bg;
 VAR_10->lclean_bg = (VAR_10->lclean_bgacc + (1 << 4)) >> 5;







 VAR_10->factor = 0;
 VAR_10->shift = 0;
 if (!VAR_10->nonupdate_dwell) {
  int VAR_19, VAR_20, VAR_21;
  VAR_19 = VAR_9 + VAR_10->pstates;
  VAR_20 = FUNC_4(VAR_19) + VAR_10->log2taps;
  VAR_21 = 30 - 2 - VAR_20;
  VAR_10->shift = VAR_21;

  FUNC_2(VAR_10, VAR_14, VAR_21);
 }




 VAR_10->adapt = 0;
 if ((VAR_10->lrx > VAR_8) && (VAR_10->lrx > VAR_10->ltx))
  VAR_10->nonupdate_dwell = VAR_1;
 if (VAR_10->nonupdate_dwell)
  VAR_10->nonupdate_dwell--;






 if ((VAR_10->adaption_mode & VAR_3) &&
     (VAR_10->nonupdate_dwell == 0) &&

     (8 * VAR_10->lclean_bg < 7 * VAR_10->lclean) &&

     (8 * VAR_10->lclean_bg < VAR_10->ltx)) {
  if (VAR_10->cond_met == 6) {




   VAR_10->adapt = 1;
   FUNC_3(VAR_10->fir_taps16[0], VAR_10->fir_taps16[1],
          VAR_10->taps * sizeof(int16_t));
  } else
   VAR_10->cond_met++;
 } else
  VAR_10->cond_met = 0;



 VAR_10->clean_nlp = VAR_10->clean;
 if (VAR_10->adaption_mode & VAR_6) {






  if ((16 * VAR_10->lclean < VAR_10->ltx)) {





   if (VAR_10->adaption_mode & VAR_5) {
    VAR_10->cng_level = VAR_10->lbgn;
    VAR_10->cng_rndnum =
        1664525U * VAR_10->cng_rndnum + 1013904223U;
    VAR_10->cng_filter =
        ((VAR_10->cng_rndnum & 0xFFFF) - 32768 +
         5 * VAR_10->cng_filter) >> 3;
    VAR_10->clean_nlp =
        (VAR_10->cng_filter * VAR_10->cng_level * 8) >> 14;

   } else if (VAR_10->adaption_mode & VAR_4) {

    if (VAR_10->clean_nlp > VAR_10->lbgn)
     VAR_10->clean_nlp = VAR_10->lbgn;
    if (VAR_10->clean_nlp < -VAR_10->lbgn)
     VAR_10->clean_nlp = -VAR_10->lbgn;
   } else {




    VAR_10->clean_nlp = 0;
   }
  } else {
   if (VAR_10->lclean < 40) {
    VAR_10->lbgn_acc += FUNC_0(VAR_10->clean) - VAR_10->lbgn;
    VAR_10->lbgn = (VAR_10->lbgn_acc + (1 << 11)) >> 12;
   }
  }
 }


 if (VAR_10->curr_pos <= 0)
  VAR_10->curr_pos = VAR_10->taps;
 VAR_10->curr_pos--;

 if (VAR_10->adaption_mode & VAR_2)
  VAR_10->clean_nlp = VAR_12;



 return (int16_t) VAR_10->clean_nlp << 1;
}
