
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct allegro_dev {TYPE_1__* plat_dev; } ;
struct allegro_buffer {size_t size; int vaddr; int paddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct allegro_dev *VAR_2,
    struct allegro_buffer *VAR_3, size_t VAR_4)
{
 VAR_3->vaddr = FUNC_0(&VAR_2->plat_dev->dev, VAR_4,
        &VAR_3->paddr, VAR_1);
 if (!VAR_3->vaddr)
  return -VAR_0;
 VAR_3->size = VAR_4;

 return 0;
}
