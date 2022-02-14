
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_dma_dscr {scalar_t__ vaddr; int daddr; int size; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_3,
          struct mei_dma_dscr *VAR_4)
{
 if (!VAR_4->size)
  return 0;

 if (FUNC_0(!FUNC_2(VAR_4->size)))
  return -VAR_0;

 if (VAR_4->vaddr)
  return 0;

 VAR_4->vaddr = FUNC_1(VAR_3->dev, VAR_4->size, &VAR_4->daddr,
       VAR_2);
 if (!VAR_4->vaddr)
  return -VAR_1;

 return 0;
}
