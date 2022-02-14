
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int num_tc; } ;
struct dpaa2_eth_priv {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct dpaa2_eth_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int,int,int) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3,
         enum tc_setup_type VAR_4, void *VAR_5)
{
 struct dpaa2_eth_priv *VAR_6 = FUNC_3(VAR_3);
 struct tc_mqprio_qopt *VAR_7 = VAR_5;
 u8 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_4 != VAR_2)
  return -VAR_0;

 VAR_7->hw = VAR_1;
 VAR_9 = FUNC_0(VAR_6);
 VAR_8 = VAR_7->num_tc;

 if (VAR_8 == VAR_3->num_tc)
  return 0;

 if (VAR_8 > FUNC_1(VAR_6)) {
  FUNC_2(VAR_3, "Max %d traffic classes supported\n",
      FUNC_1(VAR_6));
  return -VAR_0;
 }

 if (!VAR_8) {
  FUNC_4(VAR_3);
  FUNC_7(VAR_3, VAR_9);
  goto out;
 }

 FUNC_5(VAR_3, VAR_8);
 FUNC_7(VAR_3, VAR_8 * VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  FUNC_6(VAR_3, VAR_10, VAR_9, VAR_10 * VAR_9);

out:
 FUNC_8(VAR_6);

 return 0;
}
