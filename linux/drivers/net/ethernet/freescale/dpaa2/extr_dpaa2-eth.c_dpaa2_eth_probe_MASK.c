
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int name; } ;
struct device {int dummy; } ;
struct fsl_mc_device {struct device dev; } ;
struct dpaa2_eth_priv {int do_link_poll; int mc_io; int * percpu_stats; int * percpu_extras; int poll_thread; int iommu_domain; struct net_device* net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 struct net_device* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct dpaa2_eth_priv*) ;
 int FUNC_6 (struct dpaa2_eth_priv*) ;
 int FUNC_7 (struct dpaa2_eth_priv*) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int ) ;
 int FUNC_10 (struct device*,struct net_device*) ;
 int FUNC_11 (struct dpaa2_eth_priv*) ;
 int FUNC_12 (struct dpaa2_eth_priv*) ;
 int FUNC_13 (struct dpaa2_eth_priv*) ;
 int FUNC_14 (struct dpaa2_eth_priv*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct dpaa2_eth_priv*) ;
 int FUNC_18 (struct fsl_mc_device*) ;
 int FUNC_19 (struct fsl_mc_device*,int ,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (int ,struct dpaa2_eth_priv*,char*,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct net_device*) ;
 struct dpaa2_eth_priv* FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*,char*) ;
 int VAR_8 ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct dpaa2_eth_priv*,int) ;
 int FUNC_29 (struct dpaa2_eth_priv*,int) ;
 int FUNC_30 (struct dpaa2_eth_priv*) ;
 int FUNC_31 (struct dpaa2_eth_priv*) ;
 int FUNC_32 (struct fsl_mc_device*) ;
 int FUNC_33 (struct dpaa2_eth_priv*) ;
 int FUNC_34 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_35(struct fsl_mc_device *VAR_9)
{
 struct device *VAR_10;
 struct net_device *VAR_11 = ((void*)0);
 struct dpaa2_eth_priv *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_10 = &VAR_9->dev;


 VAR_11 = FUNC_3(sizeof(*VAR_12), VAR_0);
 if (!VAR_11) {
  FUNC_8(VAR_10, "alloc_etherdev_mq() failed\n");
  return -VAR_1;
 }

 FUNC_1(VAR_11, VAR_10);
 FUNC_10(VAR_10, VAR_11);

 VAR_12 = FUNC_25(VAR_11);
 VAR_12->net_dev = VAR_11;

 VAR_12->iommu_domain = FUNC_21(VAR_10);


 VAR_13 = FUNC_19(VAR_9, VAR_4,
         &VAR_12->mc_io);
 if (VAR_13) {
  if (VAR_13 == -VAR_2)
   VAR_13 = -VAR_3;
  else
   FUNC_8(VAR_10, "MC portal allocation failed\n");
  goto err_portal_alloc;
 }


 VAR_13 = FUNC_32(VAR_9);
 if (VAR_13)
  goto err_dpni_setup;

 VAR_13 = FUNC_31(VAR_12);
 if (VAR_13)
  goto err_dpio_setup;

 FUNC_33(VAR_12);

 VAR_13 = FUNC_30(VAR_12);
 if (VAR_13)
  goto err_dpbp_setup;

 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13)
  goto err_bind;


 FUNC_2(VAR_12);


 VAR_12->percpu_stats = FUNC_4(*VAR_12->percpu_stats);
 if (!VAR_12->percpu_stats) {
  FUNC_8(VAR_10, "alloc_percpu(percpu_stats) failed\n");
  VAR_13 = -VAR_1;
  goto err_alloc_percpu_stats;
 }
 VAR_12->percpu_extras = FUNC_4(*VAR_12->percpu_extras);
 if (!VAR_12->percpu_extras) {
  FUNC_8(VAR_10, "alloc_percpu(percpu_extras) failed\n");
  VAR_13 = -VAR_1;
  goto err_alloc_percpu_extras;
 }

 VAR_13 = FUNC_24(VAR_11);
 if (VAR_13)
  goto err_netdev_init;


 VAR_13 = FUNC_28(VAR_12, !!(VAR_11->features & VAR_7));
 if (VAR_13)
  goto err_csum;

 VAR_13 = FUNC_29(VAR_12, !!(VAR_11->features &
       (VAR_6 | VAR_5)));
 if (VAR_13)
  goto err_csum;

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13)
  goto err_alloc_rings;

 VAR_13 = FUNC_34(VAR_9);
 if (VAR_13) {
  FUNC_26(VAR_11, "Failed to set link interrupt, fall back to polling\n");
  VAR_12->poll_thread = FUNC_22(VAR_8, VAR_12,
      "%s_poll_link", VAR_11->name);
  if (FUNC_0(VAR_12->poll_thread)) {
   FUNC_8(VAR_10, "Error starting polling thread\n");
   goto err_poll_thread;
  }
  VAR_12->do_link_poll = 1;
 }

 VAR_13 = FUNC_27(VAR_11);
 if (VAR_13 < 0) {
  FUNC_8(VAR_10, "register_netdev() failed\n");
  goto err_netdev_reg;
 }





 FUNC_9(VAR_10, "Probed interface %s\n", VAR_11->name);
 return 0;

err_netdev_reg:
 if (VAR_12->do_link_poll)
  FUNC_23(VAR_12->poll_thread);
 else
  FUNC_18(VAR_9);
err_poll_thread:
 FUNC_17(VAR_12);
err_alloc_rings:
err_csum:
err_netdev_init:
 FUNC_16(VAR_12->percpu_extras);
err_alloc_percpu_extras:
 FUNC_16(VAR_12->percpu_stats);
err_alloc_percpu_stats:
 FUNC_7(VAR_12);
err_bind:
 FUNC_12(VAR_12);
err_dpbp_setup:
 FUNC_13(VAR_12);
err_dpio_setup:
 FUNC_14(VAR_12);
err_dpni_setup:
 FUNC_20(VAR_12->mc_io);
err_portal_alloc:
 FUNC_10(VAR_10, ((void*)0));
 FUNC_15(VAR_11);

 return VAR_13;
}
