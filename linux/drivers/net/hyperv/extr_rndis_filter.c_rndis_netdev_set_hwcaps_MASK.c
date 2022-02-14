
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rndis_device {struct net_device* ndev; } ;
struct netvsc_device {int dummy; } ;
struct net_device_context {int tx_checksum_mask; } ;
struct net_device {int hw_features; int features; } ;
struct ndis_offload_params {void* rsc_ip_v6; void* rsc_ip_v4; void* udp_ip_v6_csum; void* lso_v2_ipv6; void* tcp_ip_v6_csum; void* udp_ip_v4_csum; void* lso_v2_ipv4; void* tcp_ip_v4_csum; int ip_v4_csum; } ;
struct TYPE_6__ {scalar_t__ ip6; scalar_t__ ip4; } ;
struct TYPE_5__ {int ip4_txcsum; int ip6_txcsum; } ;
struct TYPE_4__ {int ip4_encap; unsigned int ip4_maxsz; int ip6_encap; int ip6_opts; unsigned int ip6_maxsz; } ;
struct ndis_offload {TYPE_3__ rsc; TYPE_2__ csum; TYPE_1__ lsov2; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
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
 int FUNC_0 (struct ndis_offload_params*,int ,int) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,unsigned int) ;
 int FUNC_3 (struct net_device*,struct netvsc_device*,struct ndis_offload_params*) ;
 int FUNC_4 (struct rndis_device*,struct netvsc_device*,struct ndis_offload*) ;

__attribute__((used)) static int FUNC_5(struct rndis_device *VAR_24,
       struct netvsc_device *VAR_25)
{
 struct net_device *VAR_26 = VAR_24->ndev;
 struct net_device_context *VAR_27 = FUNC_1(VAR_26);
 struct ndis_offload VAR_28;
 struct ndis_offload_params VAR_29;
 unsigned int VAR_30 = VAR_0;
 int VAR_31;


 VAR_31 = FUNC_4(VAR_24, VAR_25, &VAR_28);
 if (VAR_31 != 0)
  return VAR_31;


 FUNC_0(&VAR_29, 0, sizeof(struct ndis_offload_params));


 VAR_29.ip_v4_csum = VAR_6;


 VAR_26->hw_features &= ~VAR_19;
 VAR_27->tx_checksum_mask = 0;


 VAR_26->hw_features |= VAR_15;
 VAR_26->hw_features |= VAR_16;

 if ((VAR_28.csum.ip4_txcsum & VAR_8) == VAR_8) {

  VAR_26->hw_features |= VAR_13;
  VAR_27->tx_checksum_mask |= VAR_20;

  VAR_29.tcp_ip_v4_csum = VAR_7;

  if (VAR_28.lsov2.ip4_encap & VAR_2) {
   VAR_29.lso_v2_ipv4 = VAR_3;
   VAR_26->hw_features |= VAR_17;

   if (VAR_28.lsov2.ip4_maxsz < VAR_30)
    VAR_30 = VAR_28.lsov2.ip4_maxsz;
  }

  if (VAR_28.csum.ip4_txcsum & VAR_10) {
   VAR_29.udp_ip_v4_csum = VAR_7;
   VAR_27->tx_checksum_mask |= VAR_21;
  }
 }

 if ((VAR_28.csum.ip6_txcsum & VAR_9) == VAR_9) {
  VAR_26->hw_features |= VAR_12;

  VAR_29.tcp_ip_v6_csum = VAR_7;
  VAR_27->tx_checksum_mask |= VAR_22;

  if ((VAR_28.lsov2.ip6_encap & VAR_2) &&
      (VAR_28.lsov2.ip6_opts & VAR_1) == VAR_1) {
   VAR_29.lso_v2_ipv6 = VAR_3;
   VAR_26->hw_features |= VAR_18;

   if (VAR_28.lsov2.ip6_maxsz < VAR_30)
    VAR_30 = VAR_28.lsov2.ip6_maxsz;
  }

  if (VAR_28.csum.ip6_txcsum & VAR_11) {
   VAR_29.udp_ip_v6_csum = VAR_7;
   VAR_27->tx_checksum_mask |= VAR_23;
  }
 }

 if (VAR_28.rsc.ip4 && VAR_28.rsc.ip6) {
  VAR_26->hw_features |= VAR_14;

  if (VAR_26->features & VAR_14) {
   VAR_29.rsc_ip_v4 = VAR_5;
   VAR_29.rsc_ip_v6 = VAR_5;
  } else {
   VAR_29.rsc_ip_v4 = VAR_4;
   VAR_29.rsc_ip_v6 = VAR_4;
  }
 }




 VAR_26->features &= ~VAR_19 | VAR_26->hw_features;

 FUNC_2(VAR_26, VAR_30);

 VAR_31 = FUNC_3(VAR_26, VAR_25, &VAR_29);

 return VAR_31;
}
