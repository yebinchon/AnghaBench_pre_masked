
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int irq_mtx; int lm_resources; int dma_resources; int slave_resources; int master_resources; int vme_error_handlers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct vme_bridge *FUNC_2(struct vme_bridge *VAR_0)
{
 FUNC_0(&VAR_0->vme_error_handlers);
 FUNC_0(&VAR_0->master_resources);
 FUNC_0(&VAR_0->slave_resources);
 FUNC_0(&VAR_0->dma_resources);
 FUNC_0(&VAR_0->lm_resources);
 FUNC_1(&VAR_0->irq_mtx);

 return VAR_0;
}
