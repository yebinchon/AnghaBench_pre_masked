
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_frame {int f_height; int f_width; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {struct fimc_frame d_frame; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fimc_ctx *VAR_3)
{
 struct fimc_dev *VAR_4 = VAR_3->fimc_dev;
 struct fimc_frame *VAR_5 = &VAR_3->d_frame;
 u32 VAR_6;

 VAR_6 = (VAR_5->f_height << 16) | VAR_5->f_width;
 FUNC_1(VAR_6, VAR_4->regs + VAR_2);


 VAR_6 = FUNC_0(VAR_4->regs + VAR_0);
 if (VAR_5->f_width >= 1280)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_6, VAR_4->regs + VAR_0);

}
