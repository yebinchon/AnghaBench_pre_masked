
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct dpaa2_eth_priv *VAR_2 = (struct dpaa2_eth_priv *)VAR_1;
 int VAR_3;

 while (!FUNC_0()) {
  VAR_3 = FUNC_1(VAR_2);
  if (FUNC_3(VAR_3))
   return VAR_3;

  FUNC_2(VAR_0);
 }

 return 0;
}
