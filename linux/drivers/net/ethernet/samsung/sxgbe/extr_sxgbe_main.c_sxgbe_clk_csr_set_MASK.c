
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sxgbe_priv_data {int clk_csr; int sxgbe_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sxgbe_priv_data *VAR_12)
{
 u32 VAR_13 = FUNC_0(VAR_12->sxgbe_clk);




 if (VAR_13 < VAR_6)
  VAR_12->clk_csr = VAR_0;
 else if (VAR_13 <= VAR_7)
  VAR_12->clk_csr = VAR_1;
 else if (VAR_13 <= VAR_8)
  VAR_12->clk_csr = VAR_2;
 else if (VAR_13 <= VAR_9)
  VAR_12->clk_csr = VAR_3;
 else if (VAR_13 <= VAR_10)
  VAR_12->clk_csr = VAR_4;
 else if (VAR_13 <= VAR_11)
  VAR_12->clk_csr = VAR_5;
}
