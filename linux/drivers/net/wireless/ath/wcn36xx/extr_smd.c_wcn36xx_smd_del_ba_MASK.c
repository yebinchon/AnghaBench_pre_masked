
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_del_ba_req_msg {TYPE_1__ header; scalar_t__ direction; int tid; int sta_index; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_del_ba_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_del_ba_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct wcn36xx_hal_del_ba_req_msg VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_4, VAR_0);

 VAR_4.sta_index = VAR_3;
 VAR_4.tid = VAR_2;
 VAR_4.direction = 0;
 FUNC_1(VAR_1->hal_buf, VAR_4);

 VAR_5 = FUNC_6(VAR_1, VAR_4.header.len);
 if (VAR_5) {
  FUNC_4("Sending hal_del_ba failed\n");
  goto out;
 }
 VAR_5 = FUNC_5(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_5) {
  FUNC_4("hal_del_ba response failed err=%d\n", VAR_5);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_5;
}
