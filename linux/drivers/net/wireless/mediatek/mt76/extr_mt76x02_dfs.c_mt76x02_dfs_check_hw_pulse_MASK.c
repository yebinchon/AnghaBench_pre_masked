
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt76x02_dfs_hw_pulse {int period; int w1; int engine; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {int region; TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;
struct TYPE_4__ {int center_freq; } ;






 int FUNC_0 (struct mt76x02_dev*) ;

__attribute__((used)) static bool FUNC_1(struct mt76x02_dev *VAR_0,
           struct mt76x02_dfs_hw_pulse *VAR_1)
{
 bool VAR_2 = 0;

 if (!VAR_1->period || !VAR_1->w1)
  return 0;

 switch (VAR_0->mt76.region) {
 case 130:
  if (VAR_1->engine > 3)
   break;

  if (VAR_1->engine == 3) {
   VAR_2 = FUNC_0(VAR_0);
   break;
  }


  if (VAR_1->w1 < 120)
   VAR_2 = (VAR_1->period >= 2900 &&
          (VAR_1->period <= 4700 ||
    VAR_1->period >= 6400) &&
          (VAR_1->period <= 6800 ||
    VAR_1->period >= 10200) &&
          VAR_1->period <= 61600);
  else if (VAR_1->w1 < 130)
   VAR_2 = (VAR_1->period >= 2900 &&
          VAR_1->period <= 61600);
  else
   VAR_2 = (VAR_1->period >= 3500 &&
          VAR_1->period <= 10100);
  break;
 case 131:
  if (VAR_1->engine >= 3)
   break;

  VAR_2 = (VAR_1->period >= 4900 &&
         (VAR_1->period <= 10200 ||
   VAR_1->period >= 12400) &&
         VAR_1->period <= 100100);
  break;
 case 129:
  if (VAR_0->mt76.chandef.chan->center_freq >= 5250 &&
      VAR_0->mt76.chandef.chan->center_freq <= 5350) {

   if (VAR_1->w1 <= 130)
    VAR_2 = (VAR_1->period >= 28360 &&
           (VAR_1->period <= 28700 ||
     VAR_1->period >= 76900) &&
           VAR_1->period <= 76940);
   break;
  }

  if (VAR_1->engine > 3)
   break;

  if (VAR_1->engine == 3) {
   VAR_2 = FUNC_0(VAR_0);
   break;
  }


  if (VAR_1->w1 < 120)
   VAR_2 = (VAR_1->period >= 2900 &&
          (VAR_1->period <= 4700 ||
    VAR_1->period >= 6400) &&
          (VAR_1->period <= 6800 ||
    VAR_1->period >= 27560) &&
          (VAR_1->period <= 27960 ||
    VAR_1->period >= 28360) &&
          (VAR_1->period <= 28700 ||
    VAR_1->period >= 79900) &&
          VAR_1->period <= 80100);
  else if (VAR_1->w1 < 130)
   VAR_2 = (VAR_1->period >= 2900 &&
          (VAR_1->period <= 10100 ||
    VAR_1->period >= 27560) &&
          (VAR_1->period <= 27960 ||
    VAR_1->period >= 28360) &&
          (VAR_1->period <= 28700 ||
    VAR_1->period >= 79900) &&
          VAR_1->period <= 80100);
  else
   VAR_2 = (VAR_1->period >= 3900 &&
          VAR_1->period <= 10100);
  break;
 case 128:
 default:
  return 0;
 }

 return VAR_2;
}
