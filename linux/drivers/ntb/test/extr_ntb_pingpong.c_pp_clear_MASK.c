
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_ctx {TYPE_1__* ntb; int in_db; int timer; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct pp_ctx *VAR_0)
{
 FUNC_1(&VAR_0->timer);

 FUNC_2(VAR_0->ntb, VAR_0->in_db);

 FUNC_0(&VAR_0->ntb->dev, "Ping-pong cancelled\n");
}
