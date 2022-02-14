
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_endpoint {struct rpmsg_device* rpdev; } ;
struct rpmsg_device {int dummy; } ;


 int FUNC_0 (struct rpmsg_device*,int ,int ,void*,int,int) ;

__attribute__((used)) static int FUNC_1(struct rpmsg_endpoint *VAR_0, u32 VAR_1,
     u32 VAR_2, void *VAR_3, int VAR_4)
{
 struct rpmsg_device *VAR_5 = VAR_0->rpdev;

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4, 1);
}
