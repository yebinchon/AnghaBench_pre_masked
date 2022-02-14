
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;


 struct fwnode_handle* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct fwnode_handle*) ;

__attribute__((used)) static struct fwnode_handle *
FUNC_5(struct fwnode_handle *VAR_0)
{
 struct device_node *VAR_1;


 VAR_1 = FUNC_2(FUNC_4(VAR_0));
 if (!VAR_1)
  return ((void*)0);


 if (!FUNC_3(VAR_1, "ports"))
  return FUNC_0(VAR_1);

 return FUNC_0(FUNC_1(VAR_1));
}
