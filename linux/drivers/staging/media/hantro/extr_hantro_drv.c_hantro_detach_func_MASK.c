
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct hantro_func {TYPE_1__ vdev; int proc; int sink; int intf_devnode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hantro_func *VAR_0)
{
 FUNC_1(VAR_0->intf_devnode);
 FUNC_2(&VAR_0->sink);
 FUNC_2(&VAR_0->proc);
 FUNC_2(&VAR_0->vdev.entity);
 FUNC_0(&VAR_0->sink);
 FUNC_0(&VAR_0->proc);
 FUNC_0(&VAR_0->vdev.entity);
}
