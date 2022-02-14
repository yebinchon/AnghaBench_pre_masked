
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u32 ;
struct vfpf_first_tlv {int dummy; } ;
struct TYPE_9__ {int phys; TYPE_5__* p_virt; } ;
struct qed_vf_iov {TYPE_4__ bulletin; int pf2vf_reply_phys; TYPE_5__* pf2vf_reply; int vf2pf_request_phys; TYPE_5__* vf2pf_request; int offset; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; TYPE_3__* cdev; scalar_t__ b_int_enabled; } ;
struct qed_bulletin_content {int dummy; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_10__ {struct pfvf_def_resp_tlv default_resp; } ;
struct TYPE_8__ {TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,TYPE_5__*,int ) ;
 int FUNC_1 (struct qed_vf_iov*) ;
 int FUNC_2 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_first_tlv* FUNC_4 (struct qed_hwfn*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,int) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_4, bool VAR_5)
{
 struct qed_vf_iov *VAR_6 = VAR_4->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_7;
 struct vfpf_first_tlv *VAR_8;
 u32 VAR_9;
 int VAR_10;


 VAR_8 = FUNC_4(VAR_4, VAR_1, sizeof(*VAR_8));


 FUNC_2(VAR_4, &VAR_6->offset,
      VAR_0, sizeof(struct channel_list_end_tlv));

 VAR_7 = &VAR_6->pf2vf_reply->default_resp;
 VAR_10 = FUNC_3(VAR_4, &VAR_7->hdr.status, sizeof(*VAR_7));

 if (!VAR_10 && VAR_7->hdr.status != VAR_3)
  VAR_10 = -VAR_2;

 FUNC_5(VAR_4, VAR_10);
 if (!VAR_5)
  return VAR_10;

 VAR_4->b_int_enabled = 0;

 if (VAR_6->vf2pf_request)
  FUNC_0(&VAR_4->cdev->pdev->dev,
      sizeof(union vfpf_tlvs),
      VAR_6->vf2pf_request,
      VAR_6->vf2pf_request_phys);
 if (VAR_6->pf2vf_reply)
  FUNC_0(&VAR_4->cdev->pdev->dev,
      sizeof(union pfvf_tlvs),
      VAR_6->pf2vf_reply, VAR_6->pf2vf_reply_phys);

 if (VAR_6->bulletin.p_virt) {
  VAR_9 = sizeof(struct qed_bulletin_content);
  FUNC_0(&VAR_4->cdev->pdev->dev,
      VAR_9,
      VAR_6->bulletin.p_virt, VAR_6->bulletin.phys);
 }

 FUNC_1(VAR_4->vf_iov_info);
 VAR_4->vf_iov_info = ((void*)0);

 return VAR_10;
}
