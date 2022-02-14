
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct team_port {TYPE_1__* dev; } ;
struct TYPE_5__ {int u32_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; } ;
struct team {int lock; } ;
struct TYPE_6__ {int active_port; } ;
struct TYPE_4__ {int ifindex; } ;


 TYPE_3__* FUNC_0 (struct team*) ;
 int FUNC_1 (int *) ;
 struct team_port* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct team_port *VAR_2;

 VAR_2 = FUNC_2(FUNC_0(VAR_0)->active_port,
      FUNC_1(&VAR_0->lock));
 if (VAR_2)
  VAR_1->data.u32_val = VAR_2->dev->ifindex;
 else
  VAR_1->data.u32_val = 0;
 return 0;
}
