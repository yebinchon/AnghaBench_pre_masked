
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {unsigned int mmc_input_clk; int ns_in_one_cycle; } ;



__attribute__((used)) static unsigned int FUNC_0(struct mmc_davinci_host *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

 VAR_3 = VAR_0->mmc_input_clk;
 if (VAR_1 && VAR_3 > (2 * VAR_1))
  VAR_4 = ((unsigned int)VAR_3
    / (2 * VAR_1)) - 1;
 else
  VAR_4 = 0;

 VAR_2 = (unsigned int)VAR_3
  / (2 * (VAR_4 + 1));

 if (VAR_2 > VAR_1)
  VAR_4 = VAR_4 + 1;

 if (VAR_1 <= 400000)
  VAR_0->ns_in_one_cycle = (1000000) / (((VAR_3
    / (2 * (VAR_4 + 1)))/1000));
 else
  VAR_0->ns_in_one_cycle = (1000000) / (((VAR_3
    / (2 * (VAR_4 + 1)))/1000000));

 return VAR_4;
}
