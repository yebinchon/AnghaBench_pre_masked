
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_gpio_irq_unmask_request {int which; } ;
struct gb_gpio_controller {int connection; TYPE_1__* gbphy_dev; } ;
struct device {int dummy; } ;
typedef int request ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,struct gb_gpio_irq_unmask_request*,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct gb_gpio_controller *VAR_1, u8 VAR_2)
{
 struct device *VAR_3 = &VAR_1->gbphy_dev->dev;
 struct gb_gpio_irq_unmask_request VAR_4;
 int VAR_5;

 VAR_4.which = VAR_2;
 VAR_5 = FUNC_1(VAR_1->connection,
    VAR_0,
    &VAR_4, sizeof(VAR_4), ((void*)0), 0);
 if (VAR_5)
  FUNC_0(VAR_3, "failed to unmask irq: %d\n", VAR_5);
}
