
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sband; } ;
struct mt76_dev {TYPE_3__ sband_2g; TYPE_2__* hw; } ;
struct ieee80211_rate {int dummy; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int ** bands; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mt76_dev*,TYPE_3__*,int ,int ,struct ieee80211_rate*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct mt76_dev *VAR_2, struct ieee80211_rate *VAR_3,
     int VAR_4)
{
 VAR_2->hw->wiphy->bands[VAR_0] = &VAR_2->sband_2g.sband;

 return FUNC_1(VAR_2, &VAR_2->sband_2g,
          VAR_1,
          FUNC_0(VAR_1),
          VAR_3, VAR_4, 0);
}
