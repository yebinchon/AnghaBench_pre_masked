
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {void const* data; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int of_match_table; } ;


 struct of_device_id* FUNC_0 (int ,struct device const*) ;

const void *FUNC_1(const struct device *VAR_0)
{
 const struct of_device_id *VAR_1;

 VAR_1 = FUNC_0(VAR_0->driver->of_match_table, VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->data;
}
