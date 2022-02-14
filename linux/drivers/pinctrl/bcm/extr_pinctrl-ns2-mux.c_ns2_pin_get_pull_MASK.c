
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct ns2_pinctrl {int lock; scalar_t__ pinconf_base; } ;
struct TYPE_6__ {int pull_shift; scalar_t__ offset; } ;
struct ns2_pin {TYPE_3__ pin_conf; } ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct ns2_pin* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ns2_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pinctrl_dev *VAR_3,
        unsigned int VAR_4, bool *VAR_5,
        bool *VAR_6)
{
 struct ns2_pinctrl *VAR_7 = FUNC_0(VAR_3);
 struct ns2_pin *VAR_8 = VAR_3->desc->pins[VAR_4].drv_data;
 unsigned long VAR_9;
 u32 VAR_10;

 FUNC_2(&VAR_7->lock, VAR_9);
 VAR_10 = FUNC_1(VAR_7->pinconf_base + VAR_8->pin_conf.offset);
 VAR_10 = (VAR_10 >> VAR_8->pin_conf.pull_shift) & VAR_1;
 *VAR_5 = 0;
 *VAR_6 = 0;

 if (VAR_10 == VAR_2)
  *VAR_5 = 1;

 if (VAR_10 == VAR_0)
  *VAR_6 = 1;
 FUNC_3(&VAR_7->lock, VAR_9);
}
