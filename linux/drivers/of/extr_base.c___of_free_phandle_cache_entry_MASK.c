
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {size_t phandle; } ;
typedef size_t phandle ;


 int FUNC_0 (struct device_node*) ;
 struct device_node** VAR_0 ;
 size_t VAR_1 ;

void FUNC_1(phandle VAR_2)
{
 phandle VAR_3;
 struct device_node *VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2 & VAR_1;

 if (VAR_0) {
  VAR_4 = VAR_0[VAR_3];
  if (VAR_4 && VAR_2 == VAR_4->phandle) {
   FUNC_0(VAR_4);
   VAR_0[VAR_3] = ((void*)0);
  }
 }
}
