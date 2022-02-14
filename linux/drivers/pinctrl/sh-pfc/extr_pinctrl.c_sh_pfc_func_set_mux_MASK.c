
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_pinctrl {struct sh_pfc_pin_config* configs; struct sh_pfc* pfc; } ;
struct sh_pfc_pin_group {unsigned int nr_pins; int * mux; int * pins; int name; } ;
struct sh_pfc_pin_config {int mux_set; int mux_mark; scalar_t__ gpio_enabled; } ;
struct sh_pfc {int lock; TYPE_1__* info; } ;
struct pinctrl_dev {int dev; } ;
struct TYPE_2__ {struct sh_pfc_pin_group* groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct sh_pfc_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct sh_pfc*,int ,int ) ;
 int FUNC_3 (struct sh_pfc*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_2, unsigned VAR_3,
          unsigned VAR_4)
{
 struct sh_pfc_pinctrl *VAR_5 = FUNC_1(VAR_2);
 struct sh_pfc *VAR_6 = VAR_5->pfc;
 const struct sh_pfc_pin_group *VAR_7 = &VAR_6->info->groups[VAR_4];
 unsigned long VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_2->dev, "Configuring pin group %s\n", VAR_7->name);

 FUNC_4(&VAR_6->lock, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_7->nr_pins; ++VAR_9) {
  int VAR_11 = FUNC_3(VAR_6, VAR_7->pins[VAR_9]);
  struct sh_pfc_pin_config *VAR_12 = &VAR_5->configs[VAR_11];





  if (VAR_12->gpio_enabled) {
   VAR_10 = -VAR_0;
   goto done;
  }

  VAR_10 = FUNC_2(VAR_6, VAR_7->mux[VAR_9], VAR_1);
  if (VAR_10 < 0)
   goto done;
 }


 for (VAR_9 = 0; VAR_9 < VAR_7->nr_pins; ++VAR_9) {
  int VAR_13 = FUNC_3(VAR_6, VAR_7->pins[VAR_9]);
  struct sh_pfc_pin_config *VAR_14 = &VAR_5->configs[VAR_13];

  VAR_14->mux_set = 1;
  VAR_14->mux_mark = VAR_7->mux[VAR_9];
 }

done:
 FUNC_5(&VAR_6->lock, VAR_8);
 return VAR_10;
}
