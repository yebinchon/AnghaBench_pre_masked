
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int handle; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,unsigned long long*) ;
 int VAR_2 ;
 int FUNC_3 (struct input_dev*,unsigned long long,unsigned long long,int) ;

__attribute__((used)) static void FUNC_4(struct pcc_acpi *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->input_dev;
 int VAR_5;
 unsigned long long VAR_6;

 VAR_5 = FUNC_2(VAR_3->handle, VAR_1,
       ((void*)0), &VAR_6);
 if (FUNC_1(VAR_5)) {
  FUNC_0((VAR_0,
     "error getting hotkey status\n"));
  return;
 }


 if ((VAR_6 & 0xf) == 0x7 || (VAR_6 & 0xf) == 0xa) {
  if (VAR_6 & 0x80)
   VAR_2 = 1;
  if (!VAR_2)
   FUNC_3(VAR_4,
     VAR_6 & 0xf, 0x80, 0);
 }

 if (!FUNC_3(VAR_4,
     VAR_6 & 0xf, VAR_6 & 0x80, 0))
  FUNC_0((VAR_0,
      "Unknown hotkey event: %d\n", VAR_6));
}
