
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0)
{
 if (VAR_0->of_node)
  return FUNC_0(VAR_0->of_node);

 return FUNC_1(VAR_0);
}
