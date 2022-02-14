
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhine_private {int quirks; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct rhine_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (long,struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, long VAR_2)
{
 struct rhine_private *VAR_3 = FUNC_2(VAR_1);


 FUNC_3(VAR_1);


 if (VAR_3->quirks & VAR_0)
  FUNC_1(5);


 if (FUNC_0(VAR_1->dev.parent))
  FUNC_4(VAR_2, VAR_1);
}
