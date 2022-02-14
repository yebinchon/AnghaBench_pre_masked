
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_status {scalar_t__ mactime; } ;
struct TYPE_3__ {int timestamp; int capab_info; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ath5k_hw {scalar_t__ nexttbtt; int bintval; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 scalar_t__ FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ath5k_hw *VAR_2, struct sk_buff *VAR_3,
       struct ieee80211_rx_status *VAR_4)
{
 u64 VAR_5, VAR_6;
 u32 VAR_7;
 struct ieee80211_mgmt *VAR_8 = (struct ieee80211_mgmt *)VAR_3->data;

 if (FUNC_5(VAR_8->u.beacon.capab_info) & VAR_1) {





  VAR_5 = FUNC_4(VAR_2);
  VAR_6 = FUNC_6(VAR_8->u.beacon.timestamp);
  VAR_7 = FUNC_1(VAR_5);

  FUNC_0(VAR_2, VAR_0,
   "beacon %llx mactime %llx (diff %lld) tsf now %llx\n",
   (unsigned long long)VAR_6,
   (unsigned long long)VAR_4->mactime,
   (unsigned long long)(VAR_4->mactime - VAR_6),
   (unsigned long long)VAR_5);
  if (VAR_6 > VAR_4->mactime) {
   FUNC_0(VAR_2, VAR_0,
    "fixing mactime from %llx to %llx\n",
    (unsigned long long)VAR_4->mactime,
    (unsigned long long)VAR_5);
   VAR_4->mactime = VAR_5;
  }







  if (VAR_7 >= VAR_2->nexttbtt)
   FUNC_2(VAR_2, VAR_6);




  if (!FUNC_3(VAR_2, VAR_2->bintval)) {
   FUNC_2(VAR_2, VAR_6);
   FUNC_0(VAR_2, VAR_0,
    "fixed beacon timers after beacon receive\n");
  }
 }
}
