
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {scalar_t__ in_path; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct fimc_ctx *VAR_5)
{
 struct fimc_dev *VAR_6 = VAR_5->fimc_dev;

 u32 VAR_7 = FUNC_0(VAR_6->regs + VAR_1);
 VAR_7 &= ~VAR_3;

 if (VAR_5->in_path == VAR_0)
  VAR_7 |= VAR_4;
 else
  VAR_7 |= VAR_2;

 FUNC_1(VAR_7, VAR_6->regs + VAR_1);
}
