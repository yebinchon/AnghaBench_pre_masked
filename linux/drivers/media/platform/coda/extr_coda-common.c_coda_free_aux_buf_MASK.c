
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int dev; } ;
struct coda_aux_buf {int * dentry; scalar_t__ size; int * vaddr; int paddr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int *,int ) ;

void FUNC_2(struct coda_dev *VAR_0,
         struct coda_aux_buf *VAR_1)
{
 if (VAR_1->vaddr) {
  FUNC_1(VAR_0->dev, VAR_1->size, VAR_1->vaddr, VAR_1->paddr);
  VAR_1->vaddr = ((void*)0);
  VAR_1->size = 0;
  FUNC_0(VAR_1->dentry);
  VAR_1->dentry = ((void*)0);
 }
}
