
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pinctrl_pin_desc {int number; } ;
struct pcs_soc_data {unsigned int irq_enable_mask; } ;
struct TYPE_6__ {int cur; struct pinctrl_pin_desc* pa; } ;
struct TYPE_4__ {int npins; } ;
struct pcs_device {unsigned int (* read ) (unsigned int) ;unsigned int base; TYPE_3__ pins; int (* write ) (unsigned int,unsigned int) ;TYPE_2__* res; int dev; TYPE_1__ desc; struct pcs_soc_data socdata; } ;
struct TYPE_5__ {scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct pcs_device *VAR_1, unsigned VAR_2,
  unsigned VAR_3)
{
 struct pcs_soc_data *VAR_4 = &VAR_1->socdata;
 struct pinctrl_pin_desc *VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->pins.cur;
 if (VAR_6 >= VAR_1->desc.npins) {
  FUNC_1(VAR_1->dev, "too many pins, max %i\n",
   VAR_1->desc.npins);
  return -VAR_0;
 }

 if (VAR_4->irq_enable_mask) {
  unsigned VAR_7;

  VAR_7 = VAR_1->read(VAR_1->base + VAR_2);
  if (VAR_7 & VAR_4->irq_enable_mask) {
   FUNC_0(VAR_1->dev, "irq enabled at boot for pin at %lx (%x), clearing\n",
    (unsigned long)VAR_1->res->start + VAR_2, VAR_7);
   VAR_7 &= ~VAR_4->irq_enable_mask;
   VAR_1->write(VAR_7, VAR_1->base + VAR_2);
  }
 }

 VAR_5 = &VAR_1->pins.pa[VAR_6];
 VAR_5->number = VAR_6;
 VAR_1->pins.cur++;

 return VAR_6;
}
