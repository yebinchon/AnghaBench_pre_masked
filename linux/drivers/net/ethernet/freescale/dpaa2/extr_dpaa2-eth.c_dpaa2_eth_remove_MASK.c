
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {int name; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct fsl_mc_device {struct device dev; } ;
struct dpaa2_eth_priv {int mc_io; int percpu_extras; int percpu_stats; int poll_thread; scalar_t__ do_link_poll; } ;


 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct net_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct dpaa2_eth_priv*) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;
 int FUNC_5 (struct dpaa2_eth_priv*) ;
 int FUNC_6 (struct dpaa2_eth_priv*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct dpaa2_eth_priv*) ;
 int FUNC_10 (struct fsl_mc_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct dpaa2_eth_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct fsl_mc_device *VAR_0)
{
 struct device *VAR_1;
 struct net_device *VAR_2;
 struct dpaa2_eth_priv *VAR_3;

 VAR_1 = &VAR_0->dev;
 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_13(VAR_2);




 FUNC_14(VAR_2);

 if (VAR_3->do_link_poll)
  FUNC_12(VAR_3->poll_thread);
 else
  FUNC_10(VAR_0);

 FUNC_9(VAR_3);
 FUNC_8(VAR_3->percpu_stats);
 FUNC_8(VAR_3->percpu_extras);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);

 FUNC_11(VAR_3->mc_io);

 FUNC_7(VAR_2);

 FUNC_1(VAR_2->dev.parent, "Removed interface %s\n", VAR_2->name);

 return 0;
}
