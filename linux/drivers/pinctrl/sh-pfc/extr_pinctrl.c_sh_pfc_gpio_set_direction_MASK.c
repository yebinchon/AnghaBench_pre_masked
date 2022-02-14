
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_pinctrl {struct sh_pfc* pfc; } ;
struct sh_pfc_pin {int configs; int enum_id; } ;
struct sh_pfc {int lock; TYPE_1__* info; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {struct sh_pfc_pin* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct sh_pfc_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct sh_pfc*,int ,int) ;
 int FUNC_2 (struct sh_pfc*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_5,
         struct pinctrl_gpio_range *VAR_6,
         unsigned VAR_7, bool VAR_8)
{
 struct sh_pfc_pinctrl *VAR_9 = FUNC_0(VAR_5);
 struct sh_pfc *VAR_10 = VAR_9->pfc;
 int VAR_11 = VAR_8 ? VAR_1 : VAR_2;
 int VAR_12 = FUNC_2(VAR_10, VAR_7);
 const struct sh_pfc_pin *VAR_13 = &VAR_10->info->pins[VAR_12];
 unsigned long VAR_14;
 unsigned int VAR_15;
 int VAR_16;




 if (VAR_13->configs) {
  VAR_15 = VAR_8 ? VAR_3 : VAR_4;
  if (!(VAR_13->configs & VAR_15))
   return -VAR_0;
 }

 FUNC_3(&VAR_10->lock, VAR_14);

 VAR_16 = FUNC_1(VAR_10, VAR_13->enum_id, VAR_11);
 if (VAR_16 < 0)
  goto done;

done:
 FUNC_4(&VAR_10->lock, VAR_14);
 return VAR_16;
}
