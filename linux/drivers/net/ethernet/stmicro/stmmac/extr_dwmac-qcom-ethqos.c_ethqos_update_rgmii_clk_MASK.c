
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_ethqos {int rgmii_clk_rate; int rgmii_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct qcom_ethqos *VAR_3, unsigned int VAR_4)
{
 switch (VAR_4) {
 case 128:
  VAR_3->rgmii_clk_rate = VAR_0;
  break;

 case 129:
  VAR_3->rgmii_clk_rate = VAR_1;
  break;

 case 130:
  VAR_3->rgmii_clk_rate = VAR_2;
  break;
 }

 FUNC_0(VAR_3->rgmii_clk, VAR_3->rgmii_clk_rate);
}
