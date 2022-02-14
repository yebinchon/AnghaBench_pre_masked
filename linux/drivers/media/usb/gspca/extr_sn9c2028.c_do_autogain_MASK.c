
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sd {TYPE_1__* gain; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {scalar_t__ maximum; scalar_t__ minimum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2, int VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 s32 VAR_5 = FUNC_0(VAR_4->gain);

 if (VAR_3 == -1)
  return;

 if (VAR_3 < VAR_1) {
  if (VAR_5 == VAR_4->gain->maximum)
   return;
  VAR_5++;
  FUNC_1(VAR_4->gain, VAR_5);
 }
 if (VAR_3 > VAR_0) {
  if (VAR_5 == VAR_4->gain->minimum)
   return;
  VAR_5--;
  FUNC_1(VAR_4->gain, VAR_5);
 }

}
