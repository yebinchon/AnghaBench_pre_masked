
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fimc_dev {scalar_t__ regs; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct fimc_ctx {TYPE_1__ scaler; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct fimc_ctx *VAR_4)
{
 struct fimc_dev *VAR_5 = VAR_4->fimc_dev;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs + VAR_0);
 VAR_6 |= VAR_1;

 if (VAR_4->scaler.enabled)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= VAR_3;

 VAR_6 |= VAR_2;
 FUNC_1(VAR_6, VAR_5->regs + VAR_0);
}
