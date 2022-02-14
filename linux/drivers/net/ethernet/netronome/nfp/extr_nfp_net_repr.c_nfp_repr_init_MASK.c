
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nfp_repr {TYPE_5__* dst; struct nfp_port* port; } ;
struct nfp_port {int dummy; } ;
struct TYPE_9__ {int major; } ;
struct TYPE_6__ {int repr_cap; } ;
struct nfp_net {TYPE_4__ fw_ver; TYPE_1__ tlv_caps; } ;
struct nfp_app {int dummy; } ;
struct net_device {int priv_flags; int hw_features; int hw_enc_features; int vlan_features; int features; int gso_max_segs; int max_mtu; int * ethtool_ops; int * netdev_ops; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {int port_id; struct net_device* lower_dev; } ;
struct TYPE_8__ {TYPE_2__ port_info; } ;
struct TYPE_10__ {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct dst_entry*) ;
 TYPE_5__* FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (struct nfp_app*) ;
 int FUNC_5 (struct nfp_app*,struct net_device*) ;
 int FUNC_6 (struct nfp_app*,struct net_device*) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_7 (struct net_device*) ;

int FUNC_8(struct nfp_app *VAR_36, struct net_device *VAR_37,
    u32 VAR_38, struct nfp_port *VAR_39,
    struct net_device *VAR_40)
{
 struct nfp_repr *VAR_41 = FUNC_2(VAR_37);
 struct nfp_net *VAR_42 = FUNC_2(VAR_40);
 u32 VAR_43 = VAR_42->tlv_caps.repr_cap;
 int VAR_44;

 VAR_41->port = VAR_39;
 VAR_41->dst = FUNC_1(0, VAR_5, VAR_1);
 if (!VAR_41->dst)
  return -VAR_0;
 VAR_41->dst->u.port_info.port_id = VAR_38;
 VAR_41->dst->u.port_info.lower_dev = VAR_40;

 VAR_37->netdev_ops = &VAR_35;
 VAR_37->ethtool_ops = &VAR_34;

 VAR_37->max_mtu = VAR_40->max_mtu;


 if (VAR_43 & VAR_23)
  VAR_37->priv_flags |= VAR_3;

 VAR_37->hw_features = VAR_8;
 if (VAR_43 & VAR_28)
  VAR_37->hw_features |= VAR_16;
 if (VAR_43 & VAR_30)
  VAR_37->hw_features |= VAR_14 | VAR_13;
 if (VAR_43 & VAR_22)
  VAR_37->hw_features |= VAR_18;
 if ((VAR_43 & VAR_24 && VAR_42->fw_ver.major > 2) ||
     VAR_43 & VAR_25)
  VAR_37->hw_features |= VAR_19 | VAR_20;
 if (VAR_43 & VAR_27)
  VAR_37->hw_features |= VAR_17;
 if (VAR_43 & VAR_32) {
  if (VAR_43 & VAR_24)
   VAR_37->hw_features |= VAR_7;
 }
 if (VAR_43 & VAR_26) {
  if (VAR_43 & VAR_24)
   VAR_37->hw_features |= VAR_6;
 }
 if (VAR_43 & (VAR_32 | VAR_26))
  VAR_37->hw_enc_features = VAR_37->hw_features;

 VAR_37->vlan_features = VAR_37->hw_features;

 if (VAR_43 & VAR_29)
  VAR_37->hw_features |= VAR_11;
 if (VAR_43 & VAR_31) {
  if (VAR_43 & VAR_25)
   FUNC_3(VAR_37, "Device advertises both TSO2 and TXVLAN. Refusing to enable TXVLAN.\n");
  else
   VAR_37->hw_features |= VAR_12;
 }
 if (VAR_43 & VAR_21)
  VAR_37->hw_features |= VAR_10;

 VAR_37->features = VAR_37->hw_features;


 VAR_37->features &= ~(VAR_19 | VAR_20);
 VAR_37->gso_max_segs = VAR_33;

 VAR_37->priv_flags |= VAR_4 | VAR_2;
 VAR_37->features |= VAR_15;

 if (FUNC_4(VAR_36)) {
  VAR_37->features |= VAR_9;
  VAR_37->hw_features |= VAR_9;
 }

 VAR_44 = FUNC_6(VAR_36, VAR_37);
 if (VAR_44)
  goto err_clean;

 VAR_44 = FUNC_7(VAR_37);
 if (VAR_44)
  goto err_repr_clean;

 return 0;

err_repr_clean:
 FUNC_5(VAR_36, VAR_37);
err_clean:
 FUNC_0((struct dst_entry *)VAR_41->dst);
 return VAR_44;
}
