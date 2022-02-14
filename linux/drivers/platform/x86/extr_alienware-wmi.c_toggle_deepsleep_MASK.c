
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmax_basic_args {int arg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct wmax_basic_args*,int ,int *) ;
 int FUNC_2 (char*,int,char const*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 acpi_status VAR_5;
 struct wmax_basic_args VAR_6;

 if (FUNC_4(VAR_3, "disabled\n") == 0)
  VAR_6.arg = 0;
 else if (FUNC_4(VAR_3, "s5\n") == 0)
  VAR_6.arg = 1;
 else
  VAR_6.arg = 2;
 FUNC_2("alienware-wmi: setting deep sleep to %d : %s", VAR_6.arg, VAR_3);

 VAR_5 = FUNC_1(&VAR_6, VAR_0,
     ((void*)0));

 if (FUNC_0(VAR_5))
  FUNC_3("alienware-wmi: deep sleep control failed: results: %u\n",
   VAR_5);
 return VAR_4;
}
