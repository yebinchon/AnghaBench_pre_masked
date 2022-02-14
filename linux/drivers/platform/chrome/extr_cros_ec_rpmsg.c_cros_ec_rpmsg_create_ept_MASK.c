
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct rpmsg_device {int src; TYPE_1__ id; } ;
struct rpmsg_channel_info {int dst; int src; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rpmsg_endpoint* FUNC_0 (struct rpmsg_device*,int ,int *,struct rpmsg_channel_info) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct rpmsg_endpoint *
FUNC_2(struct rpmsg_device *VAR_3)
{
 struct rpmsg_channel_info VAR_4 = {};

 FUNC_1(VAR_4.name, VAR_3->id.name, VAR_1);
 VAR_4.src = VAR_3->src;
 VAR_4.dst = VAR_0;

 return FUNC_0(VAR_3, VAR_2, ((void*)0), VAR_4);
}
