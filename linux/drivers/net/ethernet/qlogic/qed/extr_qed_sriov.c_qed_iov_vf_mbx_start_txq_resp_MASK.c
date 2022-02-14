
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ eth_fp_hsi_minor; } ;
struct TYPE_4__ {TYPE_1__ vfdev_info; } ;
struct qed_iov_vf_mbx {int * offset; scalar_t__ reply_virt; } ;
struct qed_vf_info {TYPE_2__ acquire; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_start_queue_resp_tlv {int offset; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pfvf_start_queue_resp_tlv* FUNC_0 (struct qed_hwfn*,int **,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_5,
       struct qed_ptt *VAR_6,
       struct qed_vf_info *VAR_7,
       u32 VAR_8, u8 VAR_9)
{
 struct qed_iov_vf_mbx *VAR_10 = &VAR_7->vf_mbx;
 struct pfvf_start_queue_resp_tlv *VAR_11;
 bool VAR_12 = 0;
 u16 VAR_13;

 VAR_10->offset = (u8 *)VAR_10->reply_virt;





 if (VAR_7->acquire.vfdev_info.eth_fp_hsi_minor ==
     VAR_3)
  VAR_12 = 1;

 if (!VAR_12)
  VAR_13 = sizeof(*VAR_11);
 else
  VAR_13 = sizeof(struct pfvf_def_resp_tlv);

 VAR_11 = FUNC_0(VAR_5, &VAR_10->offset, VAR_1,
       VAR_13);
 FUNC_0(VAR_5, &VAR_10->offset, VAR_0,
      sizeof(struct channel_list_end_tlv));


 if ((VAR_9 == VAR_4) && !VAR_12)
  VAR_11->offset = FUNC_1(VAR_8, VAR_2);

 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_13, VAR_9);
}
