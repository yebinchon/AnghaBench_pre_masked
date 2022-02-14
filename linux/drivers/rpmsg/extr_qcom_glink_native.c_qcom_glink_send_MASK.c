
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_endpoint {int dummy; } ;
struct glink_channel {int dummy; } ;


 int FUNC_0 (struct glink_channel*,void*,int,int) ;
 struct glink_channel* FUNC_1 (struct rpmsg_endpoint*) ;

__attribute__((used)) static int FUNC_2(struct rpmsg_endpoint *VAR_0, void *VAR_1, int VAR_2)
{
 struct glink_channel *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2, 1);
}
