
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ks8995_switch {TYPE_2__* pdata; int regs_attr; } ;
struct TYPE_4__ {int reset_gpio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct ks8995_switch* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct ks8995_switch *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_0->dev.kobj, &VAR_1->regs_attr);


 if (VAR_1->pdata && FUNC_0(VAR_1->pdata->reset_gpio))
  FUNC_2(FUNC_1(VAR_1->pdata->reset_gpio), 1);

 return 0;
}
