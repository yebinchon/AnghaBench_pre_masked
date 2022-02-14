
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {int dummy; } ;
struct rpmsg_device {TYPE_1__* ops; } ;
struct rpmsg_channel_info {int dummy; } ;
typedef int rpmsg_rx_cb_t ;
struct TYPE_2__ {struct rpmsg_endpoint* (* create_ept ) (struct rpmsg_device*,int ,void*,struct rpmsg_channel_info) ;} ;


 scalar_t__ FUNC_0 (int) ;
 struct rpmsg_endpoint* FUNC_1 (struct rpmsg_device*,int ,void*,struct rpmsg_channel_info) ;

struct rpmsg_endpoint *FUNC_2(struct rpmsg_device *VAR_0,
     rpmsg_rx_cb_t VAR_1, void *VAR_2,
     struct rpmsg_channel_info VAR_3)
{
 if (FUNC_0(!VAR_0))
  return ((void*)0);

 return VAR_0->ops->create_ept(VAR_0, VAR_1, VAR_2, VAR_3);
}
