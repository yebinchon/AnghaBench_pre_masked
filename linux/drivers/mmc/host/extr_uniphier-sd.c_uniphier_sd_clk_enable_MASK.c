
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int clk_rate; int caps; int clk; int rst; int rst_br; } ;
struct tmio_mmc_host {struct mmc_host* mmc; } ;
struct mmc_host {int f_max; int f_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct uniphier_sd_priv* FUNC_6 (struct tmio_mmc_host*) ;

__attribute__((used)) static int FUNC_7(struct tmio_mmc_host *VAR_2)
{
 struct uniphier_sd_priv *VAR_3 = FUNC_6(VAR_2);
 struct mmc_host *VAR_4 = VAR_2->mmc;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->clk);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3->clk, VAR_0);
 if (VAR_5)
  goto disable_clk;

 VAR_3->clk_rate = FUNC_1(VAR_3->clk);


 if (!VAR_4->f_max)
  VAR_4->f_max = VAR_3->clk_rate;





 if (VAR_3->caps & VAR_1)
  VAR_4->f_min = VAR_3->clk_rate / 1024;
 else
  VAR_4->f_min = VAR_3->clk_rate / 512;

 VAR_5 = FUNC_5(VAR_3->rst);
 if (VAR_5)
  goto disable_clk;

 VAR_5 = FUNC_5(VAR_3->rst_br);
 if (VAR_5)
  goto assert_rst;

 return 0;

assert_rst:
 FUNC_4(VAR_3->rst);
disable_clk:
 FUNC_0(VAR_3->clk);

 return VAR_5;
}
