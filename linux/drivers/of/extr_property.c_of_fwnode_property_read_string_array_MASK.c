
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node const*,char const*) ;
 int FUNC_1 (struct device_node const*,char const*,char const**,size_t) ;
 struct device_node* FUNC_2 (struct fwnode_handle const*) ;

__attribute__((used)) static int
FUNC_3(const struct fwnode_handle *VAR_0,
         const char *VAR_1, const char **VAR_2,
         size_t VAR_3)
{
 const struct device_node *VAR_4 = FUNC_2(VAR_0);

 return VAR_2 ?
  FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3) :
  FUNC_0(VAR_4, VAR_1);
}
