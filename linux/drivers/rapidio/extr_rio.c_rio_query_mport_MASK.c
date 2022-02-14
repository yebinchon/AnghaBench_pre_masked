
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_mport_attr {int dummy; } ;
struct rio_mport {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* query_mport ) (struct rio_mport*,struct rio_mport_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rio_mport*,struct rio_mport_attr*) ;

int FUNC_1(struct rio_mport *VAR_1,
      struct rio_mport_attr *VAR_2)
{
 if (!VAR_1->ops->query_mport)
  return -VAR_0;
 return VAR_1->ops->query_mport(VAR_1, VAR_2);
}
