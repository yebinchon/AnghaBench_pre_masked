
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int keypressed; int input_dev; int last_keycode; int timer_repeat; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rc_dev *VAR_2, bool VAR_3)
{
 if (!VAR_2->keypressed)
  return;

 FUNC_1(&VAR_2->dev, "keyup key 0x%04x\n", VAR_2->last_keycode);
 FUNC_0(&VAR_2->timer_repeat);
 FUNC_2(VAR_2->input_dev, VAR_2->last_keycode, 0);
 FUNC_4(VAR_1, VAR_0);
 if (VAR_3)
  FUNC_3(VAR_2->input_dev);
 VAR_2->keypressed = 0;
}
