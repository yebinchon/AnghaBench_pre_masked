
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int net_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct dpaa2_eth_priv *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = VAR_0 - VAR_1 -
       FUNC_1(VAR_4) - VAR_3;

 if (VAR_6 > VAR_7) {
  FUNC_2(VAR_4->net_dev, "Maximum MTU for XDP is %d\n",
       VAR_7 - VAR_2);
  return 0;
 }

 return 1;
}
