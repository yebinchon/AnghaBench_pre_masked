
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct timerfd_ctx {int expired; TYPE_1__ wqh; int ticks; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct timerfd_ctx *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->wqh.lock, VAR_2);
 VAR_1->expired = 1;
 VAR_1->ticks++;
 FUNC_2(&VAR_1->wqh, VAR_0);
 FUNC_1(&VAR_1->wqh.lock, VAR_2);
}
