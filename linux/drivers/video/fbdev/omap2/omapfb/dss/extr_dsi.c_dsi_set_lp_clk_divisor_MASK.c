
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {unsigned long lp_clk; unsigned int lp_clk_div; } ;
struct TYPE_4__ {unsigned int lp_clk_div; } ;
struct dsi_data {TYPE_1__ current_lp_cinfo; TYPE_2__ user_lp_cinfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*,int ,int,int,int) ;
 unsigned long FUNC_2 (struct platform_device*) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;
 unsigned VAR_6;
 unsigned long VAR_7;
 unsigned VAR_8 = FUNC_4(VAR_2);


 VAR_6 = VAR_4->user_lp_cinfo.lp_clk_div;

 if (VAR_6 == 0 || VAR_6 > VAR_8)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_3);

 VAR_7 = VAR_5 / 2 / VAR_6;

 FUNC_0("LP_CLK_DIV %u, LP_CLK %lu\n", VAR_6, VAR_7);
 VAR_4->current_lp_cinfo.lp_clk = VAR_7;
 VAR_4->current_lp_cinfo.lp_clk_div = VAR_6;


 FUNC_1(VAR_3, VAR_0, VAR_6, 12, 0);


 FUNC_1(VAR_3, VAR_0, VAR_5 > 30000000 ? 1 : 0, 21, 21);

 return 0;
}
