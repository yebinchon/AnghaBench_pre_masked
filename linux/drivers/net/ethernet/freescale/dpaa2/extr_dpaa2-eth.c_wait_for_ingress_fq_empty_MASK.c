
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpaa2_eth_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dpaa2_eth_priv *VAR_0)
{
 int VAR_1 = 10;
 u32 VAR_2;

 do {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   FUNC_1(100);
 } while (VAR_2 && --VAR_1);
}
