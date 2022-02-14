
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct imx8mq_usb_phy {int clk; int vbus; } ;


 int FUNC_0 (int ) ;
 struct imx8mq_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct imx8mq_usb_phy *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->vbus);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1->clk);
}
