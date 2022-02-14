
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __vxge_hw_channel {TYPE_1__* common_reg; } ;
struct TYPE_2__ {int * clr_msix_one_shot_vec; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct __vxge_hw_channel *VAR_0, int VAR_1)
{
 FUNC_0(
  (u32) FUNC_1(FUNC_2(VAR_1 >> 2), 0, 32),
  &VAR_0->common_reg->clr_msix_one_shot_vec[VAR_1 % 4]);
}
