
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int net_dev; int mc_token; int mc_io; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct dpaa2_eth_priv *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;






 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2);
 else
  VAR_4 = VAR_0;

 VAR_5 = FUNC_1(VAR_1->mc_io, 0, VAR_1->mc_token, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_1->net_dev, "dpni_set_max_frame_length failed\n");
  return VAR_5;
 }

 return 0;
}
