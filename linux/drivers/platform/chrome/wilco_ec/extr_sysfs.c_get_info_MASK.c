
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_message {int request_size; int response_size; struct get_ec_info_resp* response_data; struct get_ec_info_req* request_data; int type; } ;
struct wilco_ec_device {int dummy; } ;
struct get_ec_info_resp {int value; } ;
struct get_ec_info_req {int op; int cmd; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int resp ;
typedef int req ;
typedef enum get_ec_info_op { ____Placeholder_get_ec_info_op } get_ec_info_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wilco_ec_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int,char*) ;
 int FUNC_2 (struct wilco_ec_device*,struct wilco_ec_message*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3, char *VAR_4, enum get_ec_info_op VAR_5)
{
 struct wilco_ec_device *VAR_6 = FUNC_0(VAR_3);
 struct get_ec_info_req VAR_7 = { .cmd = VAR_0, .op = VAR_5 };
 struct get_ec_info_resp VAR_8;
 int VAR_9;

 struct wilco_ec_message VAR_10 = {
  .type = VAR_2,
  .request_data = &VAR_7,
  .request_size = sizeof(VAR_7),
  .response_data = &VAR_8,
  .response_size = sizeof(VAR_8),
 };

 VAR_9 = FUNC_2(VAR_6, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_1(VAR_4, VAR_1, "%.*s\n", (int)sizeof(VAR_8.value),
    (char *)&VAR_8.value);
}
