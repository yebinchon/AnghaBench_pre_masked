
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; } ;
struct TYPE_2__ {size_t t_rb; size_t h_rb; int * tstamp; } ;
struct ath_dynack {int qlock; TYPE_1__ ack_rbf; int enabled; } ;
struct ath_hw {struct ath_dynack dynack; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,size_t,size_t) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ath_hw *VAR_2, struct sk_buff *VAR_3,
         u32 VAR_4)
{
 struct ath_dynack *VAR_5 = &VAR_2->dynack;
 struct ath_common *VAR_6 = FUNC_1(VAR_2);
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_3->data;

 if (!VAR_5->enabled || !FUNC_3(VAR_2, VAR_7->addr1))
  return;

 FUNC_5(&VAR_5->qlock);
 VAR_5->ack_rbf.tstamp[VAR_5->ack_rbf.t_rb] = VAR_4;

 FUNC_0(VAR_5->ack_rbf.t_rb, VAR_0);
 if (VAR_5->ack_rbf.t_rb == VAR_5->ack_rbf.h_rb)
  FUNC_0(VAR_5->ack_rbf.h_rb, VAR_0);

 FUNC_2(VAR_6, VAR_1, "rx sample %u [h %u-t %u]\n",
  VAR_4, VAR_5->ack_rbf.h_rb, VAR_5->ack_rbf.t_rb);

 FUNC_4(VAR_2);

 FUNC_6(&VAR_5->qlock);
}
