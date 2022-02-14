
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int left; int top; int width; int height; } ;
struct flite_frame {int f_width; int f_height; TYPE_1__ rect; } ;
struct fimc_lite {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fimc_lite *VAR_4, struct flite_frame *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_4->regs + VAR_0);
 VAR_8 &= ~VAR_2;
 VAR_8 |= (VAR_5->rect.left << 16) | VAR_5->rect.top;
 VAR_8 |= VAR_3;
 FUNC_1(VAR_8, VAR_4->regs + VAR_0);

 VAR_6 = VAR_5->f_width - VAR_5->rect.width - VAR_5->rect.left;
 VAR_7 = VAR_5->f_height - VAR_5->rect.height - VAR_5->rect.top;

 VAR_8 = (VAR_6 << 16) | VAR_7;
 FUNC_1(VAR_8, VAR_4->regs + VAR_1);
}
