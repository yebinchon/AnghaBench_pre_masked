
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl022 {int pump_transfers; int clk; TYPE_1__* master_info; } ;
struct amba_device {int dev; } ;
struct TYPE_2__ {scalar_t__ enable_dma; } ;


 struct pl022* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pl022*) ;
 int FUNC_4 (struct pl022*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct amba_device *VAR_0)
{
 struct pl022 *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;





 FUNC_5(&VAR_0->dev);

 FUNC_3(VAR_1);
 if (VAR_1->master_info->enable_dma)
  FUNC_4(VAR_1);

 FUNC_2(VAR_1->clk);
 FUNC_1(VAR_0);
 FUNC_6(&VAR_1->pump_transfers);
 return 0;
}
