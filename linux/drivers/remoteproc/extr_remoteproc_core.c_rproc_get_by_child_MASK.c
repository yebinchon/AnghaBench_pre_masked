
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dummy; } ;
struct device {struct rproc* driver_data; int * type; struct device* parent; } ;


 int VAR_0 ;

struct rproc *FUNC_0(struct device *VAR_1)
{
 for (VAR_1 = VAR_1->parent; VAR_1; VAR_1 = VAR_1->parent) {
  if (VAR_1->type == &VAR_0)
   return VAR_1->driver_data;
 }

 return ((void*)0);
}
