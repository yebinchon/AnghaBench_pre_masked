
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 void* FUNC_0 (struct device_node*,char*) ;
 void const* FUNC_1 (struct device_node*) ;

const void *FUNC_2(struct device_node *VAR_0)
{
 const void *VAR_1;

 VAR_1 = FUNC_0(VAR_0, "mac-address");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, "local-mac-address");
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, "address");
 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_0);
}
