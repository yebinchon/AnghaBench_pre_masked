
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int mc_token; int mc_io; int net_dev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->mc_io, 0, VAR_0->mc_token);
 if (VAR_1)
  FUNC_2(VAR_0->net_dev, "dpni_reset() failed (err %d)\n",
       VAR_1);

 FUNC_0(VAR_0->mc_io, 0, VAR_0->mc_token);
}
