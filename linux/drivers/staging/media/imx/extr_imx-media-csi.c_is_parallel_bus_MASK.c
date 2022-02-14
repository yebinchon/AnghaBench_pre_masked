
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {scalar_t__ bus_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct v4l2_fwnode_endpoint *VAR_1)
{
 return VAR_1->bus_type != VAR_0;
}
