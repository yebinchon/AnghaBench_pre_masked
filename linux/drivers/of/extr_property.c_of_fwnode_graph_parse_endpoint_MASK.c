
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct fwnode_endpoint {int id; int port; struct fwnode_handle const* local_fwnode; } ;
typedef struct device_node const device_node ;


 struct device_node const* FUNC_0 (struct device_node const*) ;
 int FUNC_1 (struct device_node const*) ;
 int FUNC_2 (struct device_node const*,char*,int *) ;
 struct device_node const* FUNC_3 (struct fwnode_handle const*) ;

__attribute__((used)) static int FUNC_4(const struct fwnode_handle *VAR_0,
       struct fwnode_endpoint *VAR_1)
{
 const struct device_node *VAR_2 = FUNC_3(VAR_0);
 struct device_node *VAR_3 = FUNC_0(VAR_2);

 VAR_1->local_fwnode = VAR_0;

 FUNC_2(VAR_3, "reg", &VAR_1->port);
 FUNC_2(VAR_2, "reg", &VAR_1->id);

 FUNC_1(VAR_3);

 return 0;
}
