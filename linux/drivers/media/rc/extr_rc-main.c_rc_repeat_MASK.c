
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ allowed_protocols; int keylock; scalar_t__ keyup_jiffies; int timer_keyup; scalar_t__ keypressed; int input_dev; int last_scancode; int last_toggle; int last_keycode; int last_protocol; int timeout; } ;
struct lirc_scancode {int flags; int keycode; int rc_proto; int scancode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rc_dev*,struct lirc_scancode*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct rc_dev *VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9 = FUNC_5(VAR_7->timeout) +
  FUNC_4(FUNC_6(VAR_7->last_protocol));
 struct lirc_scancode VAR_10 = {
  .scancode = VAR_7->last_scancode, .rc_proto = VAR_7->last_protocol,
  .keycode = VAR_7->keypressed ? VAR_7->last_keycode : VAR_1,
  .flags = VAR_2 |
    (VAR_7->last_toggle ? VAR_3 : 0)
 };

 if (VAR_7->allowed_protocols != VAR_5)
  FUNC_2(VAR_7, &VAR_10);

 FUNC_7(&VAR_7->keylock, VAR_8);

 FUNC_0(VAR_7->input_dev, VAR_0, VAR_4, VAR_7->last_scancode);
 FUNC_1(VAR_7->input_dev);

 if (VAR_7->keypressed) {
  VAR_7->keyup_jiffies = VAR_6 + VAR_9;
  FUNC_3(&VAR_7->timer_keyup, VAR_7->keyup_jiffies);
 }

 FUNC_8(&VAR_7->keylock, VAR_8);
}
