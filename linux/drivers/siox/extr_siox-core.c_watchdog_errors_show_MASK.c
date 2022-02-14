
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_device {unsigned int watchdog_errors; int smaster; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct siox_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct siox_device *VAR_3 = FUNC_3(VAR_0);
 unsigned int VAR_4;

 FUNC_0(VAR_3->smaster);

 VAR_4 = VAR_3->watchdog_errors;

 FUNC_1(VAR_3->smaster);

 return FUNC_2(VAR_2, "%u\n", VAR_4);
}
