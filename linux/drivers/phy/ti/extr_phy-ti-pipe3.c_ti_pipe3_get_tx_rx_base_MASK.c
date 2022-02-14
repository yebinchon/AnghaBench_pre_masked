
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {void* phy_tx; void* phy_rx; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,char*) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct ti_pipe3 *VAR_1)
{
 struct resource *VAR_2;
 struct device *VAR_3 = VAR_1->dev;
 struct platform_device *VAR_4 = FUNC_5(VAR_3);

 VAR_2 = FUNC_4(VAR_4, VAR_0,
        "phy_rx");
 VAR_1->phy_rx = FUNC_3(VAR_3, VAR_2);
 if (FUNC_0(VAR_1->phy_rx))
  return FUNC_1(VAR_1->phy_rx);

 VAR_2 = FUNC_4(VAR_4, VAR_0,
        "phy_tx");
 VAR_1->phy_tx = FUNC_3(VAR_3, VAR_2);

 return FUNC_2(VAR_1->phy_tx);
}
