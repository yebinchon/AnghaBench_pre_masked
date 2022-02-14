
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct unaligned_opaque_data {int first_mpa_offset; int tcp_payload_offset; } ;
struct qed_iwarp_ll2_buff {int data_phys_addr; scalar_t__ data; } ;
struct qed_iwarp_fpdu {int pkt_hdr; int mpa_frag; int* mpa_frag_virt; int incomplete_bytes; int fpdu_length; int mpa_frag_len; int pkt_hdr_size; struct qed_iwarp_ll2_buff* mpa_buf; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct qed_iwarp_ll2_buff *VAR_1,
      struct qed_iwarp_fpdu *VAR_2,
      struct unaligned_opaque_data *VAR_3,
      u16 VAR_4, u8 VAR_5)
{
 VAR_2->mpa_buf = VAR_1;
 VAR_2->pkt_hdr = VAR_1->data_phys_addr + VAR_5;
 VAR_2->pkt_hdr_size = VAR_3->tcp_payload_offset;
 VAR_2->mpa_frag = VAR_1->data_phys_addr + VAR_3->first_mpa_offset;
 VAR_2->mpa_frag_virt = (u8 *)(VAR_1->data) + VAR_3->first_mpa_offset;

 if (VAR_4 == 1)
  VAR_2->incomplete_bytes = VAR_0;
 else if (VAR_4 < VAR_2->fpdu_length)
  VAR_2->incomplete_bytes = VAR_2->fpdu_length - VAR_4;
 else
  VAR_2->incomplete_bytes = 0;

 VAR_2->mpa_frag_len = VAR_2->fpdu_length - VAR_2->incomplete_bytes;
}
