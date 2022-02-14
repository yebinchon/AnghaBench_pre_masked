
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {int tuning; int stc; TYPE_1__* client; int command; int cts; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct si476x_core*) ;
 int FUNC_4 (struct si476x_core*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct si476x_core *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(&VAR_3->client->dev, "Failed to get status\n");
  return;
 }

 if (VAR_4 & VAR_0) {






  FUNC_1(&VAR_3->client->dev, "[interrupt] CTSINT\n");
  FUNC_0(&VAR_3->cts, 1);
  FUNC_5(&VAR_3->command);
 }

 if (VAR_4 & VAR_1) {
  FUNC_1(&VAR_3->client->dev, "[interrupt] RDSINT\n");
  FUNC_4(VAR_3);
 }

 if (VAR_4 & VAR_2) {
  FUNC_1(&VAR_3->client->dev, "[interrupt] STCINT\n");
  FUNC_0(&VAR_3->stc, 1);
  FUNC_5(&VAR_3->tuning);
 }
}
