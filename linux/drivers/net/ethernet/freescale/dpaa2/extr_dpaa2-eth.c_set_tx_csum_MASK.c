
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int net_dev; int mc_token; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct dpaa2_eth_priv *VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->mc_io, 0, VAR_2->mc_token,
          VAR_0, VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_2->net_dev, "dpni_set_offload(TX_L3_CSUM) failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->mc_io, 0, VAR_2->mc_token,
          VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_2->net_dev, "dpni_set_offload(TX_L4_CSUM) failed\n");
  return VAR_4;
 }

 return 0;
}
