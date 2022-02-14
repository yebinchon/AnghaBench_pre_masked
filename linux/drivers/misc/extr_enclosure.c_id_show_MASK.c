
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {TYPE_1__* cb; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* show_id ) (struct enclosure_device*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct enclosure_device*,char*) ;
 struct enclosure_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct enclosure_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->cb->show_id)
  return VAR_4->cb->show_id(VAR_4, VAR_3);
 return -VAR_0;
}
