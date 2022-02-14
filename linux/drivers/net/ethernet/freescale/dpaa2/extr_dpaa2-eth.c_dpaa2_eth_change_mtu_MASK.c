
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct dpaa2_eth_priv {int xdp_prog; } ;


 int VAR_0 ;
 struct dpaa2_eth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dpaa2_eth_priv*,int,int) ;
 int FUNC_2 (struct dpaa2_eth_priv*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct dpaa2_eth_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (!VAR_3->xdp_prog)
  goto out;

 if (!FUNC_2(VAR_3, VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2, 1);
 if (VAR_4)
  return VAR_4;

out:
 VAR_1->mtu = VAR_2;
 return 0;
}
