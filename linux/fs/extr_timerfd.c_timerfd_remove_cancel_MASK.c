
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {int cancel_lock; } ;


 int FUNC_0 (struct timerfd_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timerfd_ctx *VAR_0)
{
 FUNC_1(&VAR_0->cancel_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->cancel_lock);
}
