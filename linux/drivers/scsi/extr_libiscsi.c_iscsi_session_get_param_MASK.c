
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int fast_abort; int abort_timeout; int lu_reset_timeout; int tgt_reset_timeout; int initial_r2t_en; int imm_data_en; int first_burst; int max_burst; int pdu_inorder_en; int dataseq_inorder_en; int def_taskmgmt_tmo; int erl; char* targetname; char* targetalias; int tpgt; char* username; char* username_in; char* password; char* password_in; char* ifacename; char* initiatorname; char* boot_root; char* boot_nic; char* boot_target; int auto_snd_tgt_disable; int discovery_sess; char* portal_type; int chap_auth_en; int discovery_logout_en; int bidi_chap_en; int discovery_auth_optional; int time2wait; int time2retain; int tsid; int* isid; int discovery_parent_idx; char* discovery_parent_type; int max_r2t; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

int FUNC_1(struct iscsi_cls_session *VAR_1,
       enum iscsi_param VAR_2, char *VAR_3)
{
 struct iscsi_session *VAR_4 = VAR_1->dd_data;
 int VAR_5;

 switch(VAR_2) {
 case 148:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->fast_abort);
  break;
 case 165:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->abort_timeout);
  break;
 case 141:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->lu_reset_timeout);
  break;
 case 132:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->tgt_reset_timeout);
  break;
 case 144:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->initial_r2t_en);
  break;
 case 139:
  VAR_5 = FUNC_0(VAR_3, "%hu\n", VAR_4->max_r2t);
  break;
 case 145:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->imm_data_en);
  break;
 case 147:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->first_burst);
  break;
 case 140:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->max_burst);
  break;
 case 136:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->pdu_inorder_en);
  break;
 case 158:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->dataseq_inorder_en);
  break;
 case 157:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->def_taskmgmt_tmo);
  break;
 case 149:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->erl);
  break;
 case 133:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->targetname);
  break;
 case 134:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->targetalias);
  break;
 case 131:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->tpgt);
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->username);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->username_in);
  break;
 case 138:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->password);
  break;
 case 137:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->password_in);
  break;
 case 146:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->ifacename);
  break;
 case 143:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->initiatorname);
  break;
 case 161:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->boot_root);
  break;
 case 162:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->boot_nic);
  break;
 case 160:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->boot_target);
  break;
 case 164:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->auto_snd_tgt_disable);
  break;
 case 150:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->discovery_sess);
  break;
 case 135:
  VAR_5 = FUNC_0(VAR_3, "%s\n", VAR_4->portal_type);
  break;
 case 159:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->chap_auth_en);
  break;
 case 153:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->discovery_logout_en);
  break;
 case 163:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->bidi_chap_en);
  break;
 case 154:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->discovery_auth_optional);
  break;
 case 155:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->time2wait);
  break;
 case 156:
  VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_4->time2retain);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->tsid);
  break;
 case 142:
  VAR_5 = FUNC_0(VAR_3, "%02x%02x%02x%02x%02x%02x\n",
         VAR_4->isid[0], VAR_4->isid[1],
         VAR_4->isid[2], VAR_4->isid[3],
         VAR_4->isid[4], VAR_4->isid[5]);
  break;
 case 152:
  VAR_5 = FUNC_0(VAR_3, "%u\n", VAR_4->discovery_parent_idx);
  break;
 case 151:
  if (VAR_4->discovery_parent_type)
   VAR_5 = FUNC_0(VAR_3, "%s\n",
          VAR_4->discovery_parent_type);
  else
   VAR_5 = FUNC_0(VAR_3, "\n");
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
