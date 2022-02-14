
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct TYPE_2__ {int (* port_leave ) (struct team*,struct team_port*) ;} ;
struct team {int dev; TYPE_1__ ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct team*,struct team_port*) ;

__attribute__((used)) static void FUNC_2(struct team *VAR_0, struct team_port *VAR_1)
{
 if (VAR_0->ops.port_leave)
  VAR_0->ops.port_leave(VAR_0, VAR_1);
 FUNC_0(VAR_0->dev);
}
