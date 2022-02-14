
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct charger_desc {int dummy; } ;


 struct charger_desc* FUNC_0 (TYPE_1__*) ;
 struct charger_desc* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline struct charger_desc *FUNC_2(struct platform_device *VAR_0)
{
 if (VAR_0->dev.of_node)
  return FUNC_1(&VAR_0->dev);
 return FUNC_0(&VAR_0->dev);
}
