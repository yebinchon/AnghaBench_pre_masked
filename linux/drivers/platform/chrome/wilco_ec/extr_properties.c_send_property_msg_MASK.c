
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_message {int request_size; int response_size; struct ec_property_response* response_data; struct ec_property_request* request_data; int type; } ;
struct wilco_ec_device {int dummy; } ;
struct ec_property_response {scalar_t__ op; int property_id; } ;
struct ec_property_request {scalar_t__ op; int property_id; } ;
typedef int ec_msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct wilco_ec_message*,int ,int) ;
 int FUNC_2 (struct wilco_ec_device*,struct wilco_ec_message*) ;

__attribute__((used)) static int FUNC_3(struct wilco_ec_device *VAR_2,
        struct ec_property_request *VAR_3,
        struct ec_property_response *VAR_4)
{
 struct wilco_ec_message VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.type = VAR_1;
 VAR_5.request_data = VAR_3;
 VAR_5.request_size = sizeof(*VAR_3);
 VAR_5.response_data = VAR_4;
 VAR_5.response_size = sizeof(*VAR_4);

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_4->op != VAR_3->op)
  return -VAR_0;
 if (FUNC_0(VAR_3->property_id, VAR_4->property_id, sizeof(VAR_4->property_id)))
  return -VAR_0;

 return 0;
}
