
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_bluetooth_dev {int killswitch; int rfk; } ;
struct rfkill {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct toshiba_bluetooth_dev*) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_0, void *VAR_1)
{
 struct toshiba_bluetooth_dev *VAR_2 = VAR_1;

 if (FUNC_1(VAR_2))
  return;
 FUNC_0(VAR_2->rfk, !VAR_2->killswitch);
}
