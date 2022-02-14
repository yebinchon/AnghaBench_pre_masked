
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dev; TYPE_2__* desc; } ;
struct ns2_pinctrl {int lock; scalar_t__ pinconf_base; } ;
struct TYPE_6__ {int drive_shift; scalar_t__ offset; } ;
struct ns2_pin {TYPE_3__ pin_conf; } ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct ns2_pin* drv_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct ns2_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
     u16 *VAR_3)
{
 struct ns2_pinctrl *VAR_4 = FUNC_1(VAR_1);
 struct ns2_pin *VAR_5 = VAR_1->desc->pins[VAR_2].drv_data;
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_6 = FUNC_2(VAR_4->pinconf_base + VAR_5->pin_conf.offset);
 *VAR_3 = (VAR_6 >> VAR_5->pin_conf.drive_shift) &
     VAR_0;
 *VAR_3 = (*VAR_3 + 1) * 2;
 FUNC_4(&VAR_4->lock, VAR_7);

 FUNC_0(VAR_1->dev, "pin:%u get drive strength:%d mA\n",
  VAR_2, *VAR_3);
 return 0;
}
