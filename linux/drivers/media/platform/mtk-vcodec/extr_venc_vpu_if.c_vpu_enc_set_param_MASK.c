
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_inst {int inst_addr; } ;
struct venc_enc_param {int intra_period; int gop_size; int frm_rate; int bitrate; } ;
struct venc_ap_ipi_msg_set_param {int param_id; int data_item; int * data; int vpu_inst_addr; int msg_id; } ;
typedef int out ;
typedef enum venc_set_param_type { ____Placeholder_venc_set_param_type } venc_set_param_type ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct venc_ap_ipi_msg_set_param*,int ,int) ;
 int FUNC_1 (struct venc_vpu_inst*,char*,int) ;
 int FUNC_2 (struct venc_vpu_inst*,char*,int) ;
 scalar_t__ FUNC_3 (struct venc_vpu_inst*,struct venc_ap_ipi_msg_set_param*,int) ;

int FUNC_4(struct venc_vpu_inst *VAR_2,
        enum venc_set_param_type VAR_3,
        struct venc_enc_param *VAR_4)
{
 struct venc_ap_ipi_msg_set_param VAR_5;

 FUNC_1(VAR_2, "id %d ->", VAR_3);

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.msg_id = VAR_0;
 VAR_5.vpu_inst_addr = VAR_2->inst_addr;
 VAR_5.param_id = VAR_3;
 switch (VAR_3) {
 case 132:
  VAR_5.data_item = 0;
  break;
 case 131:
  VAR_5.data_item = 0;
  break;
 case 134:
  VAR_5.data_item = 1;
  VAR_5.data[0] = VAR_4->bitrate;
  break;
 case 133:
  VAR_5.data_item = 1;
  VAR_5.data[0] = VAR_4->frm_rate;
  break;
 case 130:
  VAR_5.data_item = 1;
  VAR_5.data[0] = VAR_4->gop_size;
  break;
 case 129:
  VAR_5.data_item = 1;
  VAR_5.data[0] = VAR_4->intra_period;
  break;
 case 128:
  VAR_5.data_item = 0;
  break;
 default:
  FUNC_2(VAR_2, "id %d not supported", VAR_3);
  return -VAR_1;
 }
 if (FUNC_3(VAR_2, &VAR_5, sizeof(VAR_5))) {
  FUNC_2(VAR_2,
          "AP_IPIMSG_ENC_SET_PARAM %d fail", VAR_3);
  return -VAR_1;
 }

 FUNC_1(VAR_2, "id %d <-", VAR_3);

 return 0;
}
