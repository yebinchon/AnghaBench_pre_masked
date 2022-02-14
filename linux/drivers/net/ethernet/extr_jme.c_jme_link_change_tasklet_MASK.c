
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct jme_adapter {scalar_t__ old_mtu; int link_changing; int rxempty_task; int rxclean_task; int txclean_task; int flags; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*) ;
 int FUNC_7 (struct jme_adapter*) ;
 int FUNC_8 (struct jme_adapter*) ;
 int FUNC_9 (struct jme_adapter*) ;
 int FUNC_10 (struct jme_adapter*) ;
 int FUNC_11 (struct jme_adapter*) ;
 scalar_t__ FUNC_12 (struct jme_adapter*) ;
 int FUNC_13 (struct jme_adapter*) ;
 int FUNC_14 (struct jme_adapter*) ;
 int FUNC_15 (struct jme_adapter*) ;
 int FUNC_16 (struct jme_adapter*) ;
 int FUNC_17 (struct jme_adapter*) ;
 int FUNC_18 (struct jme_adapter*) ;
 int FUNC_19 (struct jme_adapter*) ;
 int FUNC_20 (struct net_device*) ;
 scalar_t__ FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct jme_adapter*,int ,struct net_device*,char*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int ,int *) ;

__attribute__((used)) static void
FUNC_29(unsigned long VAR_2)
{
 struct jme_adapter *VAR_3 = (struct jme_adapter *)VAR_2;
 struct net_device *VAR_4 = VAR_3->dev;
 int VAR_5;

 while (!FUNC_0(&VAR_3->link_changing)) {
  FUNC_1(&VAR_3->link_changing);
  FUNC_22(VAR_3, VAR_1, VAR_3->dev, "Get link change lock failed\n");
  while (FUNC_2(&VAR_3->link_changing) != 1)
   FUNC_22(VAR_3, VAR_1, VAR_3->dev, "Waiting link change lock\n");
 }

 if (FUNC_3(VAR_4, 1) && VAR_3->old_mtu == VAR_4->mtu)
  goto out;

 VAR_3->old_mtu = VAR_4->mtu;
 FUNC_24(VAR_4);
 if (FUNC_12(VAR_3))
  FUNC_19(VAR_3);

 FUNC_18(VAR_3);
 FUNC_26(&VAR_3->txclean_task);
 FUNC_26(&VAR_3->rxclean_task);
 FUNC_26(&VAR_3->rxempty_task);

 if (FUNC_21(VAR_4)) {
  FUNC_4(VAR_3);
  FUNC_5(VAR_3);
  FUNC_13(VAR_3);
  FUNC_8(VAR_3);
  FUNC_9(VAR_3);

  if (FUNC_28(VAR_0, &VAR_3->flags))
   FUNC_11(VAR_3);

  FUNC_20(VAR_4);
 }

 FUNC_3(VAR_4, 0);
 if (FUNC_21(VAR_4)) {
  VAR_5 = FUNC_14(VAR_3);
  if (VAR_5) {
   FUNC_25("Allocating resources for RX error, Device STOPPED!\n");
   goto out_enable_tasklet;
  }

  VAR_5 = FUNC_15(VAR_3);
  if (VAR_5) {
   FUNC_25("Allocating resources for TX error, Device STOPPED!\n");
   goto err_out_free_rx_resources;
  }

  FUNC_6(VAR_3);
  FUNC_7(VAR_3);

  FUNC_23(VAR_4);

  if (FUNC_28(VAR_0, &VAR_3->flags))
   FUNC_10(VAR_3);

  FUNC_16(VAR_3);
 } else if (FUNC_12(VAR_3)) {
  FUNC_17(VAR_3);
 }

 goto out_enable_tasklet;

err_out_free_rx_resources:
 FUNC_8(VAR_3);
out_enable_tasklet:
 FUNC_27(&VAR_3->txclean_task);
 FUNC_27(&VAR_3->rxclean_task);
 FUNC_27(&VAR_3->rxempty_task);
out:
 FUNC_1(&VAR_3->link_changing);
}
