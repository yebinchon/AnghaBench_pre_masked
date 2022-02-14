
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx_hal_msg_header {int msg_type; } ;
struct wcn36xx_hal_ind_msg {int msg_len; int list; int msg; } ;
struct wcn36xx {int hal_rsp_len; int hal_ind_lock; int hal_ind_work; int hal_ind_wq; int hal_ind_queue; int hal_rsp_compl; int hal_buf; } ;
struct rpmsg_device {int dummy; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct wcn36xx_hal_ind_msg* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,void*,int) ;
 int FUNC_9 (char*,int) ;

int FUNC_10(struct rpmsg_device *VAR_4,
       void *VAR_5, int VAR_6, void *VAR_7, u32 VAR_8)
{
 const struct wcn36xx_hal_msg_header *VAR_9 = VAR_5;
 struct ieee80211_hw *VAR_10 = VAR_7;
 struct wcn36xx *VAR_11 = VAR_10->priv;
 struct wcn36xx_hal_ind_msg *VAR_12;
 FUNC_8(VAR_3, "SMD <<< ", VAR_5, VAR_6);

 switch (VAR_9->msg_type) {
 case 136:
 case 165:
 case 166:
 case 170:
 case 133:
 case 159:
 case 162:
 case 151:
 case 134:
 case 156:
 case 152:
 case 158:
 case 164:
 case 141:
 case 139:
 case 129:
 case 140:
 case 137:
 case 143:
 case 144:
 case 155:
 case 138:
 case 154:
 case 149:
 case 157:
 case 171:
 case 172:
 case 160:
 case 131:
 case 130:
 case 150:
 case 128:
 case 168:
 case 145:
 case 153:
 case 173:
 case 135:
 case 132:
  FUNC_3(VAR_11->hal_buf, VAR_5, VAR_6);
  VAR_11->hal_rsp_len = VAR_6;
  FUNC_0(&VAR_11->hal_rsp_compl);
  break;

 case 167:
 case 169:
 case 161:
 case 147:
 case 148:
 case 163:
 case 146:
 case 142:
  VAR_12 = FUNC_1(sizeof(*VAR_12) + VAR_6, VAR_1);
  if (!VAR_12) {
   FUNC_9("Run out of memory while handling SMD_EVENT (%d)\n",
        VAR_9->msg_type);
   return -VAR_0;
  }

  VAR_12->msg_len = VAR_6;
  FUNC_3(VAR_12->msg, VAR_5, VAR_6);

  FUNC_5(&VAR_11->hal_ind_lock);
  FUNC_2(&VAR_12->list, &VAR_11->hal_ind_queue);
  FUNC_4(VAR_11->hal_ind_wq, &VAR_11->hal_ind_work);
  FUNC_6(&VAR_11->hal_ind_lock);
  FUNC_7(VAR_2, "indication arrived\n");
  break;
 default:
  FUNC_9("SMD_EVENT (%d) not supported\n",
         VAR_9->msg_type);
 }

 return 0;
}
