
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct imon_dec {int stick_keyboard; } ;
struct TYPE_2__ {struct imon_dec imon; } ;



__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_0)
{
 struct imon_dec *VAR_1 = &VAR_0->raw->imon;

 VAR_1->stick_keyboard = 0;

 return 0;
}
