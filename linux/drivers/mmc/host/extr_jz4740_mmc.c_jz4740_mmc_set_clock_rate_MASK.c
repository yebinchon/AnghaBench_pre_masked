
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jz4740_mmc_host {scalar_t__ base; int clk; TYPE_1__* mmc; } ;
struct TYPE_2__ {int f_max; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct jz4740_mmc_host*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct jz4740_mmc_host *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->clk, VAR_1->mmc->f_max);

 VAR_4 = FUNC_0(VAR_1->clk);

 while (VAR_4 > VAR_2 && VAR_3 < 7) {
  ++VAR_3;
  VAR_4 >>= 1;
 }

 FUNC_3(VAR_3, VAR_1->base + VAR_0);
 return VAR_4;
}
