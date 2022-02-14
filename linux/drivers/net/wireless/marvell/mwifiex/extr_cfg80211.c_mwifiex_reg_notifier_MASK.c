
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int initiator; int * alpha2; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {char* country_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (char*,int *,int) ;
 struct mwifiex_adapter* FUNC_1 (struct wiphy*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,int,...) ;
 int FUNC_3 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_4 (struct mwifiex_adapter*,int ) ;
 int FUNC_5 (struct wiphy*) ;
 int FUNC_6 (struct wiphy*) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;

__attribute__((used)) static void FUNC_8(struct wiphy *VAR_3,
     struct regulatory_request *VAR_4)
{
 struct mwifiex_adapter *VAR_5 = FUNC_1(VAR_3);
 struct mwifiex_private *VAR_6 = FUNC_4(VAR_5,
       VAR_2);
 FUNC_2(VAR_5, VAR_1,
      "info: cfg80211 regulatory domain callback for %c%c\n",
      VAR_4->alpha2[0], VAR_4->alpha2[1]);
 FUNC_5(VAR_3);

 switch (VAR_4->initiator) {
 case 129:
 case 131:
 case 128:
 case 130:
  break;
 default:
  FUNC_2(VAR_5, VAR_0,
       "unknown regdom initiator: %d\n",
       VAR_4->initiator);
  return;
 }


 if (FUNC_7(VAR_4->alpha2, "00", 2) &&
     FUNC_7(VAR_4->alpha2, VAR_5->country_code,
      sizeof(VAR_4->alpha2))) {
  FUNC_0(VAR_5->country_code, VAR_4->alpha2,
         sizeof(VAR_4->alpha2));
  FUNC_6(VAR_3);
  FUNC_3(VAR_6);
 }
}
