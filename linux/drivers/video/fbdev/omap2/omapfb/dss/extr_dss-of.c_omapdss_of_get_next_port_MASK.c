
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node const*,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;

struct device_node *
FUNC_5(const struct device_node *VAR_0,
    struct device_node *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);

 if (!VAR_1) {
  struct device_node *VAR_3;




  VAR_3 = FUNC_0(VAR_0, "ports");
  if (VAR_3)
   VAR_0 = VAR_3;

  VAR_2 = FUNC_0(VAR_0, "port");


  FUNC_4(VAR_3);
 } else {
  struct device_node *VAR_4;

  VAR_4 = FUNC_2(VAR_1);
  if (!VAR_4)
   return ((void*)0);

  do {
   VAR_2 = FUNC_1(VAR_4, VAR_1);
   if (!VAR_2) {
    FUNC_4(VAR_4);
    return ((void*)0);
   }
   VAR_1 = VAR_2;
  } while (!FUNC_3(VAR_2, "port"));

  FUNC_4(VAR_4);
 }

 return VAR_2;
}
