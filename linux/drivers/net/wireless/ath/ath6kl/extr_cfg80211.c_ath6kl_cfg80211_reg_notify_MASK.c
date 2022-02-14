
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {TYPE_1__** bands; } ;
struct regulatory_request {scalar_t__ user_reg_hint_type; int * alpha2; int initiator; scalar_t__ processed; scalar_t__ intersect; } ;
struct ath6kl {int wmi; } ;
struct TYPE_2__ {int n_bitrates; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,char*,char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,int ,int ,int *,int,int*) ;
 int FUNC_3 (int ,int *) ;
 struct ath6kl* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static void FUNC_5(struct wiphy *VAR_5,
           struct regulatory_request *VAR_6)
{
 struct ath6kl *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8[VAR_3];
 int VAR_9, VAR_10;

 FUNC_0(VAR_0,
     "cfg reg_notify %c%c%s%s initiator %d hint_type %d\n",
     VAR_6->alpha2[0], VAR_6->alpha2[1],
     VAR_6->intersect ? " intersect" : "",
     VAR_6->processed ? " processed" : "",
     VAR_6->initiator, VAR_6->user_reg_hint_type);

 if (VAR_6->user_reg_hint_type != VAR_2)
  return;

 VAR_9 = FUNC_3(VAR_7->wmi, VAR_6->alpha2);
 if (VAR_9) {
  FUNC_1("failed to set regdomain: %d\n", VAR_9);
  return;
 }







 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  if (VAR_5->bands[VAR_10])
   VAR_8[VAR_10] = (1 << VAR_5->bands[VAR_10]->n_bitrates) - 1;


 VAR_9 = FUNC_2(VAR_7->wmi, 0, VAR_4, 0,
           0, 0, VAR_1,
           0, ((void*)0), 0, VAR_8);
 if (VAR_9) {
  FUNC_1("failed to start scan for a regdomain change: %d\n",
      VAR_9);
  return;
 }
}
