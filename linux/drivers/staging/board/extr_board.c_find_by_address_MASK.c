
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct resource {scalar_t__ start; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static bool FUNC_3(u64 VAR_0)
{
 struct device_node *VAR_1 = FUNC_1(((void*)0));
 struct resource VAR_2;

 while (VAR_1) {
  if (!FUNC_0(VAR_1, 0, &VAR_2)) {
   if (VAR_2.start == VAR_0) {
    FUNC_2(VAR_1);
    return 1;
   }
  }
  VAR_1 = FUNC_1(VAR_1);
 }

 return 0;
}
