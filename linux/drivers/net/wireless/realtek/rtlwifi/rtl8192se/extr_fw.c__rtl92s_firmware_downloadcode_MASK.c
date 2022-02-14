
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl_tcb_desc {int last_inipkt; int cmd_or_init; int queue_index; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_5,
  u8 *VAR_6, u32 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_4(VAR_5);
 struct sk_buff *VAR_9;
 struct rtl_tcb_desc *VAR_10;
 u16 VAR_11 = VAR_1;
 u16 VAR_12, VAR_13 = 0;
 u16 VAR_14 = 0;
 u8 VAR_15 = 0;

 FUNC_1(VAR_5);

 if (VAR_7 >= VAR_1) {
  FUNC_3("Size over FIRMWARE_CODE_SIZE!\n");
  return 0;
 }

 VAR_14 = 0;

 do {
  if ((VAR_7 - VAR_13) > VAR_11) {
   VAR_12 = VAR_11 + VAR_14;
  } else {
   VAR_12 = (u16)(VAR_7 - VAR_13 +
         VAR_14);
   VAR_15 = 1;
  }



  VAR_9 = FUNC_2(VAR_12);
  if (!VAR_9)
   return 0;
  FUNC_7(VAR_9, VAR_14);
  FUNC_6(VAR_9, VAR_6 + VAR_13,
        (u32)(VAR_12 - VAR_14));

  VAR_10 = (struct rtl_tcb_desc *)(VAR_9->cb);
  VAR_10->queue_index = VAR_4;
  VAR_10->cmd_or_init = VAR_0;
  VAR_10->last_inipkt = VAR_15;

  FUNC_0(VAR_5, VAR_9, VAR_15);

  VAR_13 += (VAR_12 - VAR_14);

 } while (VAR_13 < VAR_7);

 FUNC_5(VAR_8, VAR_3, VAR_2);

 return 1 ;
}
