
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_priv_data {int macclk; TYPE_1__* soc_data; scalar_t__ regulator; int refclk; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ need_div_macclk; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 struct rockchip_priv_data* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct rockchip_priv_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->refclk);

 if (VAR_2->regulator)
  FUNC_5(VAR_2->regulator);

 if (VAR_2->soc_data->need_div_macclk)
  FUNC_1(VAR_2->macclk);

 FUNC_2(VAR_1);
 return VAR_3;
}
