
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {TYPE_1__* cb; } ;
struct enclosure_component {size_t status; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_status ) (struct enclosure_device*,struct enclosure_component*) ;} ;


 char** VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (struct enclosure_device*,struct enclosure_component*) ;
 struct enclosure_component* FUNC_2 (struct device*) ;
 struct enclosure_device* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2,char *VAR_3)
{
 struct enclosure_device *VAR_4 = FUNC_3(VAR_1->parent);
 struct enclosure_component *VAR_5 = FUNC_2(VAR_1);

 if (VAR_4->cb->get_status)
  VAR_4->cb->get_status(VAR_4, VAR_5);
 return FUNC_0(VAR_3, 40, "%s\n", VAR_0[VAR_5->status]);
}
