
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gpmc_clk_domain { ____Placeholder_gpmc_clk_domain } gpmc_clk_domain ;


 unsigned long FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0, int VAR_1,
      enum gpmc_clk_domain VAR_2)
{
 unsigned long VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2);

 return (VAR_0 * 1000 + VAR_3 - 1) / VAR_3;
}
