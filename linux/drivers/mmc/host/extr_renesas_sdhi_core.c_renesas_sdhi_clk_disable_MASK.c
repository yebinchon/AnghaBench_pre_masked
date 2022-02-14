
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct renesas_sdhi {int clk_cd; int clk; } ;


 int FUNC_0 (int ) ;
 struct renesas_sdhi* FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_0)
{
 struct renesas_sdhi *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);
 FUNC_0(VAR_1->clk_cd);
}
