
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int ept; } ;
struct glink_channel {int * rpdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct rpmsg_device*) ;
 struct glink_channel* FUNC_1 (int ) ;
 struct rpmsg_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct rpmsg_device *VAR_1 = FUNC_2(VAR_0);
 struct glink_channel *VAR_2 = FUNC_1(VAR_1->ept);

 VAR_2->rpdev = ((void*)0);
 FUNC_0(VAR_1);
}
