
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct task_status_struct {void* stat; void* residual; void* open_rej_reason; int resp; } ;
struct sas_task {int task_proto; struct task_status_struct task_status; } ;
struct hisi_sas_slot {int abort; } ;
struct hisi_sas_err_record_v2 {int dma_rx_err_type; int sipc_rx_err_type; int dma_tx_err_type; int trans_rx_fail_type; int trans_tx_fail_type; } ;
struct hisi_hba {int dummy; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;




 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sas_task*,struct hisi_sas_slot*) ;
 struct hisi_sas_err_record_v2* FUNC_1 (struct hisi_sas_slot*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(struct hisi_hba *VAR_15,
      struct sas_task *VAR_16,
      struct hisi_sas_slot *VAR_17,
      int VAR_18)
{
 struct task_status_struct *VAR_19 = &VAR_16->task_status;
 struct hisi_sas_err_record_v2 *VAR_20 =
   FUNC_1(VAR_17);
 u32 VAR_21 = FUNC_3(VAR_20->trans_tx_fail_type);
 u32 VAR_22 = FUNC_3(VAR_20->trans_rx_fail_type);
 u16 VAR_23 = FUNC_2(VAR_20->dma_tx_err_type);
 u16 VAR_24 = FUNC_2(VAR_20->sipc_rx_err_type);
 u32 VAR_25 = FUNC_3(VAR_20->dma_rx_err_type);
 int VAR_26 = -1;

 if (VAR_18 == 1) {

  VAR_26 = FUNC_5(VAR_23);
  if (VAR_26 == -1)
   VAR_26 = FUNC_8(
     VAR_21);
 } else if (VAR_18 == 2) {

  VAR_26 = FUNC_7(VAR_22);
  if (VAR_26 == -1) {
   VAR_26 = FUNC_4(
     VAR_25);
   if (VAR_26 == -1)
    VAR_26 = FUNC_6(
      VAR_24);
  }
 }

 switch (VAR_16->task_proto) {
 case 188:
 {
  switch (VAR_26) {
  case 136:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_8;
   break;
  }
  case 133:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_7;
   break;
  }
  case 138:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_6;
   break;
  }
  case 141:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_5;
   break;
  }
  case 131:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_10;
   break;
  }
  case 198:
  case 130:
  case 200:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_9;
   break;
  }
  case 137:
  {

   VAR_19->stat = VAR_3;
   break;
  }
  case 214:
  {
   VAR_19->stat = VAR_1;
   VAR_19->residual = 0;
   break;
  }
  case 213:
  {
   VAR_19->residual = VAR_21;
   VAR_19->stat = VAR_2;
   break;
  }
  case 129:
  case 157:
  case 139:
  case 142:
  case 140:
  case 134:
  case 135:
  case 128:
  case 153:
  case 154:
  case 155:
  case 148:
  case 150:
  case 149:
  case 151:
  case 152:
  case 145:
  case 156:
  case 147:
  case 146:
  case 163:
  case 167:
  case 162:
  case 168:
  case 174:
  case 175:
  case 176:
  case 171:
  case 172:
  case 173:
  case 158:
  case 170:
  case 169:
  case 177:
  case 159:
  case 160:
  case 178:
  case 195:
  case 193:
  case 194:
  case 192:
  case 191:
  case 186:
  case 211:
  case 212:
  case 207:
  case 205:
  case 206:
  case 199:
  case 196:
  {

   VAR_19->stat = VAR_13;
   VAR_17->abort = 1;
   break;
  }
  default:
   break;
  }
 }
  break;
 case 189:
  VAR_19->stat = VAR_0;
  break;

 case 190:
 case 187:
 case 190 | 187:
 {
  switch (VAR_26) {
  case 136:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_8;
   break;
  }
  case 137:
  {
   VAR_19->resp = VAR_14;
   VAR_19->stat = VAR_3;
   break;
  }
  case 133:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_7;
   break;
  }
  case 138:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_6;
   break;
  }
  case 141:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_6;
   break;
  }
  case 131:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_10;
   break;
  }
  case 200:
  case 198:
  case 130:
  {
   VAR_19->stat = VAR_4;
   VAR_19->open_rej_reason = VAR_9;
   break;
  }
  case 214:
  {
   VAR_19->stat = VAR_1;
   VAR_19->residual = 0;
   break;
  }
  case 213:
  {
   VAR_19->residual = VAR_21;
   VAR_19->stat = VAR_2;
   break;
  }
  case 129:
  case 157:
  case 139:
  case 142:
  case 140:
  case 134:
  case 135:
  case 128:
  case 153:
  case 154:
  case 155:
  case 148:
  case 150:
  case 149:
  case 151:
  case 152:
  case 156:
  case 147:
  case 144:
  case 143:
  case 162:
  case 167:
  case 165:
  case 166:
  case 161:
  case 164:
  case 168:
  case 174:
  case 175:
  case 176:
  case 171:
  case 170:
  case 172:
  case 173:
  case 169:
  case 177:
  case 159:
  case 178:
  case 195:
  case 193:
  case 194:
  case 192:
  case 191:
  case 184:
  case 183:
  case 185:
  case 180:
  case 179:
  case 181:
  case 182:
  case 211:
  case 212:
  case 199:
  case 197:
  case 210:
  case 201:
  case 202:
  case 203:
  case 207:
  case 205:
  case 206:
  case 204:
  case 209:
  case 208:
  case 196:
  case 160:
  case 132:
  {
   VAR_17->abort = 1;
   VAR_19->stat = VAR_11;
   break;
  }
  default:
  {
   VAR_19->stat = VAR_12;
   break;
  }
  }
  FUNC_0(VAR_16, VAR_17);
 }
  break;
 default:
  break;
 }
}
