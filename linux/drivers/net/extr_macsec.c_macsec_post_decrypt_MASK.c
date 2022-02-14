
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {int InPktsOK; int InPktsDelayed; int InPktsUnchecked; int InPktsInvalid; int InPktsNotValid; int InOctetsValidated; int InOctetsDecrypted; int InPktsLate; } ;
struct pcpu_rx_sc_stats {int syncp; TYPE_2__ stats; } ;
struct macsec_secy {scalar_t__ replay_window; scalar_t__ validate_frames; scalar_t__ replay_protect; } ;
struct macsec_rx_sa {scalar_t__ next_pn; int lock; TYPE_3__* stats; TYPE_1__* sc; } ;
struct macsec_eth_header {int tci_an; } ;
struct TYPE_8__ {int valid; struct macsec_rx_sa* rx_sa; } ;
struct TYPE_7__ {int InPktsOK; int InPktsInvalid; } ;
struct TYPE_5__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct macsec_eth_header* FUNC_0 (struct sk_buff*) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct pcpu_rx_sc_stats* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(struct sk_buff *VAR_5, struct macsec_secy *VAR_6, u32 VAR_7)
{
 struct macsec_rx_sa *VAR_8 = FUNC_1(VAR_5)->rx_sa;
 struct pcpu_rx_sc_stats *VAR_9 = FUNC_5(VAR_8->sc->stats);
 struct macsec_eth_header *VAR_10 = FUNC_0(VAR_5);
 u32 VAR_11 = 0;

 FUNC_2(&VAR_8->lock);
 if (VAR_8->next_pn >= VAR_6->replay_window)
  VAR_11 = VAR_8->next_pn - VAR_6->replay_window;




 if (VAR_6->replay_protect && VAR_7 < VAR_11) {
  FUNC_3(&VAR_8->lock);
  FUNC_6(&VAR_9->syncp);
  VAR_9->stats.InPktsLate++;
  FUNC_7(&VAR_9->syncp);
  return 0;
 }

 if (VAR_6->validate_frames != VAR_3) {
  FUNC_6(&VAR_9->syncp);
  if (VAR_10->tci_an & VAR_1)
   VAR_9->stats.InOctetsDecrypted += VAR_5->len;
  else
   VAR_9->stats.InOctetsValidated += VAR_5->len;
  FUNC_7(&VAR_9->syncp);
 }

 if (!FUNC_1(VAR_5)->valid) {
  FUNC_3(&VAR_8->lock);


  if (VAR_10->tci_an & VAR_0 ||
      VAR_6->validate_frames == VAR_4) {
   FUNC_6(&VAR_9->syncp);
   VAR_9->stats.InPktsNotValid++;
   FUNC_7(&VAR_9->syncp);
   return 0;
  }

  FUNC_6(&VAR_9->syncp);
  if (VAR_6->validate_frames == VAR_2) {
   VAR_9->stats.InPktsInvalid++;
   FUNC_4(VAR_8->stats->InPktsInvalid);
  } else if (VAR_7 < VAR_11) {
   VAR_9->stats.InPktsDelayed++;
  } else {
   VAR_9->stats.InPktsUnchecked++;
  }
  FUNC_7(&VAR_9->syncp);
 } else {
  FUNC_6(&VAR_9->syncp);
  if (VAR_7 < VAR_11) {
   VAR_9->stats.InPktsDelayed++;
  } else {
   VAR_9->stats.InPktsOK++;
   FUNC_4(VAR_8->stats->InPktsOK);
  }
  FUNC_7(&VAR_9->syncp);

  if (VAR_7 >= VAR_8->next_pn)
   VAR_8->next_pn = VAR_7 + 1;
  FUNC_3(&VAR_8->lock);
 }

 return 1;
}
