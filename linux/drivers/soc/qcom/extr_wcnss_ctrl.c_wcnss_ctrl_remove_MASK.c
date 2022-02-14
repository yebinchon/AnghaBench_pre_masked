
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcnss_ctrl {int probe_work; } ;
struct rpmsg_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct wcnss_ctrl* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rpmsg_device *VAR_0)
{
 struct wcnss_ctrl *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(&VAR_1->probe_work);
 FUNC_2(&VAR_0->dev);
}
