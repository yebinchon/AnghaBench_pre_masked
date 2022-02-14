
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int tx_pkt ;
struct unaligned_opaque_data {scalar_t__ first_mpa_offset; } ;
struct qed_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; int enable_ip_cksum; int enable_l4_cksum; int calc_ip_len; int vlan; int first_frag; TYPE_1__* cookie; int tx_dest; } ;
struct qed_iwarp_ll2_buff {scalar_t__ data_phys_addr; } ;
struct qed_iwarp_fpdu {int pkt_hdr_size; scalar_t__ fpdu_length; scalar_t__ incomplete_bytes; scalar_t__ mpa_frag_len; scalar_t__ mpa_frag; TYPE_1__* mpa_buf; int pkt_hdr; } ;
struct qed_hwfn {TYPE_3__* p_rdma_info; } ;
typedef enum qed_iwarp_mpa_pkt_type { ____Placeholder_qed_iwarp_mpa_pkt_type } qed_iwarp_mpa_pkt_type ;
struct TYPE_5__ {int ll2_mpa_handle; } ;
struct TYPE_6__ {TYPE_2__ iwarp; } ;
struct TYPE_4__ {struct qed_iwarp_ll2_buff* piggy_buf; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_ll2_tx_pkt_info*,int) ;
 int FUNC_3 (struct qed_hwfn*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_4,
      struct qed_iwarp_fpdu *VAR_5,
      struct unaligned_opaque_data *VAR_6,
      struct qed_iwarp_ll2_buff *VAR_7,
      u16 VAR_8, enum qed_iwarp_mpa_pkt_type VAR_9)
{
 struct qed_ll2_tx_pkt_info VAR_10;
 u8 VAR_11;
 int VAR_12;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));







 VAR_10.num_of_bds = (VAR_9 == VAR_1) ? 3 : 2;
 VAR_10.tx_dest = VAR_2;
 VAR_10.l4_hdr_offset_w = VAR_5->pkt_hdr_size >> 2;


 if (VAR_9 == VAR_1 ||
     VAR_8 <= VAR_5->fpdu_length)
  VAR_10.cookie = VAR_5->mpa_buf;

 VAR_10.first_frag = VAR_5->pkt_hdr;
 VAR_10.first_frag_len = VAR_5->pkt_hdr_size;
 VAR_10.enable_ip_cksum = 1;
 VAR_10.enable_l4_cksum = 1;
 VAR_10.calc_ip_len = 1;

 VAR_10.vlan = VAR_0;




 if (VAR_8 == VAR_5->incomplete_bytes)
  VAR_5->mpa_buf->piggy_buf = VAR_7;

 VAR_11 = VAR_4->p_rdma_info->iwarp.ll2_mpa_handle;


 VAR_12 = FUNC_2(VAR_4, VAR_11, &VAR_10, 1);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_3(VAR_4, VAR_11,
            VAR_5->mpa_frag,
            VAR_5->mpa_frag_len);
 if (VAR_12)
  goto out;

 if (!VAR_5->incomplete_bytes)
  goto out;


 VAR_12 = FUNC_3(VAR_4,
            VAR_11,
            VAR_7->data_phys_addr +
            VAR_6->first_mpa_offset,
            VAR_5->incomplete_bytes);
out:
 FUNC_0(VAR_4,
     VAR_3,
     "MPA_ALIGN: Sent FPDU num_bds=%d first_frag_len=%x, mpa_frag_len=0x%x, incomplete_bytes:0x%x rc=%d\n",
     VAR_10.num_of_bds,
     VAR_10.first_frag_len,
     VAR_5->mpa_frag_len,
     VAR_5->incomplete_bytes, VAR_12);

 return VAR_12;
}
