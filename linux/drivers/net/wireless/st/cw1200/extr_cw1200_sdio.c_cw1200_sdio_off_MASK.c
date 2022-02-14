
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_platform_data_sdio {int (* clk_ctrl ) (struct cw1200_platform_data_sdio const*,int) ;int (* power_ctrl ) (struct cw1200_platform_data_sdio const*,int) ;scalar_t__ reset; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cw1200_platform_data_sdio const*,int) ;
 int FUNC_4 (struct cw1200_platform_data_sdio const*,int) ;

__attribute__((used)) static int FUNC_5(const struct cw1200_platform_data_sdio *VAR_0)
{
 if (VAR_0->reset) {
  FUNC_1(VAR_0->reset, 0);
  FUNC_2(30);
  FUNC_0(VAR_0->reset);
 }

 if (VAR_0->power_ctrl)
  VAR_0->power_ctrl(VAR_0, 0);
 if (VAR_0->clk_ctrl)
  VAR_0->clk_ctrl(VAR_0, 0);

 return 0;
}
