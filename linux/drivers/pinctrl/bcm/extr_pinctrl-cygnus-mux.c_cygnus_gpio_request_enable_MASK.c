
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


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,scalar_t__,int) ;
 struct cygnus_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
          struct pinctrl_gpio_range *VAR_2,
          unsigned VAR_3)
{
 struct cygnus_pinctrl *VAR_4 = FUNC_1(VAR_1);
 const struct cygnus_gpio_mux *VAR_5 = VAR_1->desc->pins[VAR_3].drv_data;
 u32 VAR_6;
 unsigned long VAR_7;


 if (!VAR_5->is_supported)
  return -VAR_0;

 FUNC_3(&VAR_4->lock, VAR_7);

 VAR_6 = FUNC_2(VAR_4->base1 + VAR_5->offset);
 VAR_6 |= 0x3 << VAR_5->shift;
 FUNC_5(VAR_6, VAR_4->base1 + VAR_5->offset);

 FUNC_4(&VAR_4->lock, VAR_7);

 FUNC_0(VAR_1->dev,
  "gpio request enable pin=%u offset=0x%x shift=%u\n",
  VAR_3, VAR_5->offset, VAR_5->shift);

 return 0;
}
