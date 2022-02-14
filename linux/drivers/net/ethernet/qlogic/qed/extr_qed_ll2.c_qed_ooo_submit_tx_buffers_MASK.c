
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
typedef int tx_pkt ;
struct qed_ooo_buffer {int packet_length; int vlan; scalar_t__ placement_offset; scalar_t__ rx_buffer_phys_addr; } ;
struct qed_ll2_tx_pkt_info {int num_of_bds; struct qed_ooo_buffer* cookie; int first_frag_len; scalar_t__ first_frag; int tx_dest; scalar_t__ l4_hdr_offset_w; scalar_t__ bd_flags; int vlan; } ;
struct qed_ll2_info {int tx_dest; int my_id; } ;
struct qed_hwfn {int p_ooo_info; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_ll2_tx_pkt_info*,int) ;
 struct qed_ooo_buffer* FUNC_3 (struct qed_hwfn*,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ,struct qed_ooo_buffer*,int) ;

__attribute__((used)) static void
FUNC_5(struct qed_hwfn *VAR_5,
     struct qed_ll2_info *VAR_6)
{
 struct qed_ll2_tx_pkt_info VAR_7;
 struct qed_ooo_buffer *VAR_8;
 u16 VAR_9;
 dma_addr_t VAR_10;
 u8 VAR_11;
 int VAR_12;


 while ((VAR_8 = FUNC_3(VAR_5,
          VAR_5->p_ooo_info))) {
  VAR_9 = 0;
  VAR_11 = 0;

  VAR_10 = VAR_8->rx_buffer_phys_addr +
        VAR_8->placement_offset;
  FUNC_0(VAR_11, VAR_0, 1);
  FUNC_0(VAR_11, VAR_1, 1);

  FUNC_1(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.num_of_bds = 1;
  VAR_7.vlan = VAR_8->vlan;
  VAR_7.bd_flags = VAR_11;
  VAR_7.l4_hdr_offset_w = VAR_9;
  switch (VAR_6->tx_dest) {
  case 128:
   VAR_7.tx_dest = VAR_4;
   break;
  case 129:
   VAR_7.tx_dest = VAR_3;
   break;
  case 130:
  default:
   VAR_7.tx_dest = VAR_2;
   break;
  }
  VAR_7.first_frag = VAR_10;
  VAR_7.first_frag_len = VAR_8->packet_length;
  VAR_7.cookie = VAR_8;

  VAR_12 = FUNC_2(VAR_5, VAR_6->my_id,
            &VAR_7, 1);
  if (VAR_12) {
   FUNC_4(VAR_5, VAR_5->p_ooo_info,
       VAR_8, 0);
   break;
  }
 }
}
