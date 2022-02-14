
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_cfg_pad_mii_tx {int clk_ipud; int clk_ih; int clk_os; int ctrl_ipud; int ctrl_os; int d10_ipud; int d10_os; int d32_ipud; int d32_os; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct sja1105_cfg_pad_mii_tx *VAR_1,
          enum packing_op VAR_2)
{
 const int VAR_3 = 4;

 FUNC_0(VAR_0, &VAR_1->d32_os, 28, 27, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->d32_ipud, 25, 24, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->d10_os, 20, 19, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->d10_ipud, 17, 16, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->ctrl_os, 12, 11, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->ctrl_ipud, 9, 8, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->clk_os, 4, 3, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->clk_ih, 2, 2, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->clk_ipud, 1, 0, VAR_3, VAR_2);
}
