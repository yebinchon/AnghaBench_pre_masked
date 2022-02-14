
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_dev {scalar_t__ regs; TYPE_1__* drv_data; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ cistatus2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

s32 FUNC_1(struct fimc_dev *VAR_4)
{
 s32 VAR_5;

 if (VAR_4->drv_data->cistatus2) {
  VAR_5 = FUNC_0(VAR_4->regs + VAR_1) & 0x3f;
  return VAR_5 - 1;
 }

 VAR_5 = FUNC_0(VAR_4->regs + VAR_0);

 return (VAR_5 & VAR_2) >>
  VAR_3;
}
