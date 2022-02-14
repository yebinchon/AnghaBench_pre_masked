
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int sin_family; TYPE_3__ sin_addr; } ;
union vxlan_addr {TYPE_4__ sin; } ;
typedef int u8 ;
typedef int tip ;
struct vxlan_fdb {int dummy; } ;
struct TYPE_7__ {int flags; } ;
struct vxlan_dev {TYPE_2__ cfg; } ;
struct sk_buff {int pkt_type; int ip_summed; } ;
struct TYPE_6__ {int rx_dropped; int tx_dropped; } ;
struct net_device {int flags; scalar_t__ addr_len; TYPE_1__ stats; } ;
struct neighbour {int nud_state; int ha; } ;
struct arphdr {scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; } ;
typedef int sip ;
typedef int __be32 ;
struct TYPE_10__ {int remote_ip; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int ,int ,int ,struct net_device*,int ,int *,int ,int *) ;
 struct arphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_14 ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_5__* FUNC_5 (struct vxlan_fdb*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int) ;
 struct neighbour* FUNC_10 (int *,int *,struct net_device*) ;
 int FUNC_11 (struct neighbour*) ;
 struct vxlan_dev* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int *) ;
 struct vxlan_fdb* FUNC_18 (struct vxlan_dev*,int ,int ) ;
 int FUNC_19 (struct net_device*,union vxlan_addr*) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_15, struct sk_buff *VAR_16, __be32 VAR_17)
{
 struct vxlan_dev *VAR_18 = FUNC_12(VAR_15);
 struct arphdr *VAR_19;
 u8 *VAR_20, *VAR_21;
 __be32 VAR_22, VAR_23;
 struct neighbour *VAR_24;

 if (VAR_15->flags & VAR_8)
  goto out;

 if (!FUNC_14(VAR_16, FUNC_3(VAR_15))) {
  VAR_15->stats.tx_dropped++;
  goto out;
 }
 VAR_19 = FUNC_2(VAR_16);

 if ((VAR_19->ar_hrd != FUNC_6(VAR_1) &&
      VAR_19->ar_hrd != FUNC_6(VAR_2)) ||
     VAR_19->ar_pro != FUNC_6(VAR_7) ||
     VAR_19->ar_op != FUNC_6(VAR_4) ||
     VAR_19->ar_hln != VAR_15->addr_len ||
     VAR_19->ar_pln != 4)
  goto out;
 VAR_20 = (u8 *)VAR_19 + sizeof(struct arphdr);
 VAR_21 = VAR_20;
 VAR_20 += VAR_15->addr_len;
 FUNC_9(&VAR_22, VAR_20, sizeof(VAR_22));
 VAR_20 += sizeof(VAR_22);
 VAR_20 += VAR_15->addr_len;
 FUNC_9(&VAR_23, VAR_20, sizeof(VAR_23));

 if (FUNC_7(VAR_23) ||
     FUNC_8(VAR_23))
  goto out;

 VAR_24 = FUNC_10(&VAR_14, &VAR_23, VAR_15);

 if (VAR_24) {
  struct vxlan_fdb *VAR_25;
  struct sk_buff *VAR_26;

  if (!(VAR_24->nud_state & VAR_11)) {
   FUNC_11(VAR_24);
   goto out;
  }

  VAR_25 = FUNC_18(VAR_18, VAR_24->ha, VAR_17);
  if (VAR_25 && FUNC_17(&(FUNC_5(VAR_25)->remote_ip))) {

   FUNC_11(VAR_24);
   goto out;
  }

  VAR_26 = FUNC_1(VAR_3, VAR_6, VAR_22, VAR_15, VAR_23, VAR_21,
    VAR_24->ha, VAR_21);

  FUNC_11(VAR_24);

  if (VAR_26 == ((void*)0))
   goto out;

  FUNC_16(VAR_26);
  FUNC_0(VAR_26, FUNC_15(VAR_26));
  VAR_26->ip_summed = VAR_5;
  VAR_26->pkt_type = VAR_12;

  if (FUNC_13(VAR_26) == VAR_10)
   VAR_15->stats.rx_dropped++;
 } else if (VAR_18->cfg.flags & VAR_13) {
  union vxlan_addr VAR_27 = {
   .sin.sin_addr.s_addr = VAR_23,
   .sin.sin_family = VAR_0,
  };

  FUNC_19(VAR_15, &VAR_27);
 }
out:
 FUNC_4(VAR_16);
 return VAR_9;
}
