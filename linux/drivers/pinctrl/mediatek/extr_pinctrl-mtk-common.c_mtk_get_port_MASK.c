
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_2__ {unsigned long port_mask; unsigned long port_shf; } ;



__attribute__((used)) static unsigned int FUNC_0(struct mtk_pinctrl *VAR_0, unsigned long VAR_1)
{

 return ((VAR_1 >> 4) & VAR_0->devdata->port_mask)
   << VAR_0->devdata->port_shf;
}
