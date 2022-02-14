
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visor_driver {TYPE_1__* channel_types; } ;
struct device_driver {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {struct device_driver* driver; struct bus_type* bus; } ;
struct bus_type {int (* match ) (struct device*,struct device_driver*) ;} ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct device*,struct device_driver*) ;
 struct visor_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 int VAR_3 = 0;
 struct bus_type *VAR_4 = VAR_0->bus;
 struct device_driver *VAR_5 = VAR_0->driver;
 struct visor_driver *VAR_6 = ((void*)0);

 if (!VAR_5)
  return 0;
 VAR_3 = VAR_4->match(VAR_0, VAR_5);
 if (!VAR_3)
  return 0;
 VAR_6 = FUNC_2(VAR_5);
 return FUNC_0(VAR_2, "%s\n", VAR_6->channel_types[VAR_3 - 1].name);
}
