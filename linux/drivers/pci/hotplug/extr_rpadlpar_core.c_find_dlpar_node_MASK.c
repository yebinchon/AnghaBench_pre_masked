
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (char*,char*) ;
 struct device_node* FUNC_1 (char*) ;

__attribute__((used)) static struct device_node *FUNC_2(char *VAR_3, int *VAR_4)
{
 struct device_node *VAR_5;

 VAR_5 = FUNC_0(VAR_3, "SLOT");
 if (VAR_5) {
  *VAR_4 = VAR_1;
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_3, "PHB");
 if (VAR_5) {
  *VAR_4 = VAR_0;
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  *VAR_4 = VAR_2;
  return VAR_5;
 }

 return ((void*)0);
}
