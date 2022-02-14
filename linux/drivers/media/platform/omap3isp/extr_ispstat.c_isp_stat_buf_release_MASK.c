
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ispstat {TYPE_1__* isp; int * locked_buf; } ;
struct TYPE_2__ {int stat_lock; } ;


 int FUNC_0 (struct ispstat*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ispstat *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(VAR_0, VAR_0->locked_buf);
 FUNC_1(&VAR_0->isp->stat_lock, VAR_1);
 VAR_0->locked_buf = ((void*)0);
 FUNC_2(&VAR_0->isp->stat_lock, VAR_1);
}
