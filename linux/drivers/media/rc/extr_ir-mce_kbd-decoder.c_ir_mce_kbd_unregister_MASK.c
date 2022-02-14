
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct mce_kbd_dec {int rx_timeout; } ;
struct TYPE_2__ {struct mce_kbd_dec mce_kbd; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0)
{
 struct mce_kbd_dec *VAR_1 = &VAR_0->raw->mce_kbd;

 FUNC_0(&VAR_1->rx_timeout);

 return 0;
}
