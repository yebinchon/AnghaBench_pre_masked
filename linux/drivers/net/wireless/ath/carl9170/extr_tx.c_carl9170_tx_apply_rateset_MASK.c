
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int flags; int count; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ar9170 {int dummy; } ;
struct TYPE_6__ {int* ri; void** rr; } ;
struct TYPE_5__ {int mac_control; void* phy_control; } ;
struct _carl9170_tx_superframe {TYPE_3__ s; TYPE_2__ f; } ;
typedef void* __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct ar9170*,struct ieee80211_tx_rate*) ;
 void* FUNC_3 (struct ar9170*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*) ;
 scalar_t__ FUNC_4 (struct ar9170*,struct ieee80211_tx_rate*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_11,
          struct ieee80211_tx_info *VAR_12,
          struct sk_buff *VAR_13)
{
 struct ieee80211_tx_rate *VAR_14;
 struct ieee80211_tx_info *VAR_15;
 struct _carl9170_tx_superframe *VAR_16 = (void *) VAR_13->data;
 int VAR_17;
 bool VAR_18;
 bool VAR_19;

 VAR_15 = FUNC_0(VAR_13);
 VAR_18 = !!(VAR_15->flags & VAR_7);
 VAR_19 = !!(VAR_15->flags & VAR_8);





 VAR_15->flags |= (VAR_12->flags & VAR_9);





 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  __le32 VAR_20;

  VAR_14 = &VAR_12->control.rates[VAR_17];
  if (VAR_14->idx < 0)
   break;

  VAR_20 = FUNC_3(VAR_11, VAR_15, VAR_14);
  if (VAR_17 == 0) {
   __le16 VAR_21 = FUNC_5(0);


   VAR_16->f.phy_control = VAR_20;

   if (VAR_18 && VAR_14->flags & VAR_10)
    VAR_21 |= FUNC_5(VAR_0);

   if (FUNC_4(VAR_11, VAR_14, VAR_18, VAR_19))
    VAR_21 |= FUNC_5(VAR_2);
   else if (FUNC_2(VAR_11, VAR_14))
    VAR_21 |= FUNC_5(VAR_1);

   VAR_16->f.mac_control |= VAR_21;
  } else {



   VAR_16->s.rr[VAR_17 - 1] = VAR_20;
  }

  FUNC_1(VAR_6, VAR_16->s.ri[VAR_17],
   VAR_14->count);

  if (FUNC_4(VAR_11, VAR_14, VAR_18, VAR_19))
   VAR_16->s.ri[VAR_17] |= (VAR_2 <<
    VAR_5);
  else if (FUNC_2(VAR_11, VAR_14))
   VAR_16->s.ri[VAR_17] |= (VAR_1 <<
    VAR_5);

  if (VAR_18 && (VAR_14->flags & VAR_10))
   VAR_16->s.ri[VAR_17] |= VAR_4;
 }
}
