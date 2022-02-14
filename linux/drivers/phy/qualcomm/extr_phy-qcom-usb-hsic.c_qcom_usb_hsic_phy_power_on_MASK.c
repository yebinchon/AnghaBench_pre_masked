
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpi {int dummy; } ;
struct qcom_usb_hsic_phy {int phy_clk; int cal_clk; int cal_sleep_clk; int pctl; struct ulpi* ulpi; } ;
struct pinctrl_state {int dummy; } ;
struct phy {int dummy; } ;


 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct pinctrl_state*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct qcom_usb_hsic_phy* FUNC_6 (struct phy*) ;
 struct pinctrl_state* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct pinctrl_state*) ;
 int FUNC_9 (struct ulpi*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_5)
{
 struct qcom_usb_hsic_phy *VAR_6 = FUNC_6(VAR_5);
 struct ulpi *VAR_7 = VAR_6->ulpi;
 struct pinctrl_state *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_6->phy_clk);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_6->cal_clk);
 if (VAR_9)
  goto err_cal;

 VAR_9 = FUNC_5(VAR_6->cal_sleep_clk);
 if (VAR_9)
  goto err_sleep;


 VAR_9 = FUNC_9(VAR_7, VAR_2, 0xff);
 if (VAR_9)
  goto err_ulpi;


 VAR_9 = FUNC_9(VAR_7, VAR_1, 0xa8);
 if (VAR_9)
  goto err_ulpi;


 VAR_8 = FUNC_7(VAR_6->pctl, VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_8(VAR_6->pctl, VAR_8);
 if (VAR_9)
  goto err_ulpi;


 VAR_9 = FUNC_9(VAR_7, FUNC_3(VAR_1), 0x01);
 if (VAR_9)
  goto err_ulpi;


 VAR_9 = FUNC_9(VAR_7, FUNC_2(VAR_3),
    VAR_4);
 if (VAR_9)
  goto err_ulpi;

 return VAR_9;
err_ulpi:
 FUNC_4(VAR_6->cal_sleep_clk);
err_sleep:
 FUNC_4(VAR_6->cal_clk);
err_cal:
 FUNC_4(VAR_6->phy_clk);
 return VAR_9;
}
