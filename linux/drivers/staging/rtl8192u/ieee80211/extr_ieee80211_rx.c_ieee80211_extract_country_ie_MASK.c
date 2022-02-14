
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_network {scalar_t__ CountryIeLen; int CountryIeBuf; } ;
struct ieee80211_info_element {scalar_t__ len; int data; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 scalar_t__ FUNC_2 (struct ieee80211_device*,int *) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*,int *,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(
 struct ieee80211_device *VAR_0,
 struct ieee80211_info_element *VAR_1,
 struct ieee80211_network *VAR_2,
 u8 *VAR_3
)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_1->len != 0) {
   FUNC_5(VAR_2->CountryIeBuf, VAR_1->data, VAR_1->len);
   VAR_2->CountryIeLen = VAR_1->len;

   if (!FUNC_0(VAR_0)) {
    FUNC_4(VAR_0, VAR_3, VAR_1->len, VAR_1->data);
   }
  }






  if (FUNC_2(VAR_0, VAR_3)) {
   FUNC_3(VAR_0);
  }
 }

}
