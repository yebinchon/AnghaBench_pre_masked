
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_ctx {int name; } ;
struct hva_buffer {int paddr; int vaddr; int size; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct device*,struct hva_buffer*) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ) ;

void FUNC_4(struct hva_ctx *VAR_1, struct hva_buffer *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3,
  "%s free %d bytes of HW memory @(virt=%p, phy=%pad): %s\n",
  VAR_1->name, VAR_2->size, VAR_2->vaddr, &VAR_2->paddr, VAR_2->name);

 FUNC_3(VAR_3, VAR_2->size, VAR_2->vaddr, VAR_2->paddr,
         VAR_0);

 FUNC_2(VAR_3, VAR_2);
}
