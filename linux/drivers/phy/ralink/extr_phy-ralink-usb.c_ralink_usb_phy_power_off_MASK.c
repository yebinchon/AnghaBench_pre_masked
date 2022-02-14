
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ralink_usb_phy {int rsthost; int rstdev; int clk; int sysctl; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 struct ralink_usb_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 struct ralink_usb_phy *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_2->sysctl, VAR_0,
      VAR_2->clk, 0);


 FUNC_2(VAR_2->rstdev);
 FUNC_2(VAR_2->rsthost);

 return 0;
}
