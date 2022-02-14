
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_padctl {int rst; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct tegra_xusb_padctl* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct platform_device *VAR_0)
{
 struct tegra_xusb_padctl *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->rst);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to assert reset: %d\n", VAR_2);

 return VAR_2;
}
