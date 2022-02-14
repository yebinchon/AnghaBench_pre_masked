
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct unaligned_opaque_data {int first_mpa_offset; } ;
struct qed_iwarp_ll2_buff {int * buff_size; int * data; int data_phys_addr; } ;
struct qed_iwarp_fpdu {scalar_t__ mpa_frag_len; scalar_t__ incomplete_bytes; int * mpa_frag_virt; int mpa_frag; struct qed_iwarp_ll2_buff* mpa_buf; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int * mpa_intermediate_buf; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int *,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_iwarp_fpdu*,struct qed_iwarp_ll2_buff*) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_2,
   struct qed_iwarp_fpdu *VAR_3,
   struct unaligned_opaque_data *VAR_4,
   struct qed_iwarp_ll2_buff *VAR_5, u16 VAR_6)
{
 u8 *VAR_7 = VAR_2->p_rdma_info->iwarp.mpa_intermediate_buf;
 int VAR_8;







 if ((VAR_3->mpa_frag_len + VAR_6) > (u16)VAR_5->buff_size) {
  FUNC_0(VAR_2,
         "MPA ALIGN: Unexpected: buffer is not large enough for split fpdu buff_size = %d mpa_frag_len = %d, tcp_payload_size = %d, incomplete_bytes = %d\n",
         VAR_5->buff_size, VAR_3->mpa_frag_len,
         VAR_6, VAR_3->incomplete_bytes);
  return -VAR_0;
 }

 FUNC_1(VAR_2, VAR_1,
     "MPA ALIGN Copying fpdu: [%p, %d] [%p, %d]\n",
     VAR_3->mpa_frag_virt, VAR_3->mpa_frag_len,
     (u8 *)(VAR_5->data) + VAR_4->first_mpa_offset,
     VAR_6);

 FUNC_2(VAR_7, VAR_3->mpa_frag_virt, VAR_3->mpa_frag_len);
 FUNC_2(VAR_7 + VAR_3->mpa_frag_len,
        (u8 *)(VAR_5->data) + VAR_4->first_mpa_offset,
        VAR_6);

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_3->mpa_buf);
 if (VAR_8)
  return VAR_8;




 FUNC_2((u8 *)(VAR_5->data), VAR_7,
        VAR_3->mpa_frag_len + VAR_6);

 VAR_3->mpa_buf = VAR_5;


 VAR_3->mpa_frag = VAR_5->data_phys_addr;
 VAR_3->mpa_frag_virt = VAR_5->data;
 VAR_3->mpa_frag_len += VAR_6;

 VAR_3->incomplete_bytes -= VAR_6;

 FUNC_1(VAR_2,
     VAR_1,
     "MPA ALIGN: split fpdu buff_size = %d mpa_frag_len = %d, tcp_payload_size = %d, incomplete_bytes = %d\n",
     VAR_5->buff_size, VAR_3->mpa_frag_len, VAR_6,
     VAR_3->incomplete_bytes);

 return 0;
}
