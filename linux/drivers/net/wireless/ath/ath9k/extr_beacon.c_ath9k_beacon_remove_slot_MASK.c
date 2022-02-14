
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath_vif {size_t av_bslot; struct ath_buf* av_bcbuf; } ;
struct TYPE_2__ {int bbuf; int ** bslot; } ;
struct ath_softc {int bcon_tasklet; TYPE_1__ beacon; int dev; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_buf {int list; scalar_t__ bf_buf_addr; struct sk_buff* bf_mpdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ath_softc *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_2->sc_ah);
 struct ath_vif *VAR_5 = (void *)VAR_3->drv_priv;
 struct ath_buf *VAR_6 = VAR_5->av_bcbuf;

 FUNC_1(VAR_4, VAR_0, "Removing interface at beacon slot: %d\n",
  VAR_5->av_bslot);

 FUNC_5(&VAR_2->bcon_tasklet);

 if (VAR_6 && VAR_6->bf_mpdu) {
  struct sk_buff *VAR_7 = VAR_6->bf_mpdu;
  FUNC_3(VAR_2->dev, VAR_6->bf_buf_addr,
     VAR_7->len, VAR_1);
  FUNC_2(VAR_7);
  VAR_6->bf_mpdu = ((void*)0);
  VAR_6->bf_buf_addr = 0;
 }

 VAR_5->av_bcbuf = ((void*)0);
 VAR_2->beacon.bslot[VAR_5->av_bslot] = ((void*)0);
 FUNC_4(&VAR_6->list, &VAR_2->beacon.bbuf);

 FUNC_6(&VAR_2->bcon_tasklet);
}
