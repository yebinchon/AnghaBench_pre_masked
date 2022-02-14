
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct hix5hd2_priv {int tx_timeout_task; int phy_node; int hw_cap; int bus; int napi; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct hix5hd2_priv*) ;
 int FUNC_4 (struct hix5hd2_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct hix5hd2_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 struct net_device* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_10(VAR_0);
 struct hix5hd2_priv *VAR_2 = FUNC_7(VAR_1);

 FUNC_8(&VAR_2->napi);
 FUNC_11(VAR_1);
 FUNC_6(VAR_2->bus);
 FUNC_5(VAR_2->bus);

 if (FUNC_0(VAR_2->hw_cap))
  FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_9(VAR_2->phy_node);
 FUNC_1(&VAR_2->tx_timeout_task);
 FUNC_2(VAR_1);

 return 0;
}
