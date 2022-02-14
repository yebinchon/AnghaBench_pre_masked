
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {TYPE_1__* of_node; scalar_t__ dev; } ;
struct TYPE_2__ {char const* full_name; } ;


 char const* FUNC_0 (scalar_t__) ;

__attribute__((used)) static const char *FUNC_1(struct reset_controller_dev *VAR_0)
{
 if (VAR_0->dev)
  return FUNC_0(VAR_0->dev);

 if (VAR_0->of_node)
  return VAR_0->of_node->full_name;

 return ((void*)0);
}
