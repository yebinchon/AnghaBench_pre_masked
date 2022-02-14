
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int scp_clk_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ,int,int,int) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->scp_clk_refcount++ == 0)
  FUNC_0(VAR_1, VAR_0, 1, 14, 14);
}
