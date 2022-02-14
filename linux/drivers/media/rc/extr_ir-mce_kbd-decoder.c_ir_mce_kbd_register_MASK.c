
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct mce_kbd_dec {int keylock; int rx_timeout; } ;
struct TYPE_2__ {struct mce_kbd_dec mce_kbd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_1)
{
 struct mce_kbd_dec *VAR_2 = &VAR_1->raw->mce_kbd;

 FUNC_1(&VAR_2->rx_timeout, VAR_0, 0);
 FUNC_0(&VAR_2->keylock);

 return 0;
}
