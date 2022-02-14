
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dev; TYPE_2__* desc; } ;
struct cygnus_pinctrl {int lock; scalar_t__ base1; } ;
struct cygnus_gpio_mux {int shift; scalar_t__ offset; int is_supported; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct cygnus_gpio_mux* drv_data; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__,int) ;
 struct cygnus_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pinctrl_dev *VAR_0,
         struct pinctrl_gpio_range *VAR_1,
         unsigned VAR_2)
{
 struct cygnus_pinctrl *VAR_3 = FUNC_1(VAR_0);
 struct cygnus_gpio_mux *VAR_4 = VAR_0->desc->pins[VAR_2].drv_data;
 u32 VAR_5;
 unsigned long VAR_6;

 if (!VAR_4->is_supported)
  return;

 FUNC_3(&VAR_3->lock, VAR_6);

 VAR_5 = FUNC_2(VAR_3->base1 + VAR_4->offset);
 VAR_5 &= ~(0x3 << VAR_4->shift);
 FUNC_5(VAR_5, VAR_3->base1 + VAR_4->offset);

 FUNC_4(&VAR_3->lock, VAR_6);

 FUNC_0(VAR_0->dev,
  "gpio disable free pin=%u offset=0x%x shift=%u\n",
  VAR_2, VAR_4->offset, VAR_4->shift);
}
