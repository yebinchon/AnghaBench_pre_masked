
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct brcmf_pciedev_info {TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pciedev_info*,scalar_t__,int) ;
 void* FUNC_1 (int *,scalar_t__,scalar_t__*,int ) ;
 int FUNC_2 (void*,int ,scalar_t__) ;

__attribute__((used)) static void *
FUNC_3(struct brcmf_pciedev_info *VAR_1,
         u32 VAR_2, u32 VAR_3,
         dma_addr_t *VAR_4)
{
 void *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_1(&VAR_1->pdev->dev, VAR_2, VAR_4,
      VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = (u64)*VAR_4;
 FUNC_0(VAR_1, VAR_3,
          VAR_6 & 0xffffffff);
 FUNC_0(VAR_1, VAR_3 + 4, VAR_6 >> 32);

 FUNC_2(VAR_5, 0, VAR_2);

 return (VAR_5);
}
