
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_property_msg {int length; int data; int property_id; } ;
struct wilco_ec_device {int dummy; } ;
struct ec_property_response {int length; } ;
struct ec_property_request {int data; int length; int property_id; int op; } ;
typedef int rq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ec_property_request*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wilco_ec_device*,struct ec_property_request*,struct ec_property_response*) ;

int FUNC_4(struct wilco_ec_device *VAR_2,
     struct wilco_ec_property_msg *VAR_3)
{
 struct ec_property_request VAR_4;
 struct ec_property_response VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.op = VAR_1;
 FUNC_2(VAR_3->property_id, VAR_4.property_id);
 VAR_4.length = VAR_3->length;
 FUNC_0(VAR_4.data, VAR_3->data, VAR_3->length);

 VAR_6 = FUNC_3(VAR_2, &VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_5.length != VAR_3->length)
  return -VAR_0;

 return 0;
}
