
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrl; int mtu; struct net_device* netdev; } ;
struct TYPE_3__ {int major; } ;
struct nfp_net {int cap; int max_mtu; TYPE_2__ dp; scalar_t__ port; int app; TYPE_1__ fw_ver; } ;
struct net_device {int hw_features; int hw_enc_features; int vlan_features; int features; int gso_max_segs; int max_mtu; int min_mtu; int watchdog_timeo; int * netdev_ops; int priv_flags; int mtu; int dev_addr; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_30 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nfp_net*,int ) ;
 int FUNC_5 (struct nfp_net*,char*) ;

__attribute__((used)) static void FUNC_6(struct nfp_net *VAR_31)
{
 struct net_device *VAR_32 = VAR_31->dp.netdev;

 FUNC_4(VAR_31, VAR_31->dp.netdev->dev_addr);

 VAR_32->mtu = VAR_31->dp.mtu;







 if (VAR_31->cap & VAR_18)
  VAR_32->priv_flags |= VAR_1;

 VAR_32->hw_features = VAR_4;
 if (VAR_31->cap & VAR_24) {
  VAR_32->hw_features |= VAR_11;
  VAR_31->dp.ctrl |= VAR_31->cap & VAR_24;
 }
 if (VAR_31->cap & VAR_26) {
  VAR_32->hw_features |= VAR_10 | VAR_9;
  VAR_31->dp.ctrl |= VAR_26;
 }
 if (VAR_31->cap & VAR_17) {
  VAR_32->hw_features |= VAR_13;
  VAR_31->dp.ctrl |= VAR_17;
 }
 if ((VAR_31->cap & VAR_19 && VAR_31->fw_ver.major > 2) ||
     VAR_31->cap & VAR_20) {
  VAR_32->hw_features |= VAR_14 | VAR_15;
  VAR_31->dp.ctrl |= VAR_31->cap & VAR_20 ?:
      VAR_19;
 }
 if (VAR_31->cap & VAR_23)
  VAR_32->hw_features |= VAR_12;
 if (VAR_31->cap & VAR_28) {
  if (VAR_31->cap & VAR_19)
   VAR_32->hw_features |= VAR_3;
  VAR_31->dp.ctrl |= VAR_28;
 }
 if (VAR_31->cap & VAR_22) {
  if (VAR_31->cap & VAR_19)
   VAR_32->hw_features |= VAR_2;
  VAR_31->dp.ctrl |= VAR_22;
 }
 if (VAR_31->cap & (VAR_28 | VAR_22))
  VAR_32->hw_enc_features = VAR_32->hw_features;

 VAR_32->vlan_features = VAR_32->hw_features;

 if (VAR_31->cap & VAR_25) {
  VAR_32->hw_features |= VAR_7;
  VAR_31->dp.ctrl |= VAR_25;
 }
 if (VAR_31->cap & VAR_27) {
  if (VAR_31->cap & VAR_20) {
   FUNC_5(VAR_31, "Device advertises both TSO2 and TXVLAN. Refusing to enable TXVLAN.\n");
  } else {
   VAR_32->hw_features |= VAR_8;
   VAR_31->dp.ctrl |= VAR_27;
  }
 }
 if (VAR_31->cap & VAR_16) {
  VAR_32->hw_features |= VAR_6;
  VAR_31->dp.ctrl |= VAR_16;
 }

 VAR_32->features = VAR_32->hw_features;

 if (FUNC_2(VAR_31->app) && VAR_31->port)
  VAR_32->hw_features |= VAR_5;


 VAR_32->features &= ~(VAR_14 | VAR_15);
 VAR_31->dp.ctrl &= ~VAR_21;


 VAR_32->netdev_ops = &VAR_30;
 VAR_32->watchdog_timeo = FUNC_0(5 * 1000);


 VAR_32->min_mtu = VAR_0;
 VAR_32->max_mtu = VAR_31->max_mtu;

 VAR_32->gso_max_segs = VAR_29;

 FUNC_1(VAR_32);

 FUNC_3(VAR_32);
}
