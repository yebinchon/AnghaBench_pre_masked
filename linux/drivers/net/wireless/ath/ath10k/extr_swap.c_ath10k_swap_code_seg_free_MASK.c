
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct ath10k_swap_code_seg_info {int * paddr; int * virt_address; TYPE_1__ seg_hw_info; } ;
struct ath10k {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath10k *VAR_0,
     struct ath10k_swap_code_seg_info *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1)
  return;

 if (!VAR_1->virt_address[0])
  return;

 VAR_2 = FUNC_0(VAR_1->seg_hw_info.size);
 FUNC_1(VAR_0->dev, VAR_2, VAR_1->virt_address[0],
     VAR_1->paddr[0]);
}
