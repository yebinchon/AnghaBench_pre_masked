
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct unaligned_opaque_data {int cid; int first_mpa_offset; } ;
struct qed_iwarp_ll2_mpa_buf {int tcp_payload_len; int placement_offset; struct qed_iwarp_ll2_buff* ll2_buf; struct unaligned_opaque_data data; } ;
struct qed_iwarp_ll2_buff {scalar_t__ data; } ;
struct qed_iwarp_fpdu {int incomplete_bytes; int fpdu_length; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum qed_iwarp_mpa_pkt_type { ____Placeholder_qed_iwarp_mpa_pkt_type } qed_iwarp_mpa_pkt_type ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct unaligned_opaque_data*) ;



 int VAR_1 ;
 int FUNC_3 (struct qed_iwarp_fpdu*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_iwarp_fpdu*,struct unaligned_opaque_data*,struct qed_iwarp_ll2_buff*,int ) ;
 struct qed_iwarp_fpdu* FUNC_5 (struct qed_hwfn*,int) ;
 int FUNC_6 (struct qed_iwarp_ll2_buff*,struct qed_iwarp_fpdu*,struct unaligned_opaque_data*,int ,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_iwarp_ll2_buff*,int ) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_iwarp_fpdu*,int ,int *) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_iwarp_fpdu*,struct unaligned_opaque_data*,struct qed_iwarp_ll2_buff*,int ,int) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_iwarp_fpdu*,int *) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_iwarp_fpdu*) ;

__attribute__((used)) static int
FUNC_12(struct qed_hwfn *VAR_2,
     struct qed_iwarp_ll2_mpa_buf *VAR_3)
{
 struct unaligned_opaque_data *VAR_4 = &VAR_3->data;
 struct qed_iwarp_ll2_buff *VAR_5 = VAR_3->ll2_buf;
 enum qed_iwarp_mpa_pkt_type VAR_6;
 struct qed_iwarp_fpdu *VAR_7;
 int VAR_8 = -VAR_0;
 u8 *VAR_9;

 VAR_7 = FUNC_5(VAR_2, VAR_4->cid & 0xffff);
 if (!VAR_7) {
  FUNC_0(VAR_2, "Invalid cid, drop and post back to rx cid=%x\n",
         VAR_4->cid);
  goto err;
 }

 do {
  VAR_9 = ((u8 *)(VAR_5->data) + VAR_4->first_mpa_offset);

  VAR_6 = FUNC_8(VAR_2, VAR_7,
        VAR_3->tcp_payload_len,
        VAR_9);

  switch (VAR_6) {
  case 129:
   FUNC_6(VAR_5, VAR_7,
         VAR_4,
         VAR_3->tcp_payload_len,
         VAR_3->placement_offset);

   if (!FUNC_2(VAR_4)) {
    VAR_3->tcp_payload_len = 0;
    break;
   }

   VAR_8 = FUNC_11(VAR_2, VAR_7);

   if (VAR_8) {
    FUNC_1(VAR_2, VAR_1,
        "Can't send FPDU:reset rc=%d\n", VAR_8);
    FUNC_3(VAR_7, 0, sizeof(*VAR_7));
    break;
   }

   VAR_3->tcp_payload_len = 0;
   break;
  case 130:
   FUNC_6(VAR_5, VAR_7,
         VAR_4,
         VAR_3->tcp_payload_len,
         VAR_3->placement_offset);

   VAR_8 = FUNC_9(VAR_2, VAR_7, VAR_4, VAR_5,
       VAR_3->tcp_payload_len,
       VAR_6);
   if (VAR_8) {
    FUNC_1(VAR_2, VAR_1,
        "Can't send FPDU:reset rc=%d\n", VAR_8);
    FUNC_3(VAR_7, 0, sizeof(*VAR_7));
    break;
   }

   VAR_3->tcp_payload_len -= VAR_7->fpdu_length;
   VAR_4->first_mpa_offset += VAR_7->fpdu_length;
   break;
  case 128:
   FUNC_10(VAR_2, VAR_7, VAR_9);
   if (VAR_3->tcp_payload_len < VAR_7->incomplete_bytes) {



    if (FUNC_2(VAR_4)) {
     VAR_8 = FUNC_11(VAR_2,
              VAR_7);

     if (VAR_8)
      return VAR_8;
    }

    VAR_8 = FUNC_4(VAR_2, VAR_7, VAR_4,
            VAR_5,
            VAR_3->tcp_payload_len);
    if (VAR_8)
     return VAR_8;

    VAR_3->tcp_payload_len = 0;
    break;
   }

   VAR_8 = FUNC_9(VAR_2, VAR_7, VAR_4, VAR_5,
       VAR_3->tcp_payload_len,
       VAR_6);
   if (VAR_8) {
    FUNC_1(VAR_2, VAR_1,
        "Can't send FPDU:delay rc=%d\n", VAR_8);



    break;
   }

   VAR_3->tcp_payload_len -= VAR_7->incomplete_bytes;
   VAR_4->first_mpa_offset += VAR_7->incomplete_bytes;

   VAR_7->incomplete_bytes = 0;
   break;
  }
 } while (VAR_3->tcp_payload_len && !VAR_8);

 return VAR_8;

err:
 FUNC_7(VAR_2,
         VAR_5,
         VAR_2->p_rdma_info->iwarp.ll2_mpa_handle);
 return VAR_8;
}
