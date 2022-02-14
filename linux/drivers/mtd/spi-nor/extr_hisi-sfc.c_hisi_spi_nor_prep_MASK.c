
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {struct hifmc_priv* priv; } ;
struct hifmc_priv {int clkrate; struct hifmc_host* host; } ;
struct hifmc_host {int lock; int clk; } ;
typedef enum spi_nor_ops { ____Placeholder_spi_nor_ops } spi_nor_ops ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_0, enum spi_nor_ops VAR_1)
{
 struct hifmc_priv *VAR_2 = VAR_0->priv;
 struct hifmc_host *VAR_3 = VAR_2->host;
 int VAR_4;

 FUNC_2(&VAR_3->lock);

 VAR_4 = FUNC_1(VAR_3->clk, VAR_2->clkrate);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_0(VAR_3->clk);
 if (VAR_4)
  goto out;

 return 0;

out:
 FUNC_3(&VAR_3->lock);
 return VAR_4;
}
