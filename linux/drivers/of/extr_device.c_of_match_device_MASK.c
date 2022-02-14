
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device {int of_node; } ;


 struct of_device_id const* FUNC_0 (struct of_device_id const*,int ) ;

const struct of_device_id *FUNC_1(const struct of_device_id *VAR_0,
        const struct device *VAR_1)
{
 if ((!VAR_0) || (!VAR_1->of_node))
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1->of_node);
}
