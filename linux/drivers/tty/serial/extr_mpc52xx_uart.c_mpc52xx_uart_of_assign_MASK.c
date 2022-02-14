
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node** VAR_1 ;
 int FUNC_0 (struct device_node*) ;

__attribute__((used)) static void
FUNC_1(struct device_node *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] == ((void*)0)) {
   FUNC_0(VAR_2);
   VAR_1[VAR_3] = VAR_2;
   return;
  }
 }
}
