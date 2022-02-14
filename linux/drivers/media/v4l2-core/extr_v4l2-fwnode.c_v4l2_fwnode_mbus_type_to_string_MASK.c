
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_bus_conv {char const* name; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;


 struct v4l2_fwnode_bus_conv* FUNC_0 (int) ;

__attribute__((used)) static const char *
FUNC_1(enum v4l2_mbus_type VAR_0)
{
 const struct v4l2_fwnode_bus_conv *VAR_1 =
  FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->name : "not found";
}
