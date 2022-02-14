
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; } ;
struct glink_ssr {int nb; } ;


 struct glink_ssr* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rpmsg_device *VAR_0)
{
 struct glink_ssr *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->nb);
}
