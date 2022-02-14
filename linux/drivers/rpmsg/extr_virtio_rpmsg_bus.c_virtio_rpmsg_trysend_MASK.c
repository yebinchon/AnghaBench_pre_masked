
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_endpoint {int addr; struct rpmsg_device* rpdev; } ;
struct rpmsg_device {int dst; } ;


 int FUNC_0 (struct rpmsg_device*,int ,int ,void*,int,int) ;

__attribute__((used)) static int FUNC_1(struct rpmsg_endpoint *VAR_0, void *VAR_1, int VAR_2)
{
 struct rpmsg_device *VAR_3 = VAR_0->rpdev;
 u32 VAR_4 = VAR_0->addr, VAR_5 = VAR_3->dst;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1, VAR_2, 0);
}
