
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int ed_strong_signal; int ed_trigger; int ed_time; int ed_monitor; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct mt7603_dev*,int) ;
 int FUNC_7 (struct mt7603_dev*,int ) ;

__attribute__((used)) static void
FUNC_8(struct mt7603_dev *VAR_5)
{
 u32 VAR_6 = FUNC_7(VAR_5, FUNC_1(41));
 ktime_t VAR_7;
 int VAR_8, VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 if (!VAR_5->ed_monitor)
  return;

 VAR_8 = FUNC_0(VAR_1, VAR_6);
 if (VAR_8 > 128)
  VAR_8 -= 256;

 VAR_9 = FUNC_0(VAR_2, VAR_6);
 if (VAR_9 > 128)
  VAR_9 -= 256;

 if (FUNC_5(VAR_8, VAR_9) >= -40 &&
     VAR_5->ed_strong_signal < VAR_0)
  VAR_5->ed_strong_signal++;
 else if (VAR_5->ed_strong_signal > 0)
  VAR_5->ed_strong_signal--;

 VAR_7 = FUNC_2();
 VAR_11 = FUNC_7(VAR_5, VAR_3) & VAR_4;

 VAR_10 = FUNC_4(FUNC_3(VAR_7, VAR_5->ed_time));
 VAR_5->ed_time = VAR_7;

 if (!VAR_10)
  return;

 if (100 * VAR_11 / VAR_10 > 90) {
  if (VAR_5->ed_trigger < 0)
   VAR_5->ed_trigger = 0;
  VAR_5->ed_trigger++;
 } else {
  if (VAR_5->ed_trigger > 0)
   VAR_5->ed_trigger = 0;
  VAR_5->ed_trigger--;
 }

 if (VAR_5->ed_trigger > VAR_0 ||
     VAR_5->ed_strong_signal < VAR_0 / 2) {
  FUNC_6(VAR_5, 1);
 } else if (VAR_5->ed_trigger < -VAR_0) {
  FUNC_6(VAR_5, 0);
 }

 if (VAR_5->ed_trigger > VAR_0)
  VAR_5->ed_trigger = VAR_0;
 else if (VAR_5->ed_trigger < -VAR_0)
  VAR_5->ed_trigger = -VAR_0;
}
