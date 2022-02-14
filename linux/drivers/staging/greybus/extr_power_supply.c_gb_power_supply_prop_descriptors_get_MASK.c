
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct gb_power_supply_get_property_descriptors_response {TYPE_4__* props; } ;
struct gb_power_supply_get_property_descriptors_request {int psy_id; } ;
struct gb_power_supply {int properties_count; int* props_raw; TYPE_5__* props; int id; } ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; } ;
struct gb_connection {TYPE_3__* bundle; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_10__ {int prop; int is_writeable; int gb_prop; } ;
struct TYPE_9__ {scalar_t__ is_writeable; int property; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct gb_power_supply_get_property_descriptors_response* payload; } ;
struct TYPE_6__ {struct gb_power_supply_get_property_descriptors_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gb_power_supply*) ;
 int FUNC_1 (int *,char*,int ) ;
 struct gb_operation* FUNC_2 (struct gb_connection*,int ,int,int ,int ) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;
 struct gb_connection* FUNC_5 (struct gb_power_supply*) ;
 int FUNC_6 (int ,int*) ;
 void* FUNC_7 (int,int,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct gb_power_supply_get_property_descriptors_response*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct gb_power_supply *VAR_4)
{
 struct gb_connection *VAR_5 = FUNC_5(VAR_4);
 struct gb_power_supply_get_property_descriptors_request *VAR_6;
 struct gb_power_supply_get_property_descriptors_response *VAR_7;
 struct gb_operation *VAR_8;
 u8 VAR_9 = VAR_4->properties_count;
 enum power_supply_property VAR_10;
 int VAR_11;
 int VAR_12, VAR_13 = 0;

 if (VAR_9 == 0)
  return 0;

 VAR_8 = FUNC_2(VAR_5,
     VAR_1,
     sizeof(*VAR_6),
     FUNC_8(VAR_7, VAR_3, VAR_9),
     VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = VAR_8->request->payload;
 VAR_6->psy_id = VAR_4->id;

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 < 0)
  goto out_put_operation;

 VAR_7 = VAR_8->response->payload;


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_11 = FUNC_6(VAR_7->props[VAR_12].property, &VAR_10);
  if (VAR_11 < 0) {
   FUNC_1(&VAR_5->bundle->dev,
     "greybus property %u it is not supported by this kernel, dropped\n",
     VAR_7->props[VAR_12].property);
   VAR_4->properties_count--;
  }
 }

 VAR_4->props = FUNC_7(VAR_4->properties_count, sizeof(*VAR_4->props),
         VAR_2);
 if (!VAR_4->props) {
  VAR_11 = -VAR_0;
  goto out_put_operation;
 }

 VAR_4->props_raw = FUNC_7(VAR_4->properties_count,
       sizeof(*VAR_4->props_raw), VAR_2);
 if (!VAR_4->props_raw) {
  VAR_11 = -VAR_0;
  goto out_put_operation;
 }


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_11 = FUNC_6(VAR_7->props[VAR_12].property, &VAR_10);
  if (VAR_11 < 0) {
   VAR_13++;
   continue;
  }
  VAR_4->props[VAR_12 - VAR_13].prop = VAR_10;
  VAR_4->props[VAR_12 - VAR_13].gb_prop = VAR_7->props[VAR_12].property;
  VAR_4->props_raw[VAR_12 - VAR_13] = VAR_10;
  if (VAR_7->props[VAR_12].is_writeable)
   VAR_4->props[VAR_12 - VAR_13].is_writeable = 1;
 }





 FUNC_0(VAR_4);

 VAR_11 = 0;
out_put_operation:
 FUNC_3(VAR_8);

 return VAR_11;
}
