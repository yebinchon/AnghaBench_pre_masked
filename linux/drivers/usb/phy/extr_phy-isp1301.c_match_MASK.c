
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int * driver; struct device_node const* of_node; } ;
struct TYPE_2__ {int driver; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_1, const void *VAR_2)
{
 const struct device_node *VAR_3 = (const struct device_node *)VAR_2;
 return (VAR_1->of_node == VAR_3) &&
  (VAR_1->driver == &VAR_0.driver);
}
