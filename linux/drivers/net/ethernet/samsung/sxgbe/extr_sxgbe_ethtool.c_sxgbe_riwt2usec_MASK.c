
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sxgbe_priv_data {int sxgbe_clk; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, struct sxgbe_priv_data *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1->sxgbe_clk);

 if (!VAR_2)
  return 0;

 return (VAR_0 * 256) / (VAR_2 / 1000000);
}
