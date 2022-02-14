
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scratch; } ;
struct ipr_cmnd {void (* fast_done ) (struct ipr_cmnd*) ;int timer; int * eh_comp; int * sibling; TYPE_1__ u; } ;


 int FUNC_0 (struct ipr_cmnd*) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ipr_cmnd *VAR_0,
         void (*VAR_1) (struct ipr_cmnd *))
{
 FUNC_0(VAR_0);
 VAR_0->u.scratch = 0;
 VAR_0->sibling = ((void*)0);
 VAR_0->eh_comp = ((void*)0);
 VAR_0->fast_done = VAR_1;
 FUNC_1(&VAR_0->timer, ((void*)0), 0);
}
