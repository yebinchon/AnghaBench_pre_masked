
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int forced_passive; int passive_delay; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int*) ;
 int FUNC_1 (struct thermal_zone_device*,char*,int) ;
 int FUNC_2 (struct thermal_zone_device*,char*,int) ;
 int FUNC_3 (struct thermal_zone_device*,int ) ;
 struct thermal_zone_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct thermal_zone_device *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;

 if (FUNC_0(VAR_4, "%d\n", &VAR_7) != 1)
  return -VAR_0;




 if (VAR_7 && VAR_7 < 1000)
  return -VAR_0;

 if (VAR_7 && !VAR_6->forced_passive) {
  if (!VAR_6->passive_delay)
   VAR_6->passive_delay = 1000;
  FUNC_1(VAR_6, "Processor",
           sizeof("Processor"));
 } else if (!VAR_7 && VAR_6->forced_passive) {
  VAR_6->passive_delay = 0;
  FUNC_2(VAR_6, "Processor",
           sizeof("Processor"));
 }

 VAR_6->forced_passive = VAR_7;

 FUNC_3(VAR_6, VAR_1);

 return VAR_5;
}
