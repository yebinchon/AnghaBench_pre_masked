
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int*) ;

int FUNC_1(struct device_node *VAR_1)
{
 u32 VAR_2;

 do {
  if (VAR_1->parent)
   VAR_1 = VAR_1->parent;
  if (!FUNC_0(VAR_1, "#size-cells", &VAR_2))
   return VAR_2;
 } while (VAR_1->parent);

 return VAR_0;
}
