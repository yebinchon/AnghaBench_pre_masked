
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_ha_struct {int dummy; } ;
struct TYPE_2__ {int vaddr; } ;
struct asd_ascb {int tc_index; int timer; struct asd_ha_struct* ha; TYPE_1__ dma_scb; int scb; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct asd_ha_struct *VAR_0,
     struct asd_ascb *VAR_1)
{
 FUNC_0(&VAR_1->list);
 VAR_1->scb = VAR_1->dma_scb.vaddr;
 VAR_1->ha = VAR_0;
 FUNC_1(&VAR_1->timer, ((void*)0), 0);
 VAR_1->tc_index = -1;
}
