
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sd {scalar_t__ autogain_ignore_frames; size_t sensor; int exposure_knee; TYPE_1__* brightness; int avg_lum; } ;
struct gspca_dev {TYPE_3__* gain; TYPE_2__* exposure; } ;
typedef int s32 ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ maximum; } ;
struct TYPE_6__ {int maximum; } ;
struct TYPE_5__ {int val; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int,int) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int,int,int,int,int ) ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_0(&VAR_4->avg_lum);
 if (VAR_7 == -1)
  return;

 if (VAR_4->autogain_ignore_frames > 0) {
  VAR_4->autogain_ignore_frames--;
  return;
 }



 if (VAR_2[VAR_4->sensor].flags & VAR_1) {
  VAR_5 = 500;

  VAR_6 = 5000;
 } else {
  VAR_5 = 1500;
  VAR_6 = 13000;
 }

 if (VAR_4->brightness)
  VAR_6 = VAR_4->brightness->val * VAR_6 / 127;

 if (VAR_3->exposure->maximum < 500) {
  if (FUNC_1(VAR_3, VAR_7,
    VAR_6, VAR_5))
   VAR_4->autogain_ignore_frames = VAR_0;
 } else {
  int VAR_8 = (s32)VAR_3->gain->maximum * 9 / 10;
  if (FUNC_2(VAR_3, VAR_7, VAR_6,
    VAR_5, VAR_8, VAR_4->exposure_knee))
   VAR_4->autogain_ignore_frames = VAR_0;
 }
}
