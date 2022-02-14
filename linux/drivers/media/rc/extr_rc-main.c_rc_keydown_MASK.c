
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int keylock; scalar_t__ keyup_jiffies; int timer_keyup; int timeout; scalar_t__ keypressed; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int FUNC_0 (struct rc_dev*,int,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct rc_dev*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct rc_dev *VAR_1, enum rc_proto VAR_2, u32 VAR_3,
  u8 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6 = FUNC_4(VAR_1, VAR_3);

 FUNC_6(&VAR_1->keylock, VAR_5);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6, VAR_4);

 if (VAR_1->keypressed) {
  VAR_1->keyup_jiffies = VAR_0 + FUNC_3(VAR_1->timeout) +
   FUNC_2(FUNC_5(VAR_2));
  FUNC_1(&VAR_1->timer_keyup, VAR_1->keyup_jiffies);
 }
 FUNC_7(&VAR_1->keylock, VAR_5);
}
