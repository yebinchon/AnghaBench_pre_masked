
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ispstat {scalar_t__ state; TYPE_2__* isp; TYPE_1__* ops; } ;
struct TYPE_4__ {int stat_lock; } ;
struct TYPE_3__ {int (* enable ) (struct ispstat*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ispstat*,int ) ;

void FUNC_3(struct ispstat *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_3->isp->stat_lock, VAR_4);

 if (VAR_3->state != VAR_0)
  VAR_3->ops->enable(VAR_3, 0);
 if (VAR_3->state == VAR_1)
  VAR_3->state = VAR_2;

 FUNC_1(&VAR_3->isp->stat_lock, VAR_4);
}
