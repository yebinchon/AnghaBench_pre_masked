
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct ieee80211_info_element {int dummy; } ;
struct ieee80211_authentication {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline u16 FUNC_3(struct sk_buff *VAR_3, u8 **VAR_4, int *VAR_5)
{
 struct ieee80211_authentication *VAR_6;
 u8 *VAR_7;
 if (VAR_3->len < (sizeof(struct ieee80211_authentication) - sizeof(struct ieee80211_info_element))) {
  FUNC_0("invalid len in auth resp: %d\n", VAR_3->len);
  return 0xcafe;
 }
 *VAR_4 = ((void*)0);
 VAR_6 = (struct ieee80211_authentication *)VAR_3->data;
 if (VAR_3->len > (sizeof(struct ieee80211_authentication) + 3)) {
  VAR_7 = VAR_3->data + sizeof(struct ieee80211_authentication);

  if (*(VAR_7++) == VAR_2) {
   *VAR_5 = *(VAR_7++);
   *VAR_4 = FUNC_1(VAR_7, *VAR_5, VAR_1);
   if (!*VAR_4)
    return -VAR_0;
  }
 }

 return FUNC_2(VAR_6->status);
}
