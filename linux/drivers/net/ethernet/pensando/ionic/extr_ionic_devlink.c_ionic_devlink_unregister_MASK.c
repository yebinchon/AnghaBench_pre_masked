
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic {int dl_port; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct devlink*) ;
 struct devlink* FUNC_2 (struct ionic*) ;

void FUNC_3(struct ionic *VAR_0)
{
 struct devlink *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dl_port);
 FUNC_1(VAR_1);
}
