
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcnss_ctrl {TYPE_1__* channel; } ;
struct rpmsg_endpoint {int dummy; } ;
struct rpmsg_channel_info {void* dst; void* src; int name; } ;
typedef int rpmsg_rx_cb_t ;
struct TYPE_2__ {int rpdev; } ;


 void* VAR_0 ;
 struct rpmsg_endpoint* FUNC_0 (int ,int ,void*,struct rpmsg_channel_info) ;
 int FUNC_1 (int ,char const*,int) ;

struct rpmsg_endpoint *FUNC_2(void *VAR_1, const char *VAR_2, rpmsg_rx_cb_t VAR_3, void *VAR_4)
{
 struct rpmsg_channel_info VAR_5;
 struct wcnss_ctrl *VAR_6 = VAR_1;

 FUNC_1(VAR_5.name, VAR_2, sizeof(VAR_5.name));
 VAR_5.src = VAR_0;
 VAR_5.dst = VAR_0;

 return FUNC_0(VAR_6->channel->rpdev, VAR_3, VAR_4, VAR_5);
}
