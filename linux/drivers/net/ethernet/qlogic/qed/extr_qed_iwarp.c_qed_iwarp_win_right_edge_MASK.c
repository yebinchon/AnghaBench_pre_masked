
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tx_pkt ;
struct qed_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; int enable_ip_cksum; int enable_l4_cksum; int calc_ip_len; scalar_t__ first_frag; int vlan; int tx_dest; } ;
struct qed_iwarp_fpdu {int pkt_hdr_size; scalar_t__ pkt_hdr; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_ll2_tx_pkt_info*,int) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_3, struct qed_iwarp_fpdu *VAR_4)
{
 struct qed_ll2_tx_pkt_info VAR_5;
 u8 VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.num_of_bds = 1;
 VAR_5.tx_dest = VAR_1;
 VAR_5.l4_hdr_offset_w = VAR_4->pkt_hdr_size >> 2;

 VAR_5.first_frag = VAR_4->pkt_hdr;
 VAR_5.first_frag_len = VAR_4->pkt_hdr_size;
 VAR_5.enable_ip_cksum = 1;
 VAR_5.enable_l4_cksum = 1;
 VAR_5.calc_ip_len = 1;

 VAR_5.vlan = VAR_0;

 VAR_6 = VAR_3->p_rdma_info->iwarp.ll2_mpa_handle;

 VAR_7 = FUNC_2(VAR_3, VAR_6, &VAR_5, 1);
 if (VAR_7)
  FUNC_0(VAR_3, VAR_2,
      "Can't send right edge rc=%d\n", VAR_7);
 FUNC_0(VAR_3,
     VAR_2,
     "MPA_ALIGN: Sent right edge FPDU num_bds=%d [%lx, 0x%x], rc=%d\n",
     VAR_5.num_of_bds,
     (unsigned long int)VAR_5.first_frag,
     VAR_5.first_frag_len, VAR_7);

 return VAR_7;
}
