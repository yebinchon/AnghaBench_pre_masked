
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pinctrl_dev {int dev; TYPE_3__* desc; } ;
struct ns2_pinctrl {int lock; scalar_t__ pinconf_base; } ;
struct TYPE_4__ {int input_en; scalar_t__ offset; } ;
struct ns2_pin {TYPE_1__ pin_conf; } ;
struct TYPE_6__ {TYPE_2__* pins; } ;
struct TYPE_5__ {struct ns2_pin* drv_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct ns2_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1, unsigned int VAR_2)
{
 struct ns2_pinctrl *VAR_3 = FUNC_1(VAR_1);
 struct ns2_pin *VAR_4 = VAR_1->desc->pins[VAR_2].drv_data;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_6 = FUNC_2(VAR_3->pinconf_base + VAR_4->pin_conf.offset);
 VAR_6 = (VAR_6 >> VAR_4->pin_conf.input_en) &
   VAR_0;
 FUNC_4(&VAR_3->lock, VAR_5);

 if (!VAR_6)
  VAR_6 = VAR_0;
 else
  VAR_6 = 0;

 FUNC_0(VAR_1->dev, "pin:%u get disable:%d\n", VAR_2, VAR_6);
 return VAR_6;
}
