
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_7__ {void** agc_gain_init; int avg_rssi_all; int low_gain; void** agc_gain_cur; void* agc_gain_adjust; } ;
struct TYPE_6__ {scalar_t__ width; TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_3__ cal; TYPE_4__ mt76; } ;
struct TYPE_5__ {scalar_t__ band; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_6 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;

void FUNC_9(struct mt76x02_dev *VAR_5)
{
 u8 *VAR_6 = VAR_5->cal.agc_gain_init;
 u8 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 bool VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_5->cal.avg_rssi_all = FUNC_1(&VAR_5->mt76);
 if (!VAR_5->cal.avg_rssi_all)
  VAR_5->cal.avg_rssi_all = -75;

 VAR_12 = (VAR_5->cal.avg_rssi_all > FUNC_5(VAR_5)) +
  (VAR_5->cal.avg_rssi_all > FUNC_4(VAR_5));

 VAR_11 = VAR_5->cal.low_gain < 0 ||
        (VAR_5->cal.low_gain & 2) ^ (VAR_12 & 2);
 VAR_5->cal.low_gain = VAR_12;

 if (!VAR_11) {
  if (FUNC_6(VAR_5))
   FUNC_8(VAR_5);
  return;
 }

 if (VAR_5->mt76.chandef.width == VAR_3) {
  FUNC_3(VAR_5, FUNC_0(VAR_4, 14), 0x00560211);
  VAR_13 = FUNC_2(VAR_5, FUNC_0(VAR_0, 26)) & ~0xf;
  if (VAR_12 == 2)
   VAR_13 |= 0x3;
  else
   VAR_13 |= 0x5;
  FUNC_3(VAR_5, FUNC_0(VAR_0, 26), VAR_13);
 } else {
  FUNC_3(VAR_5, FUNC_0(VAR_4, 14), 0x00560423);
 }

 if (FUNC_7(VAR_5))
  VAR_7 = 10;
 else
  VAR_7 = 14;

 VAR_10 = 0x2121262c;
 if (VAR_5->mt76.chandef.chan->band == VAR_2)
  VAR_9 = 0x11111516;
 else if (VAR_12 == 2)
  VAR_9 = VAR_10 = 0x08080808;
 else if (VAR_5->mt76.chandef.width == VAR_3)
  VAR_9 = 0x10101014;
 else
  VAR_9 = 0x11111116;

 if (VAR_12 == 2) {
  FUNC_3(VAR_5, FUNC_0(VAR_4, 18), 0xf000a990);
  FUNC_3(VAR_5, FUNC_0(VAR_0, 35), 0x08080808);
  FUNC_3(VAR_5, FUNC_0(VAR_0, 37), 0x08080808);
  VAR_8 = VAR_7;
  VAR_5->cal.agc_gain_adjust = 0;
 } else {
  FUNC_3(VAR_5, FUNC_0(VAR_4, 18), 0xf000a991);
  VAR_8 = 0;
  VAR_5->cal.agc_gain_adjust = VAR_7;
 }

 FUNC_3(VAR_5, FUNC_0(VAR_0, 35), VAR_9);
 FUNC_3(VAR_5, FUNC_0(VAR_0, 37), VAR_10);

 VAR_5->cal.agc_gain_cur[0] = VAR_6[0] - VAR_8;
 VAR_5->cal.agc_gain_cur[1] = VAR_6[1] - VAR_8;
 FUNC_8(VAR_5);


 FUNC_2(VAR_5, VAR_1);
}
