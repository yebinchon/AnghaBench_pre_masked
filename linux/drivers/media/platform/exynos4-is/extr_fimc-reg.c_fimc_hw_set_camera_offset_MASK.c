
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_frame {int offs_h; int offs_v; int o_width; int width; int o_height; int height; } ;
struct fimc_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fimc_dev *VAR_5, struct fimc_frame *VAR_6)
{
 u32 VAR_7, VAR_8;

 u32 VAR_9 = FUNC_0(VAR_5->regs + VAR_0);

 VAR_9 &= ~(VAR_2 | VAR_4);
 VAR_9 |= VAR_3 |
  (VAR_6->offs_h << 16) | VAR_6->offs_v;

 FUNC_1(VAR_9, VAR_5->regs + VAR_0);


 VAR_7 = VAR_6->o_width - VAR_6->width - VAR_6->offs_h;
 VAR_8 = VAR_6->o_height - VAR_6->height - VAR_6->offs_v;
 VAR_9 = (VAR_7 << 16) | VAR_8;
 FUNC_1(VAR_9, VAR_5->regs + VAR_1);
}
