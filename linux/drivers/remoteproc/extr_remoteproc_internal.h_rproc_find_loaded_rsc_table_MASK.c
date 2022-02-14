
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc {TYPE_1__* ops; } ;
struct resource_table {int dummy; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {struct resource_table* (* find_loaded_rsc_table ) (struct rproc*,struct firmware const*) ;} ;


 struct resource_table* FUNC_0 (struct rproc*,struct firmware const*) ;

__attribute__((used)) static inline
struct resource_table *FUNC_1(struct rproc *VAR_0,
         const struct firmware *VAR_1)
{
 if (VAR_0->ops->find_loaded_rsc_table)
  return VAR_0->ops->find_loaded_rsc_table(VAR_0, VAR_1);

 return ((void*)0);
}
