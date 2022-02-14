
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct pp_ctx {int timer; int in_db; TYPE_1__* ntb; int count; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_10(struct pp_ctx *VAR_2)
{
 u32 VAR_3 = -1, VAR_4 = -1;
 int VAR_5 = 0;


 VAR_4 = FUNC_9(VAR_2->ntb, 0);
 VAR_3 = FUNC_7(VAR_2->ntb, &VAR_5, 0);
 FUNC_6(VAR_2->ntb, -1);






 FUNC_1(&VAR_2->ntb->dev, "Pong spad %#x, msg %#x (port %d)\n",
  VAR_4, VAR_3, FUNC_8(VAR_2->ntb, VAR_5));

 FUNC_0(&VAR_2->count);

 FUNC_5(VAR_2->ntb, VAR_2->in_db);
 FUNC_4(VAR_2->ntb, VAR_2->in_db);

 FUNC_2(&VAR_2->timer, FUNC_3(VAR_1), VAR_0);
}
