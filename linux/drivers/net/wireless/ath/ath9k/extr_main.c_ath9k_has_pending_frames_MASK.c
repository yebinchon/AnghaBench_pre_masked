
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {size_t mac80211_qnum; int axq_lock; scalar_t__ axq_depth; } ;
struct ath_softc {TYPE_1__* cur_chan; } ;
struct ath_acq {int acq_old; int acq_new; } ;
struct TYPE_2__ {struct ath_acq* acq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ath_softc *VAR_0, struct ath_txq *VAR_1,
         bool VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_1->axq_lock);

 if (VAR_1->axq_depth) {
  VAR_3 = 1;
  goto out;
 }

 if (!VAR_2)
  goto out;

 if (VAR_1->mac80211_qnum >= 0) {
  struct ath_acq *VAR_4;

  VAR_4 = &VAR_0->cur_chan->acq[VAR_1->mac80211_qnum];
  if (!FUNC_0(&VAR_4->acq_new) || !FUNC_0(&VAR_4->acq_old))
   VAR_3 = 1;
 }
out:
 FUNC_2(&VAR_1->axq_lock);
 return VAR_3;
}
