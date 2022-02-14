
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {scalar_t__ out_path; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct fimc_ctx *VAR_3)
{
 struct fimc_dev *VAR_4 = VAR_3->fimc_dev;

 u32 VAR_5 = FUNC_0(VAR_4->regs + VAR_1);
 VAR_5 &= ~VAR_2;
 if (VAR_3->out_path == VAR_0)
  VAR_5 |= VAR_2;
 FUNC_1(VAR_5, VAR_4->regs + VAR_1);
}
