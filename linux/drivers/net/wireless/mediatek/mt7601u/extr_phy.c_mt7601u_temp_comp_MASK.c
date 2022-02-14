
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7601u_dev {int raw_temp; int curr_temp; int dpd_temp; int pll_lock_protect; int dev; TYPE_1__* ee; } ;
struct TYPE_2__ {int ref_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt7601u_dev*,int ,char*) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int) ;
 int FUNC_3 (struct mt7601u_dev*,int,int,int) ;
 int FUNC_4 (struct mt7601u_dev*,int,int,int,int) ;
 int FUNC_5 (struct mt7601u_dev*,int,int,int) ;
 int FUNC_6 (struct mt7601u_dev*) ;

__attribute__((used)) static int FUNC_7(struct mt7601u_dev *VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 400, VAR_10 = -200;

 VAR_8 = (VAR_5->raw_temp - VAR_5->ee->ref_temp) * VAR_1;
 VAR_5->curr_temp = VAR_8;


 if (VAR_8 - VAR_5->dpd_temp > 450 || VAR_8 - VAR_5->dpd_temp < -450) {
  VAR_5->dpd_temp = VAR_8;

  VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_5->dpd_temp);
  if (VAR_7)
   return VAR_7;

  FUNC_6(VAR_5);

  FUNC_0(VAR_5->dev, "Recalibrate DPD\n");
 }


 if (VAR_8 < -50 && !VAR_5->pll_lock_protect) {
  VAR_5->pll_lock_protect = 1;

  FUNC_5(VAR_5, 4, 4, 6);
  FUNC_3(VAR_5, 4, 10, 0x30);

  FUNC_0(VAR_5->dev, "PLL lock protect on - too cold\n");
 } else if (VAR_8 > 50 && VAR_5->pll_lock_protect) {
  VAR_5->pll_lock_protect = 0;

  FUNC_5(VAR_5, 4, 4, 0);
  FUNC_4(VAR_5, 4, 10, 0x30, 0x10);

  FUNC_0(VAR_5->dev, "PLL lock protect off\n");
 }

 if (VAR_6) {
  VAR_9 -= 50;
  VAR_10 -= 50;
 }


 if (VAR_8 > VAR_9)
  return FUNC_1(VAR_5, VAR_2, "high");
 else if (VAR_8 > VAR_10)
  return FUNC_1(VAR_5, VAR_4, "normal");
 else
  return FUNC_1(VAR_5, VAR_3, "low");
}
