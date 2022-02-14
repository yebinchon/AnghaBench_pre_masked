
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vxlanhdr {int vx_flags; int vx_vni; } ;
struct vxlan_sock {int flags; } ;
struct vxlan_metadata {int dummy; } ;
struct vxlan_dev {int gro_cells; TYPE_3__* dev; int net; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; int pkt_type; TYPE_3__* dev; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_5__ {int tun_info; } ;
struct metadata_dst {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_6__ {int rx_errors; int rx_frame_errors; } ;
struct TYPE_7__ {int flags; int tstats; int rx_dropped; TYPE_2__ stats; int ifindex; } ;


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
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct vxlan_metadata* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct vxlan_metadata*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 struct vxlan_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct sk_buff*,struct dst_entry*) ;
 void* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 struct pcpu_sw_netstats* FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 struct metadata_dst* FUNC_23 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_24 (int) ;
 scalar_t__ FUNC_25 (struct vxlan_sock*) ;
 int FUNC_26 (struct vxlan_sock*,void*,struct sk_buff*) ;
 int FUNC_27 (struct vxlan_sock*) ;
 struct vxlanhdr* FUNC_28 (struct sk_buff*) ;
 int FUNC_29 (struct vxlanhdr*,struct sk_buff*,int,struct vxlan_metadata*) ;
 int FUNC_30 (struct vxlanhdr*,int *,struct sk_buff*,int) ;
 int FUNC_31 (struct vxlanhdr*,struct sk_buff*,int) ;
 int FUNC_32 (struct vxlan_dev*,struct vxlan_sock*,struct sk_buff*,int ) ;
 int FUNC_33 (int) ;
 struct vxlan_dev* FUNC_34 (struct vxlan_sock*,int ,int ) ;

__attribute__((used)) static int FUNC_35(struct sock *VAR_10, struct sk_buff *VAR_11)
{
 struct pcpu_sw_netstats *VAR_12;
 struct vxlan_dev *VAR_13;
 struct vxlan_sock *VAR_14;
 struct vxlanhdr VAR_15;
 struct vxlan_metadata VAR_16;
 struct vxlan_metadata *VAR_17 = &VAR_16;
 __be16 VAR_18 = FUNC_4(VAR_0);
 bool VAR_19 = 0;
 void *VAR_20;
 __be32 VAR_21 = 0;


 if (!FUNC_12(VAR_11, VAR_8))
  goto drop;

 VAR_15 = *FUNC_28(VAR_11);

 if (!(VAR_15.vx_flags & VAR_7)) {
  FUNC_10(VAR_11->dev, "invalid vxlan flags=%#x vni=%#x\n",
      FUNC_11(FUNC_28(VAR_11)->vx_flags),
      FUNC_11(FUNC_28(VAR_11)->vx_vni));

  goto drop;
 }
 VAR_15.vx_flags &= ~VAR_7;
 VAR_15.vx_vni &= ~VAR_9;

 VAR_14 = FUNC_13(VAR_10);
 if (!VAR_14)
  goto drop;

 VAR_21 = FUNC_33(FUNC_28(VAR_11)->vx_vni);

 VAR_13 = FUNC_34(VAR_14, VAR_11->dev->ifindex, VAR_21);
 if (!VAR_13)
  goto drop;




 if (VAR_14->flags & VAR_5) {
  if (!FUNC_30(&VAR_15, &VAR_18, VAR_11, VAR_14->flags))
   goto drop;
  VAR_19 = 1;
 }

 if (FUNC_0(VAR_11, VAR_8, VAR_18, VAR_19,
       !FUNC_9(VAR_13->net, FUNC_2(VAR_13->dev))))
   goto drop;

 if (FUNC_25(VAR_14)) {
  struct metadata_dst *VAR_22;

  VAR_22 = FUNC_23(VAR_11, FUNC_27(VAR_14), VAR_3,
      FUNC_6(VAR_21), sizeof(*VAR_17));

  if (!VAR_22)
   goto drop;

  VAR_17 = FUNC_5(&VAR_22->u.tun_info);

  FUNC_16(VAR_11, (struct dst_entry *)VAR_22);
 } else {
  FUNC_8(VAR_17, 0, sizeof(*VAR_17));
 }

 if (VAR_14->flags & VAR_6)
  if (!FUNC_31(&VAR_15, VAR_11, VAR_14->flags))
   goto drop;
 if (VAR_14->flags & VAR_4)
  FUNC_29(&VAR_15, VAR_11, VAR_14->flags, VAR_17);




 if (VAR_15.vx_flags || VAR_15.vx_vni) {
  goto drop;
 }

 if (!VAR_19) {
  if (!FUNC_32(VAR_13, VAR_14, VAR_11, VAR_21))
   goto drop;
 } else {
  FUNC_18(VAR_11);
  VAR_11->dev = VAR_13->dev;
  VAR_11->pkt_type = VAR_2;
 }

 VAR_20 = FUNC_17(VAR_11);
 FUNC_19(VAR_11);

 if (!FUNC_26(VAR_14, VAR_20, VAR_11)) {
  ++VAR_13->dev->stats.rx_frame_errors;
  ++VAR_13->dev->stats.rx_errors;
  goto drop;
 }

 FUNC_14();

 if (FUNC_24(!(VAR_13->dev->flags & VAR_1))) {
  FUNC_15();
  FUNC_1(&VAR_13->dev->rx_dropped);
  goto drop;
 }

 VAR_12 = FUNC_20(VAR_13->dev->tstats);
 FUNC_21(&VAR_12->syncp);
 VAR_12->rx_packets++;
 VAR_12->rx_bytes += VAR_11->len;
 FUNC_22(&VAR_12->syncp);

 FUNC_3(&VAR_13->gro_cells, VAR_11);

 FUNC_15();

 return 0;

drop:

 FUNC_7(VAR_11);
 return 0;
}
