
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {scalar_t__ reply_address; } ;
struct TYPE_8__ {TYPE_2__ first_tlv; } ;
struct TYPE_9__ {int type; int length; } ;
struct TYPE_10__ {scalar_t__ reply_address; TYPE_4__ tl; int padding; } ;
struct qed_iov_vf_mbx {int b_pending_msg; TYPE_5__ first_tlv; TYPE_1__* req_virt; } ;
struct qed_vf_info {int abs_vf_id; TYPE_3__ acquire; int b_malicious; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_6__ {TYPE_5__ first_tlv; } ;
 int FUNC_0 (struct qed_hwfn*,char*,int ,...) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qed_vf_info* FUNC_2 (struct qed_hwfn*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_15 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_16 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_17 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_18 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_19 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_20 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_21 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;

__attribute__((used)) static void FUNC_22(struct qed_hwfn *VAR_3,
        struct qed_ptt *VAR_4, int VAR_5)
{
 struct qed_iov_vf_mbx *VAR_6;
 struct qed_vf_info *VAR_7;

 VAR_7 = FUNC_2(VAR_3, (u16) VAR_5, 1);
 if (!VAR_7)
  return;

 VAR_6 = &VAR_7->vf_mbx;


 if (!VAR_6->b_pending_msg) {
  FUNC_0(VAR_3,
     "VF[%02x]: Trying to process mailbox message when none is pending\n",
     VAR_7->abs_vf_id);
  return;
 }
 VAR_6->b_pending_msg = 0;

 VAR_6->first_tlv = VAR_6->req_virt->first_tlv;

 FUNC_1(VAR_3, VAR_2,
     "VF[%02x]: Processing mailbox message [type %04x]\n",
     VAR_7->abs_vf_id, VAR_6->first_tlv.tl.type);


 if (FUNC_4(VAR_6->first_tlv.tl.type) &&
     !VAR_7->b_malicious) {
  switch (VAR_6->first_tlv.tl.type) {
  case 144:
   FUNC_5(VAR_3, VAR_4, VAR_7);
   break;
  case 130:
   FUNC_11(VAR_3, VAR_4, VAR_7);
   break;
  case 129:
   FUNC_14(VAR_3, VAR_4, VAR_7);
   break;
  case 137:
   FUNC_9(VAR_3, VAR_4, VAR_7);
   break;
  case 136:
   FUNC_10(VAR_3, VAR_4, VAR_7);
   break;
  case 135:
   FUNC_12(VAR_3, VAR_4, VAR_7);
   break;
  case 134:
   FUNC_13(VAR_3, VAR_4, VAR_7);
   break;
  case 132:
   FUNC_16(VAR_3, VAR_4, VAR_7);
   break;
  case 128:
   FUNC_18(VAR_3, VAR_4, VAR_7);
   break;
  case 133:
   FUNC_15(VAR_3, VAR_4, VAR_7);
   break;
  case 142:
   FUNC_6(VAR_3, VAR_4, VAR_7);
   break;
  case 139:
   FUNC_7(VAR_3, VAR_4, VAR_7);
   break;
  case 138:
   FUNC_8(VAR_3, VAR_4, VAR_7);
   break;
  case 131:
   FUNC_17(VAR_3, VAR_4, VAR_7);
   break;
  case 140:
   FUNC_21(VAR_3, VAR_4, VAR_7);
   break;
  case 141:
   FUNC_20(VAR_3, VAR_4, VAR_7);
   break;
  case 143:
   FUNC_19(VAR_3, VAR_4, VAR_7);
   break;
  }
 } else if (FUNC_4(VAR_6->first_tlv.tl.type)) {
  FUNC_1(VAR_3, VAR_2,
      "VF [%02x] - considered malicious; Ignoring TLV [%04x]\n",
      VAR_7->abs_vf_id, VAR_6->first_tlv.tl.type);

  FUNC_3(VAR_3, VAR_4, VAR_7,
         VAR_6->first_tlv.tl.type,
         sizeof(struct pfvf_def_resp_tlv),
         VAR_0);
 } else {






  FUNC_0(VAR_3,
     "VF[%02x]: unknown TLV. type %04x length %04x padding %08x reply address %llu\n",
     VAR_7->abs_vf_id,
     VAR_6->first_tlv.tl.type,
     VAR_6->first_tlv.tl.length,
     VAR_6->first_tlv.padding, VAR_6->first_tlv.reply_address);




  if (VAR_7->acquire.first_tlv.reply_address &&
      (VAR_6->first_tlv.reply_address ==
       VAR_7->acquire.first_tlv.reply_address)) {
   FUNC_3(VAR_3, VAR_4, VAR_7,
          VAR_6->first_tlv.tl.type,
          sizeof(struct pfvf_def_resp_tlv),
          VAR_1);
  } else {
   FUNC_1(VAR_3,
       VAR_2,
       "VF[%02x]: Can't respond to TLV - no valid reply address\n",
       VAR_7->abs_vf_id);
  }
 }
}
