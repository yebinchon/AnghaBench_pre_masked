
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {TYPE_1__* cb; } ;
struct enclosure_component {int power_status; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_power_status ) (struct enclosure_device*,struct enclosure_component*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (struct enclosure_device*,struct enclosure_component*) ;
 struct enclosure_component* FUNC_2 (struct device*) ;
 struct enclosure_device* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct enclosure_device *VAR_5 = FUNC_3(VAR_2->parent);
 struct enclosure_component *VAR_6 = FUNC_2(VAR_2);

 if (VAR_5->cb->get_power_status)
  VAR_5->cb->get_power_status(VAR_5, VAR_6);


 if (VAR_6->power_status == -1)
  return (VAR_5->cb->get_power_status) ? -VAR_0 : -VAR_1;

 return FUNC_0(VAR_4, 40, "%s\n", VAR_6->power_status ? "on" : "off");
}
