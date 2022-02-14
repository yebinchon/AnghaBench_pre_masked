
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct sta_info {int dummy; } ;
struct ndis_80211_var_ie {int ElementID; scalar_t__ Length; int data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct ndis_80211_var_ie*) ;
 int FUNC_1 (struct adapter*,struct sta_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*,struct ndis_80211_var_ie*) ;
 int VAR_3 ;



 int FUNC_3 (struct adapter*,struct ndis_80211_var_ie*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct adapter*) ;

void FUNC_6(struct adapter *VAR_4, u8 *VAR_5, uint VAR_6, struct sta_info *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct ndis_80211_var_ie *VAR_10;

 VAR_9 = VAR_6 - (VAR_3 + VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_9;) {
  VAR_10 = (struct ndis_80211_var_ie *)(VAR_5 + (VAR_3 + VAR_0) + VAR_8);

  switch (VAR_10->ElementID) {
  case 128:

   if (!FUNC_4(VAR_10->data, VAR_2, 6) && VAR_10->Length == VAR_1)
    if (FUNC_2(VAR_4, VAR_10))
     FUNC_5(VAR_4);

   break;

  case 129:

   FUNC_3(VAR_4, VAR_10);
   break;

  case 130:
   FUNC_0(VAR_4, VAR_10);
   FUNC_1(VAR_4, VAR_7);
   break;

  default:
   break;
  }

  VAR_8 += (VAR_10->Length + 2);
 }
}
