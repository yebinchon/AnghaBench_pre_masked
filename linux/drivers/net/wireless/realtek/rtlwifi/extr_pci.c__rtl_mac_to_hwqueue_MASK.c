
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;
typedef int __le16 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct ieee80211_hdr* FUNC_7 (struct sk_buff*) ;
 struct rtl_hal* FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 size_t FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static u8 FUNC_12(struct ieee80211_hw *VAR_6, struct sk_buff *VAR_7)
{
 struct rtl_hal *VAR_8 = FUNC_8(FUNC_9(VAR_6));
 __le16 VAR_9 = FUNC_6(VAR_7);
 u8 VAR_10 = FUNC_10(VAR_7);
 struct ieee80211_hdr *VAR_11;

 if (FUNC_11(FUNC_0(VAR_9)))
  return VAR_0;
 if (FUNC_2(VAR_9) || FUNC_1(VAR_9))
  return VAR_4;
 if (VAR_8->hw_type == VAR_1)
  if (FUNC_3(VAR_9))
   return VAR_3;
 if (VAR_8->hw_type == VAR_2) {
  VAR_11 = FUNC_7(VAR_7);

  if (FUNC_5(VAR_11->addr1) ||
      FUNC_4(VAR_11->addr1))
   return VAR_3;
 }

 return VAR_5[VAR_10];
}
