
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inno_hdmi_phy {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inno_hdmi_phy*,int) ;
 struct inno_hdmi_phy* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct inno_hdmi_phy *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0xa0) & VAR_0;
 return VAR_3 ? 0 : 1;
}
