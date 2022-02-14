
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_bus {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* preinit ) (struct qtnf_bus*) ;} ;


 int FUNC_0 (struct qtnf_bus*) ;

__attribute__((used)) static inline int FUNC_1(struct qtnf_bus *VAR_0)
{
 if (!VAR_0->bus_ops->preinit)
  return 0;
 return VAR_0->bus_ops->preinit(VAR_0);
}
