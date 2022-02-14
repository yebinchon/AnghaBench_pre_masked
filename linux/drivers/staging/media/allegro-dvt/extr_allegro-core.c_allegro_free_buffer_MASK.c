
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct allegro_dev {TYPE_1__* plat_dev; } ;
struct allegro_buffer {scalar_t__ size; int * vaddr; int paddr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct allegro_dev *VAR_0,
    struct allegro_buffer *VAR_1)
{
 if (VAR_1->vaddr) {
  FUNC_0(&VAR_0->plat_dev->dev, VAR_1->size,
      VAR_1->vaddr, VAR_1->paddr);
  VAR_1->vaddr = ((void*)0);
  VAR_1->size = 0;
 }
}
