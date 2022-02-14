
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int hsync_len; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct pxafb_info {unsigned long hsync_time; TYPE_2__ fb; int clk; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pxafb_info *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;

 if ((VAR_1 == 0) || (VAR_0->fb.var.hsync_len == 0)) {
  VAR_0->hsync_time = 0;
  return;
 }

 VAR_2 = FUNC_0(VAR_0->clk) / (VAR_1 * VAR_0->fb.var.hsync_len);

 VAR_0->hsync_time = VAR_2;
}
