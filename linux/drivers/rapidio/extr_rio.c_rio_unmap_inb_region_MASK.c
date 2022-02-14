
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_mport {TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* unmap_inb ) (struct rio_mport*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rio_mport*,int ) ;

void FUNC_3(struct rio_mport *VAR_1, dma_addr_t VAR_2)
{
 unsigned long VAR_3;
 if (!VAR_1->ops->unmap_inb)
  return;
 FUNC_0(&VAR_0, VAR_3);
 VAR_1->ops->unmap_inb(VAR_1, VAR_2);
 FUNC_1(&VAR_0, VAR_3);
}
