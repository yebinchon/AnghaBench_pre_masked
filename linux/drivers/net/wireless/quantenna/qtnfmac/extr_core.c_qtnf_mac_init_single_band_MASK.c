
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {TYPE_1__** bands; } ;
struct qtnf_wmac {int macid; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct qtnf_wmac*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_2,
         struct qtnf_wmac *VAR_3,
         enum nl80211_band VAR_4)
{
 int VAR_5;

 VAR_2->bands[VAR_4] = FUNC_0(sizeof(*VAR_2->bands[VAR_4]), VAR_1);
 if (!VAR_2->bands[VAR_4])
  return -VAR_0;

 VAR_2->bands[VAR_4]->band = VAR_4;

 VAR_5 = FUNC_3(VAR_3, VAR_2->bands[VAR_4]);
 if (VAR_5) {
  FUNC_1("MAC%u: band %u: failed to get chans info: %d\n",
         VAR_3->macid, VAR_4, VAR_5);
  return VAR_5;
 }

 FUNC_2(VAR_2->bands[VAR_4]);

 return 0;
}
