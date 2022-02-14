
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ev_queue; int ev_get; int ev_put; } ;
struct s_smc {TYPE_1__ q; } ;



void FUNC_0(struct s_smc *VAR_0)
{
 VAR_0->q.ev_put = VAR_0->q.ev_get = VAR_0->q.ev_queue ;
}
