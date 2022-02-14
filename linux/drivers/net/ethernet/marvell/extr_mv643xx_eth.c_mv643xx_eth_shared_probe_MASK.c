
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mv643xx_eth_shared_private {int tx_csum_limit; int clk; int * base; } ;
struct mv643xx_eth_shared_platform_data {int tx_csum_limit; } ;
struct mbus_dram_target_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mv643xx_eth_shared_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,int ) ;
 struct mv643xx_eth_shared_private* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct mv643xx_eth_shared_private*) ;
 int FUNC_8 (struct mv643xx_eth_shared_private*,struct mbus_dram_target_info const*) ;
 int VAR_4 ;
 int FUNC_9 (struct platform_device*) ;
 struct mbus_dram_target_info* FUNC_10 () ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct mv643xx_eth_shared_private*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 static int VAR_6;
 struct mv643xx_eth_shared_platform_data *VAR_7;
 struct mv643xx_eth_shared_private *VAR_8;
 const struct mbus_dram_target_info *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 if (!VAR_6++)
  FUNC_13("MV-643xx 10/100/1000 ethernet driver version %s\n",
     VAR_4);

 VAR_10 = FUNC_11(VAR_5, VAR_3, 0);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_6(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 FUNC_12(VAR_5, VAR_8);

 VAR_8->base = FUNC_5(&VAR_5->dev, VAR_10->start, FUNC_14(VAR_10));
 if (VAR_8->base == ((void*)0))
  return -VAR_1;

 VAR_8->clk = FUNC_4(&VAR_5->dev, ((void*)0));
 if (!FUNC_0(VAR_8->clk))
  FUNC_2(VAR_8->clk);




 VAR_9 = FUNC_10();
 if (VAR_9)
  FUNC_8(VAR_8, VAR_9);

 VAR_11 = FUNC_9(VAR_5);
 if (VAR_11)
  goto err_put_clk;
 VAR_7 = FUNC_3(&VAR_5->dev);

 VAR_8->tx_csum_limit = (VAR_7 != ((void*)0) && VAR_7->tx_csum_limit) ?
     VAR_7->tx_csum_limit : 9 * 1024;
 FUNC_7(VAR_8);

 return 0;

err_put_clk:
 if (!FUNC_0(VAR_8->clk))
  FUNC_1(VAR_8->clk);
 return VAR_11;
}
