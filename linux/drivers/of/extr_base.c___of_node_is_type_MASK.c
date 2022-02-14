
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 char* FUNC_0 (struct device_node const*,char*,int *) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const struct device_node *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0, "device_type", ((void*)0));

 return VAR_0 && VAR_2 && VAR_1 && !FUNC_1(VAR_2, VAR_1);
}
