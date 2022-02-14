
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; scalar_t__ sg_supported; int speed; int max_speed; int * ops; } ;
struct mtu3 {int delayed_status; int dev; TYPE_1__ g; scalar_t__ is_active; int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtu3*) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;

int FUNC_3(struct mtu3 *VAR_3)
{
 int VAR_4;

 VAR_3->g.ops = &VAR_2;
 VAR_3->g.max_speed = VAR_3->max_speed;
 VAR_3->g.speed = VAR_1;
 VAR_3->g.sg_supported = 0;
 VAR_3->g.name = VAR_0;
 VAR_3->is_active = 0;
 VAR_3->delayed_status = 0;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3->dev, &VAR_3->g);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "failed to register udc\n");

 return VAR_4;
}
