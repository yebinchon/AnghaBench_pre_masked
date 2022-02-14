
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static const char *FUNC_1(struct device_node *VAR_0,
           int *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, "pins");
 if (VAR_2 > 0) {
  *VAR_1 = VAR_2;
  return "pins";
 }


 VAR_2 = FUNC_0(VAR_0, "allwinner,pins");
 if (VAR_2 > 0) {
  *VAR_1 = VAR_2;
  return "allwinner,pins";
 }

 return ((void*)0);
}
