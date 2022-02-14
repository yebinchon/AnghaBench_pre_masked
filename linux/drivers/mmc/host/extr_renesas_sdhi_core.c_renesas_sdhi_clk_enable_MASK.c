
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {struct mmc_host* mmc; } ;
struct renesas_sdhi {int clk; int clk_cd; } ;
struct mmc_host {int f_min; scalar_t__ f_max; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct renesas_sdhi* FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (int,long) ;
 int FUNC_6 (struct tmio_mmc_host*,int) ;

__attribute__((used)) static int FUNC_7(struct tmio_mmc_host *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->mmc;
 struct renesas_sdhi *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = FUNC_2(VAR_2->clk);

 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2->clk_cd);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->clk);
  return VAR_3;
 }







 if (!VAR_1->f_max)
  VAR_1->f_max = FUNC_1(VAR_2->clk);





 VAR_1->f_min = FUNC_5(FUNC_3(VAR_2->clk, 1) / 512, 1L);


 FUNC_6(VAR_0, 16);

 return 0;
}
