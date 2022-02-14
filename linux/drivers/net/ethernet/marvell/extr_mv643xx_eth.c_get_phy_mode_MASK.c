
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv643xx_eth_private {TYPE_2__* dev; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mv643xx_eth_private *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev->dev.parent;
 int VAR_3 = -1;

 if (VAR_2->of_node)
  VAR_3 = FUNC_0(VAR_2->of_node);




 if (VAR_3 < 0)
  VAR_3 = VAR_0;
 return VAR_3;
}
