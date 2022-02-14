
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct nd_region {struct device dev; } ;



struct device *FUNC_0(struct nd_region *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 return &VAR_0->dev;
}
