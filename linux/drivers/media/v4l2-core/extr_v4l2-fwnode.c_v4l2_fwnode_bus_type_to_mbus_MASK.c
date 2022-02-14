
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_bus_conv {int mbus_type; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;
typedef enum v4l2_fwnode_bus_type { ____Placeholder_v4l2_fwnode_bus_type } v4l2_fwnode_bus_type ;


 int VAR_0 ;
 struct v4l2_fwnode_bus_conv* FUNC_0 (int) ;

__attribute__((used)) static enum v4l2_mbus_type
FUNC_1(enum v4l2_fwnode_bus_type VAR_1)
{
 const struct v4l2_fwnode_bus_conv *VAR_2 =
  FUNC_0(VAR_1);

 return VAR_2 ? VAR_2->mbus_type : VAR_0;
}
