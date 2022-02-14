
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum gpmc_clk_domain { ____Placeholder_gpmc_clk_domain } gpmc_clk_domain ;




 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(int VAR_1, enum gpmc_clk_domain VAR_2)
{

 unsigned long VAR_3 = FUNC_1();
 u32 VAR_4;
 int VAR_5;

 switch (VAR_2) {
 case 129:

  VAR_4 = FUNC_0(VAR_1, VAR_0);
  VAR_5 = (VAR_4 & 0x03) + 1;

  VAR_3 *= VAR_5;
  break;
 case 128:

 default:
  break;
 }

 return VAR_3;

}
