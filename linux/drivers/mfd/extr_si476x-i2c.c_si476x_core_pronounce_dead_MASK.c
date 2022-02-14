
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {int tuning; int stc; int command; int cts; int rds_read_queue; int is_alive; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct si476x_core *VAR_0)
{
 FUNC_1(&VAR_0->client->dev, "Core device is dead.\n");

 FUNC_0(&VAR_0->is_alive, 0);


 FUNC_3(&VAR_0->rds_read_queue);

 FUNC_0(&VAR_0->cts, 1);
 FUNC_2(&VAR_0->command);

 FUNC_0(&VAR_0->stc, 1);
 FUNC_2(&VAR_0->tuning);
}
