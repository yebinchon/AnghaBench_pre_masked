
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int top; int left; } ;
struct flite_frame {int f_height; int f_width; TYPE_1__ rect; } ;
struct fimc_lite {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fimc_lite *VAR_4, struct flite_frame *VAR_5)
{
 u32 VAR_6;


 VAR_6 = FUNC_0(VAR_4->regs + VAR_0);
 VAR_6 &= ~VAR_1;
 VAR_6 |= (VAR_5->f_height << 16) | VAR_5->f_width;
 FUNC_1(VAR_6, VAR_4->regs + VAR_0);


 VAR_6 = FUNC_0(VAR_4->regs + VAR_2);
 VAR_6 &= ~VAR_3;
 VAR_6 |= (VAR_5->rect.top << 16) | VAR_5->rect.left;
 FUNC_1(VAR_6, VAR_4->regs + VAR_2);
}
