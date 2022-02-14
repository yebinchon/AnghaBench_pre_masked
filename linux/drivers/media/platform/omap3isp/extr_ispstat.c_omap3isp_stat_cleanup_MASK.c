
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct ispstat {int recover_priv; int priv; int buf; int ioctl_lock; TYPE_1__ subdev; } ;


 int FUNC_0 (struct ispstat*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ispstat *VAR_0)
{
 FUNC_2(&VAR_0->subdev.entity);
 FUNC_3(&VAR_0->ioctl_lock);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->buf);
 FUNC_1(VAR_0->priv);
 FUNC_1(VAR_0->recover_priv);
}
