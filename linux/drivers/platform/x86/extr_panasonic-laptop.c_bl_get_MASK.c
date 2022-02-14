
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* sinf; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pcc_acpi*) ;
 struct pcc_acpi* FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 struct pcc_acpi *VAR_3 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return VAR_3->sinf[VAR_1];
}
