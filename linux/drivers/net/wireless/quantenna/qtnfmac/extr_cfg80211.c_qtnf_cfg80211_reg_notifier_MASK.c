
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int * bands; } ;
struct regulatory_request {int * alpha2; int initiator; } ;
struct qtnf_wmac {int macid; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct qtnf_wmac*,int ) ;
 int FUNC_3 (struct qtnf_wmac*,struct regulatory_request*,int ) ;
 int FUNC_4 (struct wiphy*) ;
 struct qtnf_wmac* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static void FUNC_6(struct wiphy *VAR_1,
           struct regulatory_request *VAR_2)
{
 struct qtnf_wmac *VAR_3 = FUNC_5(VAR_1);
 enum nl80211_band VAR_4;
 int VAR_5;

 FUNC_0("MAC%u: initiator=%d alpha=%c%c\n", VAR_3->macid, VAR_2->initiator,
   VAR_2->alpha2[0], VAR_2->alpha2[1]);

 VAR_5 = FUNC_3(VAR_3, VAR_2, FUNC_4(VAR_1));
 if (VAR_5) {
  FUNC_1("MAC%u: failed to update region to %c%c: %d\n",
         VAR_3->macid, VAR_2->alpha2[0], VAR_2->alpha2[1], VAR_5);
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (!VAR_1->bands[VAR_4])
   continue;

  VAR_5 = FUNC_2(VAR_3, VAR_1->bands[VAR_4]);
  if (VAR_5)
   FUNC_1("MAC%u: failed to update band %u\n",
          VAR_3->macid, VAR_4);
 }
}
