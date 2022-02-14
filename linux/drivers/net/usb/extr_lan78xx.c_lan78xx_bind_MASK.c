
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct lan78xx_priv {int set_vlan; int set_multicast; int wol; scalar_t__* vlan_table; int dataport_mutex; int rfe_ctl_lock; struct lan78xx_net* dev; } ;
struct lan78xx_net {unsigned long* data; TYPE_1__* net; scalar_t__ hard_mtu; } ;
struct TYPE_2__ {int features; int hw_features; int flags; scalar_t__ hard_header_len; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lan78xx_priv*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct lan78xx_net*,struct usb_interface*) ;
 int FUNC_5 (struct lan78xx_net*) ;
 int FUNC_6 (struct lan78xx_net*) ;
 int FUNC_7 (struct lan78xx_net*) ;
 int FUNC_8 (struct lan78xx_net*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,char*,...) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct lan78xx_net *VAR_20, struct usb_interface *VAR_21)
{
 struct lan78xx_priv *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24;

 VAR_23 = FUNC_4(VAR_20, VAR_21);
 if (VAR_23) {
  FUNC_10(VAR_20->net, "lan78xx_get_endpoints failed: %d\n",
       VAR_23);
  return VAR_23;
 }

 VAR_20->data[0] = (unsigned long)FUNC_3(sizeof(*VAR_22), VAR_7);

 VAR_22 = (struct lan78xx_priv *)(VAR_20->data[0]);
 if (!VAR_22) {
  FUNC_10(VAR_20->net, "Unable to allocate lan78xx_priv");
  return -VAR_6;
 }

 VAR_22->dev = VAR_20;

 FUNC_11(&VAR_22->rfe_ctl_lock);
 FUNC_9(&VAR_22->dataport_mutex);

 FUNC_0(&VAR_22->set_multicast, VAR_18);

 for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++)
  VAR_22->vlan_table[VAR_24] = 0;

 FUNC_0(&VAR_22->set_vlan, VAR_19);

 VAR_20->net->features = 0;

 if (VAR_2)
  VAR_20->net->features |= VAR_9;

 if (VAR_0)
  VAR_20->net->features |= VAR_12;

 if (VAR_1)
  VAR_20->net->features |= VAR_14 | VAR_15 | VAR_13;

 if (VAR_4)
  VAR_20->net->features |= VAR_11;

 if (VAR_3)
  VAR_20->net->features |= VAR_10;

 VAR_20->net->hw_features = VAR_20->net->features;

 VAR_23 = FUNC_8(VAR_20);
 if (VAR_23 < 0) {
  FUNC_10(VAR_20->net,
       "lan78xx_setup_irq_domain() failed : %d", VAR_23);
  goto out1;
 }

 VAR_20->net->hard_header_len += VAR_16;
 VAR_20->hard_mtu = VAR_20->net->mtu + VAR_20->net->hard_header_len;


 VAR_23 = FUNC_7(VAR_20);
 if (VAR_23) {
  FUNC_10(VAR_20->net, "Registers INIT FAILED....");
  goto out2;
 }

 VAR_23 = FUNC_5(VAR_20);
 if (VAR_23) {
  FUNC_10(VAR_20->net, "MDIO INIT FAILED.....");
  goto out2;
 }

 VAR_20->net->flags |= VAR_8;

 VAR_22->wol = VAR_17;

 return VAR_23;

out2:
 FUNC_6(VAR_20);

out1:
 FUNC_10(VAR_20->net, "Bind routine FAILED");
 FUNC_1(&VAR_22->set_multicast);
 FUNC_1(&VAR_22->set_vlan);
 FUNC_2(VAR_22);
 return VAR_23;
}
