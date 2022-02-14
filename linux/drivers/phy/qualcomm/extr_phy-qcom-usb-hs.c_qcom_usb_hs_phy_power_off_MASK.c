
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_usb_hs_phy {int ref_clk; int sleep_clk; int v1p8; int v3p3; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qcom_usb_hs_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct qcom_usb_hs_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->v3p3);
 FUNC_2(VAR_1->v1p8);
 FUNC_0(VAR_1->sleep_clk);
 FUNC_0(VAR_1->ref_clk);

 return 0;
}
