
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,int,struct resource*) ;

int FUNC_1(struct device_node *VAR_0, struct resource *VAR_1,
  int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++)
  if (FUNC_0(VAR_0, VAR_3, VAR_1) <= 0)
   break;

 return VAR_3;
}
