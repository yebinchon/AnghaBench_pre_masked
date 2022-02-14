
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rc_dev {int keylock; int keyup_jiffies; } ;


 struct rc_dev* VAR_0 ;
 struct rc_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct rc_dev*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct rc_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 unsigned long VAR_4;
 FUNC_2(&VAR_3->keylock, VAR_4);
 if (FUNC_4(VAR_3->keyup_jiffies))
  FUNC_1(VAR_3, 1);
 FUNC_3(&VAR_3->keylock, VAR_4);
}
