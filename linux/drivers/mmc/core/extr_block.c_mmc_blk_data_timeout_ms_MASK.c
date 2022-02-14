
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ timeout_clks; scalar_t__ timeout_ns; } ;


 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static unsigned int FUNC_2(struct mmc_host *VAR_0,
         struct mmc_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->timeout_ns, 1000000);
 unsigned int VAR_3;

 if (VAR_1->timeout_clks) {
  VAR_3 = FUNC_1(VAR_0);
  VAR_2 += FUNC_0(VAR_1->timeout_clks, VAR_3);
 }

 return VAR_2;
}
