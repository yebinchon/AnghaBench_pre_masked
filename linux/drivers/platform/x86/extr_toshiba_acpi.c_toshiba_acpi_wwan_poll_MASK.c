
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int killswitch; int wwan_rfk; } ;
struct rfkill {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct toshiba_acpi_dev*) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_0, void *VAR_1)
{
 struct toshiba_acpi_dev *VAR_2 = VAR_1;

 if (FUNC_1(VAR_2))
  return;

 FUNC_0(VAR_2->wwan_rfk, !VAR_2->killswitch);
}
