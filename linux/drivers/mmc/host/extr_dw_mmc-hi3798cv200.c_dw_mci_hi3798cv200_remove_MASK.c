
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hi3798cv200_priv {int sample_clk; int drive_clk; } ;
struct dw_mci {struct hi3798cv200_priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct dw_mci* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct dw_mci *VAR_1 = FUNC_2(VAR_0);
 struct hi3798cv200_priv *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2->drive_clk);
 FUNC_0(VAR_2->sample_clk);

 return FUNC_1(VAR_0);
}
