
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_add_ba_req_msg {TYPE_1__ header; int win_size; scalar_t__ session_id; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_add_ba_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_add_ba_req_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_2)
{
 struct wcn36xx_hal_add_ba_req_msg VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->hal_mutex);
 FUNC_0(VAR_3, VAR_1);

 VAR_3.session_id = 0;
 VAR_3.win_size = VAR_0;

 FUNC_1(VAR_2->hal_buf, VAR_3);

 VAR_4 = FUNC_6(VAR_2, VAR_3.header.len);
 if (VAR_4) {
  FUNC_4("Sending hal_add_ba failed\n");
  goto out;
 }
 VAR_4 = FUNC_5(VAR_2->hal_buf, VAR_2->hal_rsp_len);
 if (VAR_4) {
  FUNC_4("hal_add_ba response failed err=%d\n", VAR_4);
  goto out;
 }
out:
 FUNC_3(&VAR_2->hal_mutex);
 return VAR_4;
}
