
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {int dummy; } ;
struct nsim_dev_port {int ns; int list; struct devlink_port devlink_port; } ;


 int FUNC_0 (struct devlink_port*) ;
 int FUNC_1 (struct devlink_port*) ;
 int FUNC_2 (struct nsim_dev_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nsim_dev_port*) ;

__attribute__((used)) static void FUNC_6(struct nsim_dev_port *VAR_0)
{
 struct devlink_port *VAR_1 = &VAR_0->devlink_port;

 FUNC_3(&VAR_0->list);
 FUNC_0(VAR_1);
 FUNC_4(VAR_0->ns);
 FUNC_5(VAR_0);
 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
}
