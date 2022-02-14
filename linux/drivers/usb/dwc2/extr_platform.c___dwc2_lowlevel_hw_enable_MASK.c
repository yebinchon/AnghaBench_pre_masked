
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dwc2_hsotg {int phy; TYPE_1__* plat; scalar_t__ uphy; scalar_t__ clk; int supplies; int dev; } ;
struct TYPE_2__ {int (* phy_init ) (struct platform_device*,int ) ;int phy_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct platform_device* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct dwc2_hsotg *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_6(VAR_0->dev);
 int VAR_2;

 VAR_2 = FUNC_4(FUNC_0(VAR_0->supplies),
        VAR_0->supplies);
 if (VAR_2)
  return VAR_2;

 if (VAR_0->clk) {
  VAR_2 = FUNC_1(VAR_0->clk);
  if (VAR_2)
   return VAR_2;
 }

 if (VAR_0->uphy) {
  VAR_2 = FUNC_7(VAR_0->uphy);
 } else if (VAR_0->plat && VAR_0->plat->phy_init) {
  VAR_2 = VAR_0->plat->phy_init(VAR_1, VAR_0->plat->phy_type);
 } else {
  VAR_2 = FUNC_3(VAR_0->phy);
  if (VAR_2 == 0)
   VAR_2 = FUNC_2(VAR_0->phy);
 }

 return VAR_2;
}
