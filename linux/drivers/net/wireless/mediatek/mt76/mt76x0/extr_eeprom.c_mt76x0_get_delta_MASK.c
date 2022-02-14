
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cfg80211_chan_def {scalar_t__ width; TYPE_2__* chan; } ;
struct TYPE_3__ {struct cfg80211_chan_def chandef; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
typedef int s8 ;
struct TYPE_4__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s8 FUNC_2(struct mt76x02_dev *VAR_5)
{
 struct cfg80211_chan_def *VAR_6 = &VAR_5->mt76.chandef;
 u8 VAR_7;

 if (VAR_6->width == VAR_4) {
  VAR_7 = FUNC_0(VAR_5, VAR_0) >> 8;
 } else if (VAR_6->width == VAR_3) {
  u16 VAR_8;

  VAR_8 = FUNC_0(VAR_5, VAR_1);
  if (VAR_6->chan->band == VAR_2)
   VAR_7 = VAR_8 >> 8;
  else
   VAR_7 = VAR_8;
 } else {
  return 0;
 }

 return FUNC_1(VAR_7);
}
