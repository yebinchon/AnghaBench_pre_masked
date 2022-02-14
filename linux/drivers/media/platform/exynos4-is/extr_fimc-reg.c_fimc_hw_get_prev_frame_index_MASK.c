
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_dev {scalar_t__ regs; TYPE_1__* drv_data; } ;
typedef int s32 ;
struct TYPE_2__ {int cistatus2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

s32 FUNC_1(struct fimc_dev *VAR_1)
{
 s32 VAR_2;

 if (!VAR_1->drv_data->cistatus2)
  return -1;

 VAR_2 = FUNC_0(VAR_1->regs + VAR_0);
 return ((VAR_2 >> 7) & 0x3f) - 1;
}
