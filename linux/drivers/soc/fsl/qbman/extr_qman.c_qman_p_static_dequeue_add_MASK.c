
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qman_portal {int sdqcr; int p; TYPE_1__* config; } ;
struct TYPE_2__ {int pools; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct qman_portal *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_2);
 VAR_1 &= VAR_0->config->pools;
 VAR_0->sdqcr |= VAR_1;
 FUNC_2(&VAR_0->p, VAR_0->sdqcr);
 FUNC_0(VAR_2);
}
