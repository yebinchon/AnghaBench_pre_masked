
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rc_dev {int keylock; int timer_repeat; int last_keycode; scalar_t__ keypressed; struct input_dev* input_dev; } ;
struct input_dev {scalar_t__* rep; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct rc_dev* VAR_2 ;
 struct rc_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct rc_dev *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 struct input_dev *VAR_7 = VAR_6->input_dev;
 unsigned long VAR_8;

 FUNC_5(&VAR_6->keylock, VAR_8);
 if (VAR_6->keypressed) {
  FUNC_1(VAR_7, VAR_0, VAR_6->last_keycode, 2);
  FUNC_2(VAR_7);
  if (VAR_7->rep[VAR_1])
   FUNC_3(&VAR_6->timer_repeat, VAR_3 +
      FUNC_4(VAR_7->rep[VAR_1]));
 }
 FUNC_6(&VAR_6->keylock, VAR_8);
}
