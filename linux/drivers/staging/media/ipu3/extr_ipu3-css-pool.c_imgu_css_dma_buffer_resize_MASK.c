
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {TYPE_1__* pci_dev; } ;
struct imgu_css_map {size_t size; scalar_t__ vaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t,size_t) ;
 int FUNC_1 (struct imgu_device*,struct imgu_css_map*,size_t) ;
 int FUNC_2 (struct imgu_device*,struct imgu_css_map*) ;

int FUNC_3(struct imgu_device *VAR_1,
          struct imgu_css_map *VAR_2, size_t VAR_3)
{
 if (VAR_2->size < VAR_3 && VAR_2->vaddr) {
  FUNC_0(&VAR_1->pci_dev->dev, "dma buf resized from %zu to %zu",
    VAR_2->size, VAR_3);

  FUNC_2(VAR_1, VAR_2);
  if (!FUNC_1(VAR_1, VAR_2, VAR_3))
   return -VAR_0;
 }

 return 0;
}
