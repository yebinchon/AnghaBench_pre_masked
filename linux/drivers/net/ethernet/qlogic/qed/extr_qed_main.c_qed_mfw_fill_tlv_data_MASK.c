
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union qed_mfw_tlv_data {int iscsi; int fcoe; int eth; int generic; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct TYPE_2__ {struct qed_common_cb_ops* common; } ;
struct qed_dev {int ops_cookie; TYPE_1__ protocol_ops; } ;
struct qed_common_cb_ops {int (* get_protocol_tlv_data ) (int ,int *) ;int get_generic_tlv_data; } ;
typedef enum qed_mfw_tlv_type { ____Placeholder_qed_mfw_tlv_type } qed_mfw_tlv_type ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;




 int FUNC_1 (struct qed_dev*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qed_hwfn *VAR_1, enum qed_mfw_tlv_type VAR_2,
     union qed_mfw_tlv_data *VAR_3)
{
 struct qed_dev *VAR_4 = VAR_1->cdev;
 struct qed_common_cb_ops *VAR_5;

 VAR_5 = VAR_4->protocol_ops.common;
 if (!VAR_5 || !VAR_5->get_protocol_tlv_data || !VAR_5->get_generic_tlv_data) {
  FUNC_0(VAR_1, "Can't collect TLV management info\n");
  return -VAR_0;
 }

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1->cdev, &VAR_3->generic);
  break;
 case 131:
  VAR_5->get_protocol_tlv_data(VAR_4->ops_cookie, &VAR_3->eth);
  break;
 case 130:
  VAR_5->get_protocol_tlv_data(VAR_4->ops_cookie, &VAR_3->fcoe);
  break;
 case 128:
  VAR_5->get_protocol_tlv_data(VAR_4->ops_cookie, &VAR_3->iscsi);
  break;
 default:
  break;
 }

 return 0;
}
