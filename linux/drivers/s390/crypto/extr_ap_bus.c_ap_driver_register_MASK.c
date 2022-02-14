
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct device_driver {char* name; struct module* owner; int remove; int probe; int * bus; } ;
struct ap_driver {struct device_driver driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device_driver*) ;
 int VAR_4 ;

int FUNC_1(struct ap_driver *VAR_5, struct module *VAR_6,
         char *VAR_7)
{
 struct device_driver *VAR_8 = &VAR_5->driver;

 if (!VAR_4)
  return -VAR_0;

 VAR_8->bus = &VAR_1;
 VAR_8->probe = VAR_2;
 VAR_8->remove = VAR_3;
 VAR_8->owner = VAR_6;
 VAR_8->name = VAR_7;
 return FUNC_0(VAR_8);
}
