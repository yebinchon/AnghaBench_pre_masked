
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_nfc {int ahb_clk; int mod_clk; scalar_t__ dmac; int reset; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct sunxi_nfc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sunxi_nfc*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sunxi_nfc *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1);

 FUNC_3(VAR_1->reset);

 if (VAR_1->dmac)
  FUNC_1(VAR_1->dmac);
 FUNC_0(VAR_1->mod_clk);
 FUNC_0(VAR_1->ahb_clk);

 return 0;
}
