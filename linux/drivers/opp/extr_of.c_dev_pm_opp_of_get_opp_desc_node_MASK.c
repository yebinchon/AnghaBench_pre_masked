
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;


 struct device_node* FUNC_0 (int ,int ) ;

struct device_node *FUNC_1(struct device *VAR_0)
{
 return FUNC_0(VAR_0->of_node, 0);
}
