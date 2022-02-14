
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char const*) ;
 struct device_node* FUNC_1 (char*) ;
 int FUNC_2 (struct device_node*) ;

int FUNC_3(const char *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_1("/");
 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  FUNC_2(VAR_1);
 }
 return VAR_2;
}
