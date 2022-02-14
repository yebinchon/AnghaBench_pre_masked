
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_bl {int max_brightness; int brightness_level; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fujitsu_bl* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_3, int VAR_4)
{
 struct fujitsu_bl *VAR_5 = FUNC_1(VAR_3);
 acpi_status VAR_6;
 char *VAR_7;

 switch (VAR_2) {
 case -1:
  if (FUNC_5(VAR_3->handle, "SBL2"))
   VAR_7 = "SBL2";
  else
   VAR_7 = "SBLL";
  break;
 case 1:
  VAR_7 = "SBL2";
  break;
 default:
  VAR_7 = "SBLL";
  break;
 }

 FUNC_3(VAR_3->handle, "set lcd level via %s [%d]\n", VAR_7,
     VAR_4);

 if (VAR_4 < 0 || VAR_4 >= VAR_5->max_brightness)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3->handle, VAR_7, VAR_4);
 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_3->handle, "Failed to evaluate %s\n",
    VAR_7);
  return -VAR_1;
 }

 VAR_5->brightness_level = VAR_4;

 return 0;
}
