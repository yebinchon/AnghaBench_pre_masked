
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct qed_ll2_tx_pkt_info {scalar_t__ qed_roce_flavor; int tx_dest; size_t vlan; int remove_stag; size_t l4_hdr_offset_w; size_t bd_flags; int num_of_bds; size_t first_frag_len; int first_frag; int calc_ip_len; int enable_l4_cksum; int enable_ip_cksum; } ;
struct qed_ll2_tx_packet {TYPE_5__* bds_set; } ;
struct qed_chain {int dummy; } ;
struct TYPE_9__ {int cur_send_frag_num; struct qed_chain txq_chain; } ;
struct TYPE_8__ {scalar_t__ conn_type; } ;
struct qed_ll2_info {TYPE_3__ tx_queue; TYPE_2__ input; int cid; int queue_id; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct TYPE_10__ {int as_bitfield; } ;
struct TYPE_12__ {int lo; int hi; } ;
struct core_tx_bd {int nw_vlan_or_lb_echo; size_t bitfield1; int nbytes; TYPE_4__ bd_data; TYPE_6__ addr; } ;
typedef enum core_tx_dest { ____Placeholder_core_tx_dest } core_tx_dest ;
typedef enum core_roce_flavor_type { ____Placeholder_core_roce_flavor_type } core_roce_flavor_type ;
struct TYPE_11__ {scalar_t__ frag_len; scalar_t__ tx_frag; struct core_tx_bd* txq_bd; } ;
struct TYPE_7__ {int mf_bits; } ;


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
 int FUNC_0 (TYPE_6__,int ) ;
 int FUNC_1 (struct qed_hwfn*,int,char*,int ,int ,scalar_t__,size_t,size_t,int,int ,int ) ;
 size_t VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 scalar_t__ VAR_16 ;



 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (size_t,int ,int) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (struct qed_chain*) ;
 scalar_t__ FUNC_7 (struct qed_chain*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct qed_hwfn *VAR_21,
     struct qed_ll2_info *VAR_22,
     struct qed_ll2_tx_packet *VAR_23,
     struct qed_ll2_tx_pkt_info *VAR_24)
{
 struct qed_chain *VAR_25 = &VAR_22->tx_queue.txq_chain;
 u16 VAR_26 = FUNC_6(VAR_25);
 struct core_tx_bd *VAR_27 = ((void*)0);
 enum core_roce_flavor_type VAR_28;
 enum core_tx_dest VAR_29;
 u16 VAR_30 = 0, VAR_31;

 VAR_28 = (VAR_24->qed_roce_flavor == VAR_16) ? VAR_0
            : VAR_1;

 switch (VAR_24->tx_dest) {
 case 128:
  VAR_29 = VAR_13;
  break;
 case 129:
  VAR_29 = VAR_12;
  break;
 case 130:
  VAR_29 = VAR_11;
  break;
 default:
  VAR_29 = VAR_12;
  break;
 }

 VAR_27 = (struct core_tx_bd *)FUNC_7(VAR_25);
 if (FUNC_2(VAR_21) &&
     VAR_22->input.conn_type == VAR_18) {
  VAR_27->nw_vlan_or_lb_echo =
      FUNC_4(VAR_14);
 } else {
  VAR_27->nw_vlan_or_lb_echo = FUNC_4(VAR_24->vlan);
  if (FUNC_8(VAR_19, &VAR_21->cdev->mf_bits) &&
      VAR_22->input.conn_type == VAR_17)
   VAR_24->remove_stag = 1;
 }

 FUNC_3(VAR_27->bitfield1, VAR_9,
    FUNC_4(VAR_24->l4_hdr_offset_w));
 FUNC_3(VAR_27->bitfield1, VAR_10, VAR_29);
 VAR_30 |= VAR_24->bd_flags;
 FUNC_3(VAR_30, VAR_8, 0x1);
 FUNC_3(VAR_30, VAR_6, VAR_24->num_of_bds);
 FUNC_3(VAR_30, VAR_7, VAR_28);
 FUNC_3(VAR_30, VAR_3, !!(VAR_24->enable_ip_cksum));
 FUNC_3(VAR_30, VAR_5, !!(VAR_24->enable_l4_cksum));
 FUNC_3(VAR_30, VAR_4, !!(VAR_24->calc_ip_len));
 FUNC_3(VAR_30, VAR_2,
    !!(VAR_24->remove_stag));

 VAR_27->bd_data.as_bitfield = FUNC_4(VAR_30);
 FUNC_0(VAR_27->addr, VAR_24->first_frag);
 VAR_27->nbytes = FUNC_4(VAR_24->first_frag_len);

 FUNC_1(VAR_21,
     (VAR_15 | VAR_20),
     "LL2 [q 0x%02x cid 0x%08x type 0x%08x] Tx Producer at [0x%04x] - set with a %04x bytes %02x BDs buffer at %08x:%08x\n",
     VAR_22->queue_id,
     VAR_22->cid,
     VAR_22->input.conn_type,
     VAR_26,
     VAR_24->first_frag_len,
     VAR_24->num_of_bds,
     FUNC_5(VAR_27->addr.hi),
     FUNC_5(VAR_27->addr.lo));

 if (VAR_22->tx_queue.cur_send_frag_num == VAR_24->num_of_bds)
  return;


 for (VAR_31 = VAR_22->tx_queue.cur_send_frag_num;
      VAR_31 < VAR_24->num_of_bds; VAR_31++) {
  struct core_tx_bd **VAR_32 = &VAR_23->bds_set[VAR_31].txq_bd;

  *VAR_32 = (struct core_tx_bd *)FUNC_7(VAR_25);
  (*VAR_32)->bd_data.as_bitfield = 0;
  (*VAR_32)->bitfield1 = 0;
  VAR_23->bds_set[VAR_31].tx_frag = 0;
  VAR_23->bds_set[VAR_31].frag_len = 0;
 }
}
