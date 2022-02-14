
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;
struct delta_buf {int attrs; int paddr; int vaddr; int size; int name; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void FUNC_2(struct delta_ctx *VAR_0, struct delta_buf *VAR_1)
{
 struct delta_dev *VAR_2 = VAR_0->dev;

 FUNC_0(VAR_2->dev,
  "%s     free %d bytes of HW memory @(virt=0x%p, phy=0x%pad): %s\n",
  VAR_0->name, VAR_1->size, VAR_1->vaddr, &VAR_1->paddr, VAR_1->name);

 FUNC_1(VAR_2->dev, VAR_1->size,
         VAR_1->vaddr, VAR_1->paddr, VAR_1->attrs);
}
