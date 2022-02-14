
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* destroy_ept ) (struct rpmsg_endpoint*) ;} ;


 int FUNC_0 (struct rpmsg_endpoint*) ;

void FUNC_1(struct rpmsg_endpoint *VAR_0)
{
 if (VAR_0)
  VAR_0->ops->destroy_ept(VAR_0);
}
