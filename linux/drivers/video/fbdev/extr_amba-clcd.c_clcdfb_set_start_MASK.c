
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long smem_start; unsigned long line_length; } ;
struct TYPE_4__ {unsigned long yoffset; int yres; } ;
struct TYPE_5__ {TYPE_3__ fix; TYPE_1__ var; } ;
struct clcd_fb {scalar_t__ regs; TYPE_2__ fb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct clcd_fb *VAR_2)
{
 unsigned long VAR_3 = VAR_2->fb.fix.smem_start;
 unsigned long VAR_4;

 VAR_3 += VAR_2->fb.var.yoffset * VAR_2->fb.fix.line_length;
 VAR_4 = VAR_3 + VAR_2->fb.var.yres * VAR_2->fb.fix.line_length / 2;

 FUNC_0(VAR_3, VAR_2->regs + VAR_1);
 FUNC_0(VAR_4, VAR_2->regs + VAR_0);
}
