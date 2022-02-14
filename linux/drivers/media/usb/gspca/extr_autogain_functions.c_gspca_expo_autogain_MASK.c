
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gspca_dev {TYPE_1__* exposure; TYPE_1__* gain; TYPE_1__* autogain; } ;
typedef int s32 ;
struct TYPE_3__ {int default_value; int minimum; int maximum; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int,...) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(
   struct gspca_dev *VAR_1,
   int VAR_2,
   int VAR_3,
   int VAR_4,
   int VAR_5,
   int VAR_6)
{
 s32 VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 if (FUNC_2(VAR_1->autogain) == 0)
  return 0;

 VAR_8 = VAR_7 = FUNC_2(VAR_1->gain);
 VAR_10 = VAR_9 = FUNC_2(VAR_1->exposure);



 VAR_12 = FUNC_0(VAR_3 - VAR_2) / VAR_4;

 FUNC_1(VAR_1, VAR_0, "autogain: lum: %d, desired: %d, steps: %d\n",
    VAR_2, VAR_3, VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  if (VAR_2 > VAR_3) {
   if (VAR_7 > VAR_5)
    VAR_7--;
   else if (VAR_9 > VAR_6)
    VAR_9--;
   else if (VAR_7 > VAR_1->gain->default_value)
    VAR_7--;
   else if (VAR_9 > VAR_1->exposure->minimum)
    VAR_9--;
   else if (VAR_7 > VAR_1->gain->minimum)
    VAR_7--;
   else
    break;
  } else {
   if (VAR_7 < VAR_1->gain->default_value)
    VAR_7++;
   else if (VAR_9 < VAR_6)
    VAR_9++;
   else if (VAR_7 < VAR_5)
    VAR_7++;
   else if (VAR_9 < VAR_1->exposure->maximum)
    VAR_9++;
   else if (VAR_7 < VAR_1->gain->maximum)
    VAR_7++;
   else
    break;
  }
 }

 if (VAR_7 != VAR_8) {
  FUNC_3(VAR_1->gain, VAR_7);
  VAR_13 = 1;
 }
 if (VAR_9 != VAR_10) {
  FUNC_3(VAR_1->exposure, VAR_9);
  VAR_13 = 1;
 }

 if (VAR_13)
  FUNC_1(VAR_1, VAR_0, "autogain: changed gain: %d, expo: %d\n",
     VAR_7, VAR_9);
 return VAR_13;
}
