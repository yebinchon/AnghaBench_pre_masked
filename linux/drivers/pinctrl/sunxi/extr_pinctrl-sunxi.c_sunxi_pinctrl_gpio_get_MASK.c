
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sunxi_pinctrl {int membase; int pctl_dev; TYPE_1__* desc; } ;
struct gpio_chip {unsigned int base; } ;
struct TYPE_2__ {scalar_t__ irq_read_needs_mux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sunxi_pinctrl* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (struct gpio_chip*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct sunxi_pinctrl *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = FUNC_4(VAR_4);
 u8 VAR_7 = FUNC_3(VAR_4);
 bool VAR_8 = VAR_5->desc->irq_read_needs_mux &&
  FUNC_1(VAR_3, VAR_4);
 u32 VAR_9 = VAR_4 + VAR_3->base;
 u32 VAR_10;

 if (VAR_8)
  FUNC_5(VAR_5->pctl_dev, VAR_9, VAR_1);

 VAR_10 = (FUNC_2(VAR_5->membase + VAR_6) >> VAR_7) & VAR_0;

 if (VAR_8)
  FUNC_5(VAR_5->pctl_dev, VAR_9, VAR_2);

 return !!VAR_10;
}
