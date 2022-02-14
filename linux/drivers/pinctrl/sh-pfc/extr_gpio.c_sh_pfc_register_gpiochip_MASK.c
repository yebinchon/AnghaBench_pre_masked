
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_pfc_window {scalar_t__ phys; scalar_t__ size; } ;
struct sh_pfc_pin_range {scalar_t__ start; scalar_t__ end; } ;
struct sh_pfc_chip {int gpio_chip; } ;
struct sh_pfc {unsigned int num_windows; scalar_t__ num_irqs; unsigned int nr_ranges; scalar_t__ nr_gpio_pins; TYPE_2__* info; TYPE_3__* dev; struct sh_pfc_pin_range* ranges; struct sh_pfc_chip* gpio; struct sh_pfc_window* windows; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct TYPE_6__ {scalar_t__ gpio_irq_size; scalar_t__ nr_func_gpios; TYPE_1__* data_regs; } ;
struct TYPE_5__ {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sh_pfc_chip*) ;
 int FUNC_2 (struct sh_pfc_chip*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 struct sh_pfc_chip* FUNC_6 (struct sh_pfc*,int ,struct sh_pfc_window*) ;

int FUNC_7(struct sh_pfc *VAR_4)
{
 struct sh_pfc_chip *VAR_5;
 phys_addr_t VAR_6;
 unsigned int VAR_7;

 if (VAR_4->info->data_regs == ((void*)0))
  return 0;






 VAR_6 = VAR_4->info->data_regs[0].reg;
 for (VAR_7 = 0; VAR_7 < VAR_4->num_windows; ++VAR_7) {
  struct sh_pfc_window *VAR_8 = &VAR_4->windows[VAR_7];

  if (VAR_6 >= VAR_8->phys &&
      VAR_6 < VAR_8->phys + VAR_8->size)
   break;
 }

 if (VAR_7 == VAR_4->num_windows)
  return 0;


 if (VAR_4->num_irqs != VAR_4->info->gpio_irq_size) {
  FUNC_3(VAR_4->dev, "invalid number of IRQ resources\n");
  return -VAR_1;
 }


 VAR_5 = FUNC_6(VAR_4, VAR_3, &VAR_4->windows[VAR_7]);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_4->gpio = VAR_5;

 if (FUNC_0(VAR_0) && VAR_4->dev->of_node)
  return 0;
 return 0;
}
