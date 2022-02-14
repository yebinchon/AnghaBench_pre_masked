
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct __vxge_hw_device {TYPE_1__* common_reg; } ;
struct TYPE_2__ {int titan_mask_all_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int,int ,int) ;

void FUNC_2(struct __vxge_hw_device *VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_0 |
  VAR_1;

 FUNC_0((u32)FUNC_1(VAR_3, 0, 32),
    &VAR_2->common_reg->titan_mask_all_int);
}
