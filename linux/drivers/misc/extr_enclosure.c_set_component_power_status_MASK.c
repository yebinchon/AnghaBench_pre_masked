
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {TYPE_1__* cb; } ;
struct enclosure_component {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_power_status ) (struct enclosure_device*,struct enclosure_component*,int) ;} ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (struct enclosure_device*,struct enclosure_component*,int) ;
 struct enclosure_component* FUNC_2 (struct device*) ;
 struct enclosure_device* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct enclosure_device *VAR_5 = FUNC_3(VAR_1->parent);
 struct enclosure_component *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 if (FUNC_0(VAR_3, "on", 2) == 0 &&
     (VAR_3[2] == '\n' || VAR_3[2] == '\0'))
  VAR_7 = 1;
 else if (FUNC_0(VAR_3, "off", 3) == 0 &&
     (VAR_3[3] == '\n' || VAR_3[3] == '\0'))
  VAR_7 = 0;
 else
  return -VAR_0;

 if (VAR_5->cb->set_power_status)
  VAR_5->cb->set_power_status(VAR_5, VAR_6, VAR_7);
 return VAR_4;
}
