
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_property_msg {int data; int length; int property_id; } ;
struct wilco_ec_device {int dummy; } ;
struct ec_property_response {int length; int data; } ;
struct ec_property_request {int property_id; int op; } ;
typedef int rq ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ec_property_request*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wilco_ec_device*,struct ec_property_request*,struct ec_property_response*) ;

int FUNC_4(struct wilco_ec_device *VAR_1,
     struct wilco_ec_property_msg *VAR_2)
{
 struct ec_property_request VAR_3;
 struct ec_property_response VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.op = VAR_0;
 FUNC_2(VAR_2->property_id, VAR_3.property_id);

 VAR_5 = FUNC_3(VAR_1, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->length = VAR_4.length;
 FUNC_0(VAR_2->data, VAR_4.data, VAR_4.length);

 return 0;
}
