
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gspca_dev {int exp_too_low_cnt; int exp_too_high_cnt; TYPE_1__* exposure; TYPE_1__* gain; TYPE_1__* autogain; } ;
typedef int s32 ;
struct TYPE_3__ {int maximum; int minimum; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(
   struct gspca_dev *VAR_1,
   int VAR_2,
   int VAR_3,
   int VAR_4)
{
 s32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0;

 if (FUNC_1(VAR_1->autogain) == 0)
  return 0;

 VAR_8 = VAR_7 = FUNC_1(VAR_1->gain);
 VAR_10 = VAR_9 = FUNC_1(VAR_1->exposure);

 VAR_5 = (s32)(VAR_1->gain->maximum - VAR_1->gain->minimum) /
      5 * 2 + VAR_1->gain->minimum;
 VAR_6 = (s32)(VAR_1->gain->maximum - VAR_1->gain->minimum) /
      5 * 4 + VAR_1->gain->minimum;



 VAR_11 = (VAR_3 - VAR_2) / VAR_4;

 FUNC_0(VAR_1, VAR_0, "autogain: lum: %d, desired: %d, steps: %d\n",
    VAR_2, VAR_3, VAR_11);

 if ((VAR_7 + VAR_11) > VAR_6 &&
     VAR_9 < VAR_1->exposure->maximum) {
  VAR_7 = VAR_6;
  VAR_1->exp_too_low_cnt++;
  VAR_1->exp_too_high_cnt = 0;
 } else if ((VAR_7 + VAR_11) < VAR_5 &&
     VAR_9 > VAR_1->exposure->minimum) {
  VAR_7 = VAR_5;
  VAR_1->exp_too_high_cnt++;
  VAR_1->exp_too_low_cnt = 0;
 } else {
  VAR_7 += VAR_11;
  if (VAR_7 > VAR_1->gain->maximum)
   VAR_7 = VAR_1->gain->maximum;
  else if (VAR_7 < VAR_1->gain->minimum)
   VAR_7 = VAR_1->gain->minimum;
  VAR_1->exp_too_high_cnt = 0;
  VAR_1->exp_too_low_cnt = 0;
 }

 if (VAR_1->exp_too_high_cnt > 3) {
  VAR_9--;
  VAR_1->exp_too_high_cnt = 0;
 } else if (VAR_1->exp_too_low_cnt > 3) {
  VAR_9++;
  VAR_1->exp_too_low_cnt = 0;
 }

 if (VAR_7 != VAR_8) {
  FUNC_2(VAR_1->gain, VAR_7);
  VAR_12 = 1;
 }
 if (VAR_9 != VAR_10) {
  FUNC_2(VAR_1->exposure, VAR_9);
  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_0(VAR_1, VAR_0, "autogain: changed gain: %d, expo: %d\n",
     VAR_7, VAR_9);
 return VAR_12;
}
