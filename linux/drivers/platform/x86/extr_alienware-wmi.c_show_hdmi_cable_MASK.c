
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmax_basic_args {int arg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct wmax_basic_args*,int ,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 acpi_status VAR_5;
 u32 VAR_6;
 struct wmax_basic_args VAR_7 = {
  .arg = 0,
 };
 VAR_5 =
     FUNC_1(&VAR_7, VAR_1,
       (u32 *) &VAR_6);
 if (FUNC_0(VAR_5)) {
  if (VAR_6 == 0)
   return FUNC_3(VAR_4, VAR_0,
      "[unconnected] connected unknown\n");
  else if (VAR_6 == 1)
   return FUNC_3(VAR_4, VAR_0,
      "unconnected [connected] unknown\n");
 }
 FUNC_2("alienware-wmi: unknown HDMI cable status: %d\n", VAR_5);
 return FUNC_3(VAR_4, VAR_0, "unconnected connected [unknown]\n");
}
