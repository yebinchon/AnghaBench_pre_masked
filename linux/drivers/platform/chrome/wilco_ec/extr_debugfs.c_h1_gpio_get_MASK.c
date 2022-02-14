
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wilco_ec_message {int request_size; int response_size; struct hi_gpio_status_response* response_data; struct wilco_ec_message* request_data; int type; int sub_cmd; int cmd; } ;
struct wilco_ec_device {int dummy; } ;
struct hi_gpio_status_response {int val; scalar_t__ status; } ;
struct h1_gpio_status_request {int request_size; int response_size; struct hi_gpio_status_response* response_data; struct h1_gpio_status_request* request_data; int type; int sub_cmd; int cmd; } ;
typedef int rs ;
typedef int rq ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wilco_ec_message*,int ,int) ;
 int FUNC_1 (struct wilco_ec_device*,struct wilco_ec_message*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, u64 *VAR_5)
{
 struct wilco_ec_device *VAR_6 = VAR_4;
 struct h1_gpio_status_request VAR_7;
 struct hi_gpio_status_response VAR_8;
 struct wilco_ec_message VAR_9;
 int VAR_10;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.sub_cmd = VAR_2;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.type = VAR_3;
 VAR_9.request_data = &VAR_7;
 VAR_9.request_size = sizeof(VAR_7);
 VAR_9.response_data = &VAR_8;
 VAR_9.response_size = sizeof(VAR_8);
 VAR_10 = FUNC_1(VAR_6, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_8.status)
  return -VAR_1;

 *VAR_5 = VAR_8.val;

 return 0;
}
