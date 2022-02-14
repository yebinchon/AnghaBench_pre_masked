
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {scalar_t__* reg_offs; TYPE_1__* lcdc; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct sh_mobile_lcdc_chan *VAR_0,
        int VAR_1)
{
 return FUNC_0(VAR_0->lcdc->base + VAR_0->reg_offs[VAR_1]);
}
