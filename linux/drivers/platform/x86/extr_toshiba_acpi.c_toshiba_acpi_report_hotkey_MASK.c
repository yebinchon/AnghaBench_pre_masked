
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int hotkey_dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct toshiba_acpi_dev *VAR_0,
           int VAR_1)
{
 if (VAR_1 == 0x100)
  return;


 if (VAR_1 & 0x80)
  return;

 if (!FUNC_1(VAR_0->hotkey_dev, VAR_1, 1, 1))
  FUNC_0("Unknown key %x\n", VAR_1);
}
