
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;

bool FUNC_4(struct device_node *VAR_0)
{
 struct device_node *VAR_1 = FUNC_1(VAR_0);

 while (VAR_1) {
  if (FUNC_3(VAR_1, "dma-coherent")) {
   FUNC_2(VAR_1);
   return 1;
  }
  VAR_1 = FUNC_0(VAR_1);
 }
 FUNC_2(VAR_1);
 return 0;
}
