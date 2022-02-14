
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mci {int sdio_id0; int bus_hz; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct dw_mci *VAR_1)
{

 VAR_1->sdio_id0 = 8;

 if (FUNC_0(VAR_1->dev->of_node,
        "rockchip,rk3288-dw-mshc"))
  VAR_1->bus_hz /= VAR_0;

 return 0;
}
