
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio_mem {int addr; int size; } ;
struct uio_info {struct uio_dmem_genirq_platdata* priv; } ;
struct uio_dmem_genirq_platdata {int dmem_region_start; int alloc_lock; scalar_t__* dmem_region_vaddr; TYPE_2__* pdev; TYPE_1__* uioinfo; int refcnt; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct uio_mem* mem; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct uio_info *VAR_2, struct inode *VAR_3)
{
 struct uio_dmem_genirq_platdata *VAR_4 = VAR_2->priv;
 struct uio_mem *VAR_5;
 int VAR_6 = VAR_4->dmem_region_start;


 FUNC_3(&VAR_4->pdev->dev);

 VAR_5 = &VAR_4->uioinfo->mem[VAR_4->dmem_region_start];

 FUNC_1(&VAR_4->alloc_lock);

 VAR_4->refcnt--;
 while (!VAR_4->refcnt && VAR_5 < &VAR_4->uioinfo->mem[VAR_1]) {
  if (!VAR_5->size)
   break;
  if (VAR_4->dmem_region_vaddr[VAR_6]) {
   FUNC_0(&VAR_4->pdev->dev, VAR_5->size,
     VAR_4->dmem_region_vaddr[VAR_6],
     VAR_5->addr);
  }
  VAR_5->addr = VAR_0;
  ++VAR_6;
  ++VAR_5;
 }

 FUNC_2(&VAR_4->alloc_lock);
 return 0;
}
