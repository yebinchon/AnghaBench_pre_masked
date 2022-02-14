
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {TYPE_1__* ops; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct rpmsg_endpoint*,struct file*,int *) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rpmsg_endpoint*,struct file*,int *) ;

__poll_t FUNC_2(struct rpmsg_endpoint *VAR_0, struct file *VAR_1,
   poll_table *VAR_2)
{
 if (FUNC_0(!VAR_0))
  return 0;
 if (!VAR_0->ops->poll)
  return 0;

 return VAR_0->ops->poll(VAR_0, VAR_1, VAR_2);
}
