
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; } ;
struct fastrpc_buf {int phys; int virt; int dev; } ;
struct dma_buf {struct fastrpc_buf* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct dma_buf *VAR_0,
   struct vm_area_struct *VAR_1)
{
 struct fastrpc_buf *VAR_2 = VAR_0->priv;
 size_t VAR_3 = VAR_1->vm_end - VAR_1->vm_start;

 return FUNC_1(VAR_2->dev, VAR_1, VAR_2->virt,
     FUNC_0(VAR_2->phys), VAR_3);
}
