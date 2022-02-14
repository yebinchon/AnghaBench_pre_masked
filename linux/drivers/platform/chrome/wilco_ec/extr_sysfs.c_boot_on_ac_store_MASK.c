
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilco_ec_message {int val; int request_size; struct wilco_ec_message* request_data; int type; int sub_cmd; int cmd; } ;
struct wilco_ec_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct boot_on_ac_request {int val; int request_size; struct boot_on_ac_request* request_data; int type; int sub_cmd; int cmd; } ;
typedef int ssize_t ;
typedef int rq ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wilco_ec_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (struct wilco_ec_message*,int ,int) ;
 int FUNC_3 (struct wilco_ec_device*,struct wilco_ec_message*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct wilco_ec_device *VAR_8 = FUNC_0(VAR_4);
 struct boot_on_ac_request VAR_9;
 struct wilco_ec_message VAR_10;
 int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_1(VAR_6, 10, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_12 > 1)
  return -VAR_1;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cmd = VAR_0;
 VAR_9.sub_cmd = VAR_2;
 VAR_9.val = VAR_12;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.type = VAR_3;
 VAR_10.request_data = &VAR_9;
 VAR_10.request_size = sizeof(VAR_9);
 VAR_11 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 return VAR_7;
}
