
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_clock {TYPE_1__* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,scalar_t__,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct ptp_clock *VAR_4 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, VAR_0-1, "%s\n", VAR_4->info->name);
}
