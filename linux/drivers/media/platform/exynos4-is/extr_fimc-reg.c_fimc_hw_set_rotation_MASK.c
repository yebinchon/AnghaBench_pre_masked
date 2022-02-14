
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {int rotation; scalar_t__ out_path; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fimc_ctx*) ;
 int FUNC_1 (struct fimc_ctx*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct fimc_ctx *VAR_8)
{
 u32 VAR_9, VAR_10;
 struct fimc_dev *VAR_11 = VAR_8->fimc_dev;

 VAR_9 = FUNC_2(VAR_11->regs + VAR_2);
 VAR_9 &= ~(VAR_4 | VAR_5 |
   VAR_3);






 if (VAR_8->rotation == 90 || VAR_8->rotation == 270) {
  if (VAR_8->out_path == VAR_1)
   VAR_9 |= VAR_4;
  else
   VAR_9 |= VAR_5;
 }

 if (VAR_8->out_path == VAR_0) {
  VAR_9 |= FUNC_1(VAR_8);
  FUNC_3(VAR_9, VAR_11->regs + VAR_2);
 } else {

  VAR_10 = FUNC_2(VAR_11->regs + VAR_6);
  VAR_10 &= ~VAR_7;
  VAR_10 |= FUNC_0(VAR_8);
  FUNC_3(VAR_10, VAR_11->regs + VAR_6);
 }
}
