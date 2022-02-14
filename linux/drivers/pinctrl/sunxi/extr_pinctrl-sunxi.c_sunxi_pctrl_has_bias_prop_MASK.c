
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_0)
{
 return FUNC_0(VAR_0, "bias-pull-up", ((void*)0)) ||
  FUNC_0(VAR_0, "bias-pull-down", ((void*)0)) ||
  FUNC_0(VAR_0, "bias-disable", ((void*)0)) ||
  FUNC_0(VAR_0, "allwinner,pull", ((void*)0));
}
