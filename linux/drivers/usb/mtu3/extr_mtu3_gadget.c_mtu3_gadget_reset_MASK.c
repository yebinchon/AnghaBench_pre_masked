
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ speed; } ;
struct mtu3 {TYPE_1__ g; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtu3*) ;
 int FUNC_2 (struct mtu3*) ;

void FUNC_3(struct mtu3 *VAR_1)
{
 FUNC_0(VAR_1->dev, "gadget RESET\n");


 if (VAR_1->g.speed != VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);
}
