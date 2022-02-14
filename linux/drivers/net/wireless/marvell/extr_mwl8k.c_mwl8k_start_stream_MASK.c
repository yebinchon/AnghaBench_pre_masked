
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_ampdu_stream {scalar_t__ state; int tid; TYPE_1__* sta; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_hw *VAR_1, struct mwl8k_ampdu_stream *VAR_2)
{
 int VAR_3;


 if (VAR_2->state != VAR_0)
  return 0;
 VAR_3 = FUNC_0(VAR_2->sta, VAR_2->tid, 0);
 if (VAR_3)
  FUNC_1(VAR_1->wiphy, "Failed to start stream for %pM %d: "
       "%d\n", VAR_2->sta->addr, VAR_2->tid, VAR_3);
 else
  FUNC_1(VAR_1->wiphy, "Started stream for %pM %d\n",
       VAR_2->sta->addr, VAR_2->tid);
 return VAR_3;
}
