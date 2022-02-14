
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {scalar_t__* reg_offs; TYPE_1__* lcdc; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_lcdc_chan *VAR_1,
       int VAR_2, unsigned long VAR_3)
{
 FUNC_1(VAR_3, VAR_1->lcdc->base + VAR_1->reg_offs[VAR_2]);
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_3, VAR_1->lcdc->base + VAR_1->reg_offs[VAR_2] +
     VAR_0);
}
