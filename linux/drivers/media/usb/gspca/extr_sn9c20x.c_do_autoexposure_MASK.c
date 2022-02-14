
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sd {int exposure_step; int older_step; int old_step; TYPE_1__* exposure; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;
struct TYPE_3__ {scalar_t__ maximum; scalar_t__ minimum; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2, u16 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 s32 VAR_5 = FUNC_0(VAR_4->exposure);
 s32 VAR_6 = VAR_4->exposure->maximum - VAR_4->exposure_step;
 s32 VAR_7 = VAR_4->exposure->minimum + VAR_4->exposure_step;
 s16 VAR_8;






 if (VAR_3 < VAR_1) {
  if (VAR_5 > VAR_6)
   return;

  VAR_8 = VAR_5 + VAR_4->exposure_step;
  if (VAR_8 > VAR_6)
   VAR_8 = VAR_6;
  if (VAR_8 < VAR_7)
   VAR_8 = VAR_7;
  FUNC_1(VAR_4->exposure, VAR_8);

  VAR_4->older_step = VAR_4->old_step;
  VAR_4->old_step = 1;

  if (VAR_4->old_step ^ VAR_4->older_step)
   VAR_4->exposure_step /= 2;
  else
   VAR_4->exposure_step += 2;
 }
 if (VAR_3 > VAR_0) {
  if (VAR_5 < VAR_7)
   return;
  VAR_8 = VAR_5 - VAR_4->exposure_step;
  if (VAR_8 > VAR_6)
   VAR_8 = VAR_6;
  if (VAR_8 < VAR_7)
   VAR_8 = VAR_7;
  FUNC_1(VAR_4->exposure, VAR_8);
  VAR_4->older_step = VAR_4->old_step;
  VAR_4->old_step = 0;

  if (VAR_4->old_step ^ VAR_4->older_step)
   VAR_4->exposure_step /= 2;
  else
   VAR_4->exposure_step += 2;
 }
}
