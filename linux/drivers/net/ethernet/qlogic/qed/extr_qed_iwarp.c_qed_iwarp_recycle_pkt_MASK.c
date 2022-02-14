
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tx_pkt ;
struct qed_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; scalar_t__ first_frag; struct qed_iwarp_ll2_buff* cookie; int tx_dest; } ;
struct qed_iwarp_ll2_buff {int * piggy_buf; } ;
struct qed_iwarp_fpdu {int pkt_hdr_size; scalar_t__ pkt_hdr; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_ll2_tx_pkt_info*,int) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_2,
        struct qed_iwarp_fpdu *VAR_3,
        struct qed_iwarp_ll2_buff *VAR_4)
{
 struct qed_ll2_tx_pkt_info VAR_5;
 u8 VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.num_of_bds = 1;
 VAR_5.tx_dest = VAR_0;
 VAR_5.l4_hdr_offset_w = VAR_3->pkt_hdr_size >> 2;
 VAR_5.first_frag = VAR_3->pkt_hdr;
 VAR_5.first_frag_len = VAR_3->pkt_hdr_size;
 VAR_4->piggy_buf = ((void*)0);
 VAR_5.cookie = VAR_4;

 VAR_6 = VAR_2->p_rdma_info->iwarp.ll2_mpa_handle;

 VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_5, 1);
 if (VAR_7)
  FUNC_0(VAR_2, VAR_1,
      "Can't drop packet rc=%d\n", VAR_7);

 FUNC_0(VAR_2,
     VAR_1,
     "MPA_ALIGN: send drop tx packet [%lx, 0x%x], buf=%p, rc=%d\n",
     (unsigned long int)VAR_5.first_frag,
     VAR_5.first_frag_len, VAR_4, VAR_7);

 return VAR_7;
}
