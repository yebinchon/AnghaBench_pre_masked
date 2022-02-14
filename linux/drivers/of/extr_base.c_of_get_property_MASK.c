
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {void const* value; } ;
struct device_node {int dummy; } ;


 struct property* FUNC_0 (struct device_node const*,char const*,int*) ;

const void *FUNC_1(const struct device_node *VAR_0, const char *VAR_1,
       int *VAR_2)
{
 struct property *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 return VAR_3 ? VAR_3->value : ((void*)0);
}
