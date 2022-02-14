
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct vfpf_qid_tlv {scalar_t__ qid; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ vfdev_info; } ;
struct qed_iov_vf_mbx {int req_virt; } ;
struct qed_vf_info {int relative_vf_id; TYPE_2__ acquire; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct qed_hwfn *VAR_7,
        struct qed_vf_info *VAR_8, bool VAR_9)
{
 struct qed_iov_vf_mbx *VAR_10 = &VAR_8->vf_mbx;
 struct vfpf_qid_tlv *VAR_11;


 if (!(VAR_8->acquire.vfdev_info.capabilities &
       VAR_6)) {
  if (VAR_9)
   return VAR_3;
  else
   return VAR_2;
 }

 VAR_11 = (struct vfpf_qid_tlv *)
      FUNC_1(VAR_7, VAR_10->req_virt,
          VAR_0);
 if (!VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "VF[%2x]: Failed to provide qid\n",
      VAR_8->relative_vf_id);

  return VAR_4;
 }

 if (VAR_11->qid >= VAR_1) {
  FUNC_0(VAR_7, VAR_5,
      "VF[%02x]: Provided qid out-of-bounds %02x\n",
      VAR_8->relative_vf_id, VAR_11->qid);
  return VAR_4;
 }

 return VAR_11->qid;
}
