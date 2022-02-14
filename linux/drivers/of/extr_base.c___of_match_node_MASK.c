
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {scalar_t__* name; scalar_t__* type; scalar_t__* compatible; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node const*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static
const struct of_device_id *FUNC_1(const struct of_device_id *VAR_0,
        const struct device_node *VAR_1)
{
 const struct of_device_id *VAR_2 = ((void*)0);
 int VAR_3, VAR_4 = 0;

 if (!VAR_0)
  return ((void*)0);

 for (; VAR_0->name[0] || VAR_0->type[0] || VAR_0->compatible[0]; VAR_0++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0->compatible,
        VAR_0->type, VAR_0->name);
  if (VAR_3 > VAR_4) {
   VAR_2 = VAR_0;
   VAR_4 = VAR_3;
  }
 }

 return VAR_2;
}
