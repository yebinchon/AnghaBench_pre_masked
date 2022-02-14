
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_4__ {scalar_t__ region; struct cfg80211_chan_def chandef; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ) ;
 int FUNC_8 (struct mt76x02_dev*,int ) ;

void FUNC_9(struct mt76x02_dev *VAR_7)
{
 struct cfg80211_chan_def *VAR_8 = &VAR_7->mt76.chandef;

 if ((VAR_8->chan->flags & VAR_2) &&
     VAR_7->mt76.region != VAR_6) {
  FUNC_4(VAR_7);
  FUNC_5(VAR_7);

  FUNC_6(VAR_7, 1);

  FUNC_8(VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_4,
          VAR_5, 1);
 } else {

  FUNC_3(VAR_7, FUNC_0(VAR_0, 0), 0);

  FUNC_3(VAR_7, FUNC_0(VAR_0, 1), 0xf);
  if (FUNC_1(&VAR_7->mt76) == 0x7610 ||
      FUNC_1(&VAR_7->mt76) == 0x7630)
   FUNC_3(VAR_7, FUNC_0(VAR_1, 11), 0xfde8081);
  else
   FUNC_3(VAR_7, FUNC_0(VAR_1, 11), 0);

  FUNC_7(VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_4,
          VAR_5, 0);
 }
}
