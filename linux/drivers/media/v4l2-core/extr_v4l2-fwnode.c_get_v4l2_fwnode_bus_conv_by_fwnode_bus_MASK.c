
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_bus_conv {int fwnode_bus_type; } ;
typedef enum v4l2_fwnode_bus_type { ____Placeholder_v4l2_fwnode_bus_type } v4l2_fwnode_bus_type ;


 unsigned int FUNC_0 (struct v4l2_fwnode_bus_conv const*) ;
 struct v4l2_fwnode_bus_conv const* VAR_0 ;

__attribute__((used)) static const struct v4l2_fwnode_bus_conv *
FUNC_1(enum v4l2_fwnode_bus_type VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].fwnode_bus_type == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
