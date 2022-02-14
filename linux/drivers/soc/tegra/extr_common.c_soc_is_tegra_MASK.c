
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 struct of_device_id* FUNC_1 (int ,struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int VAR_0 ;

bool FUNC_3(void)
{
 const struct of_device_id *VAR_1;
 struct device_node *VAR_2;

 VAR_2 = FUNC_0("/");
 if (!VAR_2)
  return 0;

 VAR_1 = FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_2);

 return VAR_1 != ((void*)0);
}
