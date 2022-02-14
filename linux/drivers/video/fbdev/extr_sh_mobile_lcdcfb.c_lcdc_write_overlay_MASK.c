
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_overlay {TYPE_2__* channel; } ;
struct TYPE_4__ {TYPE_1__* lcdc; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sh_mobile_lcdc_overlay *VAR_1,
          int VAR_2, unsigned long VAR_3)
{
 FUNC_0(VAR_3, VAR_1->channel->lcdc->base + VAR_2);
 FUNC_0(VAR_3, VAR_1->channel->lcdc->base + VAR_2 + VAR_0);
}
