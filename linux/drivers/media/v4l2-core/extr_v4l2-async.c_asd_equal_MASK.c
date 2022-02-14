
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; int adapter_id; } ;
struct TYPE_4__ {int fwnode; TYPE_1__ i2c; int device_name; } ;
struct v4l2_async_subdev {int match_type; TYPE_2__ match; } ;





 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct v4l2_async_subdev *VAR_0,
        struct v4l2_async_subdev *VAR_1)
{
 if (VAR_0->match_type != VAR_1->match_type)
  return 0;

 switch (VAR_0->match_type) {
 case 130:
  return FUNC_0(VAR_0->match.device_name,
         VAR_1->match.device_name) == 0;
 case 128:
  return VAR_0->match.i2c.adapter_id ==
   VAR_1->match.i2c.adapter_id &&
   VAR_0->match.i2c.address ==
   VAR_1->match.i2c.address;
 case 129:
  return VAR_0->match.fwnode == VAR_1->match.fwnode;
 default:
  break;
 }

 return 0;
}
