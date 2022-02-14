
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct neighbour {struct net_device* dev; } ;
struct device {int * driver; } ;
struct TYPE_4__ {int driver; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 int FUNC_2 (int ,struct neighbour*) ;
 struct net_device* FUNC_3 (struct net_device const*) ;

__attribute__((used)) static void FUNC_4(struct neighbour *VAR_1)
{
 const struct device *VAR_2;
 const struct net_device *VAR_3 = VAR_1->dev;

 if (FUNC_1(VAR_3))
  VAR_3 = FUNC_3(VAR_3);
 VAR_2 = VAR_3->dev.parent;
 if (VAR_2 && VAR_2->driver == &VAR_0.driver)
  FUNC_2(FUNC_0(VAR_2), VAR_1);
}
