
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int avg_rssi_all; int low_gain; int agc_gain_adjust; scalar_t__* agc_gain_init; scalar_t__* agc_gain_cur; } ;
struct mt76x02_dev {TYPE_1__ cal; int mt76; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;

__attribute__((used)) static void
FUNC_6(struct mt76x02_dev *VAR_1)
{
 bool VAR_2;
 u8 VAR_3;
 int VAR_4;

 VAR_1->cal.avg_rssi_all = FUNC_0(&VAR_1->mt76);
 if (!VAR_1->cal.avg_rssi_all)
  VAR_1->cal.avg_rssi_all = -75;

 VAR_4 = (VAR_1->cal.avg_rssi_all > FUNC_3(VAR_1)) +
  (VAR_1->cal.avg_rssi_all > FUNC_2(VAR_1));

 VAR_2 = VAR_1->cal.low_gain < 0 ||
        (VAR_1->cal.low_gain & 2) ^ (VAR_4 & 2);
 VAR_1->cal.low_gain = VAR_4;

 if (!VAR_2) {
  if (FUNC_4(VAR_1))
   FUNC_5(VAR_1);
  return;
 }

 VAR_1->cal.agc_gain_adjust = (VAR_4 == 2) ? 0 : 10;
 VAR_3 = (VAR_4 == 2) ? 10 : 0;

 VAR_1->cal.agc_gain_cur[0] = VAR_1->cal.agc_gain_init[0] - VAR_3;
 FUNC_5(VAR_1);


 FUNC_1(VAR_1, VAR_0);
}
