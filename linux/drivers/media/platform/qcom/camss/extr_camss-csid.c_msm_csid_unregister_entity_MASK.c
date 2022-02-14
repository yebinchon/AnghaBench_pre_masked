
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct csid_device {int ctrls; TYPE_1__ subdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct csid_device *VAR_0)
{
 FUNC_2(&VAR_0->subdev);
 FUNC_0(&VAR_0->subdev.entity);
 FUNC_1(&VAR_0->ctrls);
}
