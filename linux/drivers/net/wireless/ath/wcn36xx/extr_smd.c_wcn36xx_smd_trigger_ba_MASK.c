
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_trigger_ba_req_msg {int candidate_cnt; TYPE_1__ header; scalar_t__ session_id; } ;
struct wcn36xx_hal_trigger_ba_req_candidate {int tid_bitmap; int sta_index; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; scalar_t__ hal_buf; } ;
typedef int msg_body ;


 int FUNC_0 (struct wcn36xx_hal_trigger_ba_req_msg,int ) ;
 int FUNC_1 (scalar_t__,struct wcn36xx_hal_trigger_ba_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct wcn36xx*,int) ;
 int FUNC_6 (scalar_t__,int ) ;

int FUNC_7(struct wcn36xx *VAR_1, u8 VAR_2)
{
 struct wcn36xx_hal_trigger_ba_req_msg VAR_3;
 struct wcn36xx_hal_trigger_ba_req_candidate *VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_3, VAR_0);

 VAR_3.session_id = 0;
 VAR_3.candidate_cnt = 1;
 VAR_3.header.len += sizeof(*VAR_4);
 FUNC_1(VAR_1->hal_buf, VAR_3);

 VAR_4 = (struct wcn36xx_hal_trigger_ba_req_candidate *)
  (VAR_1->hal_buf + sizeof(VAR_3));
 VAR_4->sta_index = VAR_2;
 VAR_4->tid_bitmap = 1;

 VAR_5 = FUNC_5(VAR_1, VAR_3.header.len);
 if (VAR_5) {
  FUNC_4("Sending hal_trigger_ba failed\n");
  goto out;
 }
 VAR_5 = FUNC_6(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_5) {
  FUNC_4("hal_trigger_ba response failed err=%d\n", VAR_5);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_5;
}
