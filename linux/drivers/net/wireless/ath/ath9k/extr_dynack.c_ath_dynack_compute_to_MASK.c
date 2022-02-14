
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ts_info {scalar_t__ tstamp; scalar_t__ dur; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ath_node {int ackto; } ;
struct TYPE_6__ {size_t h_rb; size_t t_rb; scalar_t__* tstamp; } ;
struct TYPE_5__ {size_t h_rb; size_t t_rb; TYPE_1__* addr; struct ts_info* ts; } ;
struct ath_dynack {TYPE_3__ ack_rbf; TYPE_2__ st_rbf; scalar_t__ lto; } ;
struct ath_hw {int hw; struct ath_dynack dynack; } ;
struct TYPE_4__ {int * h_src; int * h_dest; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 struct ieee80211_sta* FUNC_6 (int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_4)
{
 struct ath_dynack *VAR_5 = &VAR_4->dynack;
 u32 VAR_6, VAR_7, VAR_8;
 struct ieee80211_sta *VAR_9;
 struct ts_info *VAR_10;
 struct ath_node *VAR_11;
 u8 *VAR_12, *VAR_13;

 FUNC_7();

 VAR_8 = FUNC_5(VAR_4);
 while (VAR_5->st_rbf.h_rb != VAR_5->st_rbf.t_rb &&
        VAR_5->ack_rbf.h_rb != VAR_5->ack_rbf.t_rb) {
  VAR_7 = VAR_5->ack_rbf.tstamp[VAR_5->ack_rbf.h_rb];
  VAR_10 = &VAR_5->st_rbf.ts[VAR_5->st_rbf.h_rb];
  VAR_12 = VAR_5->st_rbf.addr[VAR_5->st_rbf.h_rb].h_dest;
  VAR_13 = VAR_5->st_rbf.addr[VAR_5->st_rbf.h_rb].h_src;

  FUNC_2(FUNC_1(VAR_4), VAR_2,
   "ack_ts %u st_ts %u st_dur %u [%u-%u]\n",
   VAR_7, VAR_10->tstamp, VAR_10->dur,
   VAR_5->ack_rbf.h_rb, VAR_5->st_rbf.h_rb);

  if (VAR_7 > VAR_10->tstamp + VAR_10->dur) {
   VAR_6 = VAR_7 - VAR_10->tstamp - VAR_10->dur;

   if (VAR_6 < VAR_8) {
    VAR_9 = FUNC_6(VAR_4->hw, VAR_12,
           VAR_13);
    if (VAR_9) {
     VAR_11 = (struct ath_node *)VAR_9->drv_priv;
     VAR_11->ackto = FUNC_4(VAR_11->ackto,
            VAR_6);
     FUNC_2(FUNC_1(VAR_4), VAR_2,
      "%pM to %d [%u]\n", VAR_12,
      VAR_11->ackto, VAR_6);
     if (FUNC_9(VAR_5->lto)) {
      FUNC_3(VAR_4);
      VAR_5->lto = VAR_3 + VAR_1;
     }
    }
    FUNC_0(VAR_5->ack_rbf.h_rb, VAR_0);
   }
   FUNC_0(VAR_5->st_rbf.h_rb, VAR_0);
  } else {
   FUNC_0(VAR_5->ack_rbf.h_rb, VAR_0);
  }
 }

 FUNC_8();
}
