
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int length; } ;
struct TYPE_13__ {TYPE_4__ tl; } ;
struct vfpf_rss_tlv {int ind_table_size; TYPE_6__ first_tlv; int rss_flags; int rss_result_mask; int rss_key_size; int rss_key; int ind_table; } ;
struct TYPE_12__ {int status; } ;
struct pfvf_general_resp_tlv {TYPE_5__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x_config_rss_params {int rss_flags; int rss_result_mask; int rss_key; int ind_table; } ;
struct bnx2x {int vf2pf_mbox_mapping; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_9__ {struct vfpf_rss_tlv update_rss; } ;
struct TYPE_8__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_10__ {TYPE_2__ req; TYPE_1__ resp; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_rss_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_rss_tlv*) ;
 int FUNC_4 (struct bnx2x*,int *,int ) ;
 int FUNC_5 (struct bnx2x*,TYPE_6__*) ;
 int FUNC_6 (struct bnx2x*,TYPE_6__*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;

int FUNC_8(struct bnx2x *VAR_24,
     struct bnx2x_config_rss_params *VAR_25)
{
 struct pfvf_general_resp_tlv *VAR_26 = &VAR_24->vf2pf_mbox->resp.general_resp;
 struct vfpf_rss_tlv *VAR_27 = &VAR_24->vf2pf_mbox->req.update_rss;
 int VAR_28 = 0;


 FUNC_6(VAR_24, &VAR_27->first_tlv, VAR_11,
   sizeof(*VAR_27));


 FUNC_2(VAR_24, VAR_27, VAR_27->first_tlv.tl.length, VAR_10,
        sizeof(struct channel_list_end_tlv));

 FUNC_7(VAR_27->ind_table, VAR_25->ind_table, VAR_13);
 FUNC_7(VAR_27->rss_key, VAR_25->rss_key, sizeof(VAR_25->rss_key));
 VAR_27->ind_table_size = VAR_13;
 VAR_27->rss_key_size = VAR_14;
 VAR_27->rss_result_mask = VAR_25->rss_result_mask;


 if (VAR_25->rss_flags & (1 << VAR_7))
  VAR_27->rss_flags |= VAR_21;
 if (VAR_25->rss_flags & (1 << VAR_8))
  VAR_27->rss_flags |= VAR_22;
 if (VAR_25->rss_flags & (1 << VAR_9))
  VAR_27->rss_flags |= VAR_23;
 if (VAR_25->rss_flags & (1 << VAR_1))
  VAR_27->rss_flags |= VAR_15;
 if (VAR_25->rss_flags & (1 << VAR_2))
  VAR_27->rss_flags |= VAR_16;
 if (VAR_25->rss_flags & (1 << VAR_3))
  VAR_27->rss_flags |= VAR_17;
 if (VAR_25->rss_flags & (1 << VAR_4))
  VAR_27->rss_flags |= VAR_18;
 if (VAR_25->rss_flags & (1 << VAR_5))
  VAR_27->rss_flags |= VAR_19;
 if (VAR_25->rss_flags & (1 << VAR_6))
  VAR_27->rss_flags |= VAR_20;

 FUNC_1(VAR_0, "rss flags %x\n", VAR_27->rss_flags);


 FUNC_3(VAR_24, VAR_27);


 VAR_28 = FUNC_4(VAR_24, &VAR_26->hdr.status, VAR_24->vf2pf_mbox_mapping);
 if (VAR_28) {
  FUNC_0("failed to send message to pf. rc was %d\n", VAR_28);
  goto out;
 }

 if (VAR_26->hdr.status != VAR_12) {




  FUNC_1(VAR_0,
     "Failed to send rss message to PF over VF-PF channel [%d]\n",
     VAR_26->hdr.status);
 }
out:
 FUNC_5(VAR_24, &VAR_27->first_tlv);

 return VAR_28;
}
