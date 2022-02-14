
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_effect {int type; int pat_cb; int pat_cr; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {struct fimc_effect effect; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct fimc_ctx *VAR_5)
{
 struct fimc_dev *VAR_6 = VAR_5->fimc_dev;
 struct fimc_effect *VAR_7 = &VAR_5->effect;
 u32 VAR_8 = 0;

 if (VAR_7->type != VAR_2) {
  VAR_8 |= VAR_4 |
   VAR_3;
  VAR_8 |= VAR_7->type;
  if (VAR_7->type == VAR_1)
   VAR_8 |= (VAR_7->pat_cb << 13) | VAR_7->pat_cr;
 }

 FUNC_0(VAR_8, VAR_6->regs + VAR_0);
}
