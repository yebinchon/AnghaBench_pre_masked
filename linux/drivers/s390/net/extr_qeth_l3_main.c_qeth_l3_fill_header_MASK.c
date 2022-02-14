
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ ip_summed; } ;
struct rtable {int dummy; } ;
struct TYPE_13__ {int * s6_addr32; scalar_t__* s6_addr16; } ;
struct rt6_info {TYPE_6__ rt6i_gateway; } ;
struct qeth_qdio_out_q {struct qeth_card* card; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_6__ ipv6_addr; TYPE_1__ ipv4; } ;
struct qeth_hdr_layer3 {unsigned int length; int flags; TYPE_2__ next_hop; int vlan_id; int ext_flags; int id; } ;
struct TYPE_10__ {struct qeth_hdr_layer3 l3; } ;
struct qeth_hdr {TYPE_3__ hdr; } ;
struct qeth_card {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int __be32 ;
struct TYPE_14__ {int daddr; } ;
struct TYPE_12__ {TYPE_6__ daddr; } ;
struct TYPE_11__ {int destUserID; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_7__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_5__* FUNC_4 (struct sk_buff*) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ) ;
 struct dst_entry* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct sk_buff*,struct dst_entry*,int) ;
 int FUNC_11 (struct sk_buff*,int *,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct rtable*,int ) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 struct vlan_ethhdr* FUNC_19 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_20(struct qeth_qdio_out_q *VAR_13,
    struct qeth_hdr *VAR_14, struct sk_buff *VAR_15,
    int VAR_16, unsigned int VAR_17)
{
 struct qeth_hdr_layer3 *VAR_18 = &VAR_14->hdr.l3;
 struct vlan_ethhdr *VAR_19 = FUNC_19(VAR_15);
 struct qeth_card *VAR_20 = VAR_13->card;
 struct dst_entry *VAR_21;
 int VAR_22;

 VAR_14->hdr.l3.length = VAR_17;

 if (FUNC_16(VAR_15)) {
  VAR_14->hdr.l3.id = VAR_9;
 } else {
  VAR_14->hdr.l3.id = VAR_10;

  if (VAR_15->protocol == FUNC_1(VAR_2)) {
   VAR_18->flags = VAR_7 | VAR_3;
   VAR_18->next_hop.ipv6_addr.s6_addr16[0] = FUNC_1(0xfe80);
   FUNC_6(&VAR_18->next_hop.ipv6_addr.s6_addr32[2],
          FUNC_5(VAR_15)->destUserID, 8);
   return;
  }

  if (VAR_15->ip_summed == VAR_0) {
   FUNC_11(VAR_15, &VAR_14->hdr.l3.ext_flags, VAR_16);

   if (VAR_16 == 4)
    VAR_14->hdr.l3.ext_flags |= VAR_4;
  }
 }

 if (VAR_16 == 4 || FUNC_0(VAR_20)) {

  if (FUNC_18(VAR_15)) {
   VAR_14->hdr.l3.ext_flags |= VAR_6;
   VAR_14->hdr.l3.vlan_id = FUNC_17(VAR_15);
  }
 } else if (VAR_19->h_vlan_proto == FUNC_1(VAR_1)) {
  VAR_14->hdr.l3.ext_flags |= VAR_5;
  VAR_14->hdr.l3.vlan_id = FUNC_7(VAR_19->h_vlan_TCI);
 }

 FUNC_12();
 VAR_21 = FUNC_8(VAR_15, VAR_16);

 if (FUNC_0(VAR_20) && FUNC_15(VAR_15) != VAR_11)
  VAR_22 = VAR_12;
 else
  VAR_22 = FUNC_10(VAR_15, VAR_21, VAR_16);
 VAR_18->flags |= FUNC_9(VAR_22);

 if (VAR_16 == 4) {
  struct rtable *VAR_23 = (struct rtable *) VAR_21;

  *((__be32 *) &VAR_14->hdr.l3.next_hop.ipv4.addr) = (VAR_23) ?
    FUNC_14(VAR_23, FUNC_2(VAR_15)->daddr) :
    FUNC_2(VAR_15)->daddr;
 } else if (VAR_16 == 6) {
  struct rt6_info *VAR_24 = (struct rt6_info *) VAR_21;

  if (VAR_24 && !FUNC_3(&VAR_24->rt6i_gateway))
   VAR_18->next_hop.ipv6_addr = VAR_24->rt6i_gateway;
  else
   VAR_18->next_hop.ipv6_addr = FUNC_4(VAR_15)->daddr;

  VAR_14->hdr.l3.flags |= VAR_7;
  if (!FUNC_0(VAR_20))
   VAR_14->hdr.l3.flags |= VAR_8;
 } else {

  VAR_18->flags |= VAR_8;
 }
 FUNC_13();
}
