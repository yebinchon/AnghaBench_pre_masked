
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send ) (struct rpmsg_endpoint*,void*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rpmsg_endpoint*,void*,int) ;

int FUNC_2(struct rpmsg_endpoint *VAR_2, void *VAR_3, int VAR_4)
{
 if (FUNC_0(!VAR_2))
  return -VAR_0;
 if (!VAR_2->ops->send)
  return -VAR_1;

 return VAR_2->ops->send(VAR_2, VAR_3, VAR_4);
}
