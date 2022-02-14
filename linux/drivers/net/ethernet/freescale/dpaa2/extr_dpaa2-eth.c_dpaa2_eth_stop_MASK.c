
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; } ;


 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (struct dpaa2_eth_priv*) ;
 int FUNC_4 (int) ;
 struct dpaa2_eth_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct dpaa2_eth_priv*) ;
 int FUNC_10 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0)
{
 struct dpaa2_eth_priv *VAR_1 = FUNC_5(VAR_0);
 int VAR_2 = 0;
 int VAR_3 = 10;

 FUNC_8(VAR_0);
 FUNC_7(VAR_0);
 FUNC_9(VAR_1);

 do {
  FUNC_1(VAR_1->mc_io, 0, VAR_1->mc_token);
  FUNC_2(VAR_1->mc_io, 0, VAR_1->mc_token, &VAR_2);
  if (VAR_2)

   FUNC_4(100);
 } while (VAR_2 && --VAR_3);
 if (!VAR_3) {
  FUNC_6(VAR_0, "Retry count exceeded disabling DPNI\n");



 }

 FUNC_10(VAR_1);
 FUNC_0(VAR_1);


 FUNC_3(VAR_1);

 return 0;
}
