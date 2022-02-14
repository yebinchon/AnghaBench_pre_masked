
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mt7601u_dev {int con_mon_lock; int avg_rssi; int state; } ;


 int VAR_0 ;
 long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mt7601u_dev*) ;
 scalar_t__ FUNC_2 (struct mt7601u_dev*,int) ;
 int FUNC_3 (struct mt7601u_dev*,int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mt7601u_dev *VAR_1)
{
 u8 VAR_2 = FUNC_1(VAR_1);
 long VAR_3;

 if (FUNC_6(VAR_0, &VAR_1->state))
  return;





 FUNC_4(&VAR_1->con_mon_lock);
 VAR_3 = FUNC_0(&VAR_1->avg_rssi);
 FUNC_5(&VAR_1->con_mon_lock);
 if (VAR_3 == 0)
  return;

 VAR_3 = -VAR_3;
 if (VAR_3 <= -70)
  VAR_2 -= 0x20;
 else if (VAR_3 <= -60)
  VAR_2 -= 0x10;

 if (VAR_2 != FUNC_2(VAR_1, 66))
  FUNC_3(VAR_1, 66, VAR_2);




}
