
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {int bus_type; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1)
{
 struct v4l2_fwnode_endpoint VAR_2 = { .bus_type = 0 };
 struct device_node *VAR_3;

 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, ((void*)0));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(FUNC_0(VAR_3), &VAR_2);

 FUNC_2(VAR_3);
 return VAR_4;
}
