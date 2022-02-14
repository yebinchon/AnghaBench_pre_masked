
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct ulpi {TYPE_1__ dev; } ;
struct qcom_usb_hsic_phy {struct clk* phy; struct clk* cal_sleep_clk; struct clk* cal_clk; struct clk* phy_clk; struct clk* pctl; struct ulpi* ulpi; } ;
struct phy_provider {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct phy_provider*) ;
 struct clk* FUNC_3 (TYPE_1__*,char*) ;
 struct qcom_usb_hsic_phy* FUNC_4 (TYPE_1__*,int,int ) ;
 struct phy_provider* FUNC_5 (TYPE_1__*,int ) ;
 struct clk* FUNC_6 (TYPE_1__*,int ,int *) ;
 struct clk* FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (struct clk*,struct qcom_usb_hsic_phy*) ;
 int VAR_3 ;
 int FUNC_9 (struct ulpi*,struct qcom_usb_hsic_phy*) ;

__attribute__((used)) static int FUNC_10(struct ulpi *VAR_4)
{
 struct qcom_usb_hsic_phy *VAR_5;
 struct phy_provider *VAR_6;
 struct clk *VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_9(VAR_4, VAR_5);

 VAR_5->ulpi = VAR_4;
 VAR_5->pctl = FUNC_7(&VAR_4->dev);
 if (FUNC_0(VAR_5->pctl))
  return FUNC_1(VAR_5->pctl);

 VAR_5->phy_clk = VAR_7 = FUNC_3(&VAR_4->dev, "phy");
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_5->cal_clk = VAR_7 = FUNC_3(&VAR_4->dev, "cal");
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_5->cal_sleep_clk = VAR_7 = FUNC_3(&VAR_4->dev, "cal_sleep");
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_5->phy = FUNC_6(&VAR_4->dev, VAR_4->dev.of_node,
        &VAR_3);
 if (FUNC_0(VAR_5->phy))
  return FUNC_1(VAR_5->phy);
 FUNC_8(VAR_5->phy, VAR_5);

 VAR_6 = FUNC_5(&VAR_4->dev, VAR_2);
 return FUNC_2(VAR_6);
}
