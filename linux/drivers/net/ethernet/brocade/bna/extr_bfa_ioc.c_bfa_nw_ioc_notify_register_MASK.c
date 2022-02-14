
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_notify {int qe; } ;
struct bfa_ioc {int notify_q; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct bfa_ioc *VAR_0,
   struct bfa_ioc_notify *VAR_1)
{
 FUNC_0(&VAR_1->qe, &VAR_0->notify_q);
}
