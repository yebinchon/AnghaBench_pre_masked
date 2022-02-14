
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct mwifiex_802_11d_domain_reg {int* country_code; int no_of_triplet; scalar_t__ triplet; } ;
struct ieee80211_country_ie_triplet {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_2__ {int* country_code; struct mwifiex_802_11d_domain_reg domain_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (struct cfg80211_bss*,int ) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*,int ,int ,int ,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_8(struct mwifiex_private *VAR_7,
          struct cfg80211_bss *VAR_8)
{
 const u8 *VAR_9;
 u8 VAR_10;
 struct mwifiex_802_11d_domain_reg *VAR_11 =
     &VAR_7->adapter->domain_reg;

 FUNC_5();
 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (!VAR_9) {
  FUNC_6();
  return 0;
 }

 VAR_10 = VAR_9[1];
 if (VAR_10 < VAR_3) {
  FUNC_6();
  return 0;
 }

 if (!FUNC_7(VAR_7->adapter->country_code, &VAR_9[2], 2)) {
  FUNC_6();
  FUNC_2(VAR_7->adapter, VAR_5,
       "11D: skip setting domain info in FW\n");
  return 0;
 }
 FUNC_1(VAR_7->adapter->country_code, &VAR_9[2], 2);

 VAR_11->country_code[0] = VAR_9[2];
 VAR_11->country_code[1] = VAR_9[3];
 VAR_11->country_code[2] = ' ';

 VAR_10 -= VAR_4;

 VAR_11->no_of_triplet =
  VAR_10 / sizeof(struct ieee80211_country_ie_triplet);

 FUNC_1((u8 *)VAR_11->triplet,
        &VAR_9[2] + VAR_4, VAR_10);

 FUNC_6();

 if (FUNC_4(VAR_7, VAR_2,
        VAR_1, 0, ((void*)0), 0)) {
  FUNC_2(VAR_7->adapter, VAR_0,
       "11D: setting domain info in FW fail\n");
  return -1;
 }

 FUNC_3(VAR_7);

 return 0;
}
