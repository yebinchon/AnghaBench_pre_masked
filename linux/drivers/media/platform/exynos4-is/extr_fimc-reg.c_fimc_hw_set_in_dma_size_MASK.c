
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_frame {int f_height; int f_width; int height; int width; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {scalar_t__ out_path; struct fimc_frame s_frame; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fimc_ctx *VAR_4)
{
 struct fimc_dev *VAR_5 = VAR_4->fimc_dev;
 struct fimc_frame *VAR_6 = &VAR_4->s_frame;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;

 if (VAR_0 == VAR_4->out_path)
  VAR_8 |= VAR_2;

 VAR_7 |= (VAR_6->f_height << 16) | VAR_6->f_width;
 VAR_8 |= (VAR_6->height << 16) | VAR_6->width;

 FUNC_0(VAR_7, VAR_5->regs + VAR_3);
 FUNC_0(VAR_8, VAR_5->regs + VAR_1);
}
