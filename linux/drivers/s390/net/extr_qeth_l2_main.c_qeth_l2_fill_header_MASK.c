
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct TYPE_3__ {unsigned int pkt_length; int vlan_id; int * flags; int id; } ;
struct TYPE_4__ {TYPE_1__ l2; } ;
struct qeth_hdr {TYPE_2__ hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int *,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct vlan_ethhdr* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct qeth_qdio_out_q *VAR_10,
    struct qeth_hdr *VAR_11, struct sk_buff *VAR_12,
    int VAR_13, unsigned int VAR_14)
{
 int VAR_15 = FUNC_2(VAR_12);
 struct vlan_ethhdr *VAR_16 = FUNC_5(VAR_12);

 VAR_11->hdr.l2.pkt_length = VAR_14;

 if (FUNC_4(VAR_12)) {
  VAR_11->hdr.l2.id = VAR_2;
 } else {
  VAR_11->hdr.l2.id = VAR_3;
  if (VAR_12->ip_summed == VAR_0)
   FUNC_3(VAR_12, &VAR_11->hdr.l2.flags[1], VAR_13);
 }


 if (VAR_15 == VAR_9)
  VAR_11->hdr.l2.flags[2] |= VAR_5;
 else if (VAR_15 == VAR_8)
  VAR_11->hdr.l2.flags[2] |= VAR_4;
 else
  VAR_11->hdr.l2.flags[2] |= VAR_6;




 if (VAR_16->h_vlan_proto == FUNC_0(VAR_1)) {
  VAR_11->hdr.l2.flags[2] |= VAR_7;
  VAR_11->hdr.l2.vlan_id = FUNC_1(VAR_16->h_vlan_TCI);
 }
}
