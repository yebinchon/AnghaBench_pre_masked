
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fujitsu_bl {int brightness_level; int input; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 struct fujitsu_bl* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_2, u32 VAR_3)
{
 struct fujitsu_bl *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6;

 if (VAR_3 != VAR_0) {
  FUNC_2(VAR_2->handle, "unsupported event [0x%x]\n",
     VAR_3);
  FUNC_5(VAR_4->input, -1, 1, 1);
  return;
 }

 VAR_5 = VAR_4->brightness_level;
 FUNC_3(VAR_2);
 VAR_6 = VAR_4->brightness_level;

 FUNC_1(VAR_2->handle,
     "brightness button event [%i -> %i]\n", VAR_5, VAR_6);

 if (VAR_5 == VAR_6)
  return;

 if (!VAR_1)
  FUNC_4(VAR_2, VAR_6);

 FUNC_5(VAR_4->input, VAR_5 < VAR_6, 1, 1);
}
