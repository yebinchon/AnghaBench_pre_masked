
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct nsp_pinctrl {int lock; int base0; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {int* drv_data; } ;


 struct nsp_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_0,
      struct pinctrl_gpio_range *VAR_1,
      unsigned int VAR_2)
{
 struct nsp_pinctrl *VAR_3 = FUNC_0(VAR_0);
 u32 *VAR_4 = VAR_0->desc->pins[VAR_2].drv_data;
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3->lock, VAR_6);
 VAR_5 = FUNC_1(VAR_3->base0);
 if ((VAR_5 & (1 << VAR_2)) == (*VAR_4 << VAR_2)) {
  VAR_5 &= ~(1 << VAR_2);
  if (!(*VAR_4))
   VAR_5 |= (1 << VAR_2);
  FUNC_4(VAR_5, VAR_3->base0);
 }
 FUNC_3(&VAR_3->lock, VAR_6);
}
