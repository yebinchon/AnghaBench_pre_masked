
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
struct TYPE_2__ {int (* set_fault ) (struct enclosure_device*,struct enclosure_component*,int) ;} ;


 int FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (struct enclosure_device*,struct enclosure_component*,int) ;
 struct enclosure_component* FUNC_2 (struct device*) ;
 struct enclosure_device* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct enclosure_device *VAR_4 = FUNC_3(VAR_0->parent);
 struct enclosure_component *VAR_5 = FUNC_2(VAR_0);
 int VAR_6 = FUNC_0(VAR_2, ((void*)0), 0);

 if (VAR_4->cb->set_fault)
  VAR_4->cb->set_fault(VAR_4, VAR_5, VAR_6);
 return VAR_3;
}
