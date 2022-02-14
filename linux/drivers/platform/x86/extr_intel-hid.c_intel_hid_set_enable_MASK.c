
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, bool VAR_3)
{
 acpi_handle VAR_4 = FUNC_0(VAR_2);


 if (!FUNC_2(VAR_4, VAR_1,
          VAR_3)) {
  FUNC_1(VAR_2, "failed to %sable hotkeys\n",
    VAR_3 ? "en" : "dis");
  return -VAR_0;
 }

 return 0;
}
