
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio_mem {int addr; int size; } ;
struct uio_info {struct uio_dmem_genirq_platdata* priv; } ;
struct uio_dmem_genirq_platdata {int dmem_region_start; TYPE_2__* pdev; int alloc_lock; int refcnt; void** dmem_region_vaddr; TYPE_1__* uioinfo; } ;
struct inode {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct uio_mem* mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct uio_info *VAR_3, struct inode *VAR_4)
{
 struct uio_dmem_genirq_platdata *VAR_5 = VAR_3->priv;
 struct uio_mem *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = VAR_5->dmem_region_start;

 VAR_6 = &VAR_5->uioinfo->mem[VAR_5->dmem_region_start];

 FUNC_1(&VAR_5->alloc_lock);
 while (!VAR_5->refcnt && VAR_6 < &VAR_5->uioinfo->mem[VAR_2]) {
  void *VAR_9;
  if (!VAR_6->size)
   break;

  VAR_9 = FUNC_0(&VAR_5->pdev->dev, VAR_6->size,
    (dma_addr_t *)&VAR_6->addr, VAR_1);
  if (!VAR_9) {
   VAR_6->addr = VAR_0;
  }
  VAR_5->dmem_region_vaddr[VAR_8++] = VAR_9;
  ++VAR_6;
 }
 VAR_5->refcnt++;

 FUNC_2(&VAR_5->alloc_lock);

 FUNC_3(&VAR_5->pdev->dev);
 return VAR_7;
}
