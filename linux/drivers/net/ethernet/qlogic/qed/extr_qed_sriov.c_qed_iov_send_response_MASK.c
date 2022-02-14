
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef void* u8 ;
typedef int u64 ;
typedef int u16 ;
struct qed_iov_vf_mbx {TYPE_4__* req_virt; scalar_t__ reply_phys; TYPE_5__* reply_virt; } ;
struct qed_vf_info {void* abs_vf_id; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dmae_params {void* dst_vfid; int flags; } ;
struct TYPE_6__ {void* status; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_10__ {TYPE_2__ default_resp; } ;
struct TYPE_8__ {scalar_t__ reply_address; } ;
struct TYPE_9__ {TYPE_3__ first_tlv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct qed_dmae_params*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__,int,struct qed_dmae_params*) ;
 int FUNC_4 (struct qed_hwfn*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_2,
      struct qed_ptt *VAR_3,
      struct qed_vf_info *VAR_4,
      u16 VAR_5, u8 VAR_6)
{
 struct qed_iov_vf_mbx *VAR_7 = &VAR_4->vf_mbx;
 struct qed_dmae_params VAR_8;
 u8 VAR_9;

 VAR_7->reply_virt->default_resp.hdr.status = VAR_6;

 FUNC_4(VAR_2, VAR_7->reply_virt);

 VAR_9 = VAR_4->abs_vf_id;

 FUNC_2(&VAR_8, 0, sizeof(struct qed_dmae_params));
 VAR_8.flags = VAR_1;
 VAR_8.dst_vfid = VAR_9;

 FUNC_3(VAR_2, VAR_3, VAR_7->reply_phys + sizeof(u64),
      VAR_7->req_virt->first_tlv.reply_address +
      sizeof(u64),
      (sizeof(union pfvf_tlvs) - sizeof(u64)) / 4,
      &VAR_8);





 FUNC_0(VAR_2,
        VAR_0 +
        FUNC_1(VAR_9), 1);

 FUNC_3(VAR_2, VAR_3, VAR_7->reply_phys,
      VAR_7->req_virt->first_tlv.reply_address,
      sizeof(u64) / 4, &VAR_8);
}
