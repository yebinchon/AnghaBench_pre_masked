
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {scalar_t__ width; } ;
struct TYPE_2__ {struct cfg80211_chan_def chandef; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt7615_dev*,int ) ;
 int FUNC_1 (struct mt7615_dev*,int ,int ,int ,int ) ;

int FUNC_2(struct mt7615_dev *VAR_6)
{
 struct cfg80211_chan_def *VAR_7 = &VAR_6->mt76.chandef;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_0,
     VAR_2, 0);
 if (VAR_8 < 0)
  return VAR_8;



 VAR_8 = FUNC_0(VAR_6, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7->width == VAR_3 ||
     VAR_7->width == VAR_4) {
  VAR_8 = FUNC_0(VAR_6, VAR_1);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
