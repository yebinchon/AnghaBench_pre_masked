
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct sh_pfc_pinctrl {struct pinctrl_pin_desc* pins; void* configs; } ;
struct sh_pfc_pin {unsigned int pin; int name; } ;
struct sh_pfc {TYPE_1__* info; int dev; } ;
struct pinctrl_pin_desc {unsigned int number; int name; } ;
struct TYPE_2__ {unsigned int nr_pins; struct sh_pfc_pin* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,unsigned int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sh_pfc *VAR_2, struct sh_pfc_pinctrl *VAR_3)
{
 unsigned int VAR_4;


 VAR_3->pins = FUNC_0(VAR_2->dev,
     VAR_2->info->nr_pins, sizeof(*VAR_3->pins),
     VAR_1);
 if (FUNC_1(!VAR_3->pins))
  return -VAR_0;

 VAR_3->configs = FUNC_0(VAR_2->dev,
        VAR_2->info->nr_pins, sizeof(*VAR_3->configs),
        VAR_1);
 if (FUNC_1(!VAR_3->configs))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->info->nr_pins; ++VAR_4) {
  const struct sh_pfc_pin *VAR_5 = &VAR_2->info->pins[VAR_4];
  struct pinctrl_pin_desc *VAR_6 = &VAR_3->pins[VAR_4];


  VAR_6->number = VAR_5->pin != (u16)-1 ? VAR_5->pin : VAR_4;
  VAR_6->name = VAR_5->name;
 }

 return 0;
}
