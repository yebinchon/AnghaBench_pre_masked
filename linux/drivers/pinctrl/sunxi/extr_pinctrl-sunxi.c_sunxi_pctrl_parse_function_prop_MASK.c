
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,char const**) ;

__attribute__((used)) static const char *FUNC_1(struct device_node *VAR_0)
{
 const char *VAR_1;
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, "function", &VAR_1);
 if (!VAR_2)
  return VAR_1;


 VAR_2 = FUNC_0(VAR_0, "allwinner,function", &VAR_1);
 if (!VAR_2)
  return VAR_1;

 return ((void*)0);
}
