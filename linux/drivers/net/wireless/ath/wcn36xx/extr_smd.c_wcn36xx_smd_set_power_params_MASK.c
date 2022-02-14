
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_set_power_params_req_msg {int ignore_dtim; int dtim_period; TYPE_1__ header; int listen_interval; } ;
struct wcn36xx {int hal_mutex; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_set_power_params_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_set_power_params_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (struct wcn36xx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_1, bool VAR_2)
{
 struct wcn36xx_hal_set_power_params_req_msg VAR_3;
 int VAR_4;

 FUNC_3(&VAR_1->hal_mutex);
 FUNC_0(VAR_3, VAR_0);




 if (VAR_2) {
  VAR_3.ignore_dtim = 1;
  VAR_3.dtim_period = 2;
 }
 VAR_3.listen_interval = FUNC_2(VAR_1);

 FUNC_1(VAR_1->hal_buf, VAR_3);

 VAR_4 = FUNC_6(VAR_1, VAR_3.header.len);
 if (VAR_4) {
  FUNC_5("Sending hal_set_power_params failed\n");
  goto out;
 }

out:
 FUNC_4(&VAR_1->hal_mutex);
 return VAR_4;
}
