
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_info {int size_data; struct musb_hdrc_platform_data* data; int num_res; int res; int * parent; } ;
struct platform_device {int dev; int num_resources; int resource; } ;
struct musb_hdrc_platform_data {int * platform_ops; } ;
struct clk {int dev; int num_resources; int resource; } ;
struct am35x_glue {struct platform_device* phy; struct platform_device* musb; struct platform_device* clk; struct platform_device* phy_clk; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device_info VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 struct platform_device* FUNC_4 (int *,char*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,char*,...) ;
 struct musb_hdrc_platform_data* FUNC_7 (int *) ;
 int FUNC_8 (struct am35x_glue*) ;
 struct am35x_glue* FUNC_9 (int,int ) ;
 struct platform_device* FUNC_10 (struct platform_device_info*) ;
 int FUNC_11 (struct platform_device*,struct am35x_glue*) ;
 struct platform_device* FUNC_12 () ;
 int FUNC_13 (struct platform_device*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 struct musb_hdrc_platform_data *VAR_5 = FUNC_7(&VAR_4->dev);
 struct platform_device *VAR_6;
 struct am35x_glue *VAR_7;
 struct platform_device_info VAR_8;
 struct clk *VAR_9;
 struct clk *VAR_10;

 int VAR_11 = -VAR_0;

 VAR_7 = FUNC_9(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto err0;

 VAR_9 = FUNC_4(&VAR_4->dev, "fck");
 if (FUNC_0(VAR_9)) {
  FUNC_6(&VAR_4->dev, "failed to get PHY clock\n");
  VAR_11 = FUNC_1(VAR_9);
  goto err3;
 }

 VAR_10 = FUNC_4(&VAR_4->dev, "ick");
 if (FUNC_0(VAR_10)) {
  FUNC_6(&VAR_4->dev, "failed to get clock\n");
  VAR_11 = FUNC_1(VAR_10);
  goto err4;
 }

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11) {
  FUNC_6(&VAR_4->dev, "failed to enable PHY clock\n");
  goto err5;
 }

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11) {
  FUNC_6(&VAR_4->dev, "failed to enable clock\n");
  goto err6;
 }

 VAR_7->dev = &VAR_4->dev;
 VAR_7->phy_clk = VAR_9;
 VAR_7->clk = VAR_10;

 VAR_5->platform_ops = &VAR_3;

 VAR_7->phy = FUNC_12();
 if (FUNC_0(VAR_7->phy)) {
  VAR_11 = FUNC_1(VAR_7->phy);
  goto err7;
 }
 FUNC_11(VAR_4, VAR_7);

 VAR_8 = VAR_2;
 VAR_8.parent = &VAR_4->dev;
 VAR_8.res = VAR_4->resource;
 VAR_8.num_res = VAR_4->num_resources;
 VAR_8.data = VAR_5;
 VAR_8.size_data = sizeof(*VAR_5);

 VAR_7->musb = VAR_6 = FUNC_10(&VAR_8);
 if (FUNC_0(VAR_6)) {
  VAR_11 = FUNC_1(VAR_6);
  FUNC_6(&VAR_4->dev, "failed to register musb device: %d\n", VAR_11);
  goto err8;
 }

 return 0;

err8:
 FUNC_13(VAR_7->phy);

err7:
 FUNC_2(VAR_10);

err6:
 FUNC_2(VAR_9);

err5:
 FUNC_5(VAR_10);

err4:
 FUNC_5(VAR_9);

err3:
 FUNC_8(VAR_7);

err0:
 return VAR_11;
}
