
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct pp_ctx {int lock; int in_db; TYPE_1__* ntb; int out_db; int out_pidx; int count; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pp_ctx *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(&VAR_0->count);

 FUNC_7(&VAR_0->lock);
 FUNC_6(VAR_0->ntb, VAR_0->out_pidx, 0, VAR_1);
 FUNC_4(VAR_0->ntb, VAR_0->out_pidx, 0, VAR_1);

 FUNC_1(&VAR_0->ntb->dev, "Ping port %d spad %#x, msg %#x\n",
  FUNC_5(VAR_0->ntb, VAR_0->out_pidx), VAR_1, VAR_1);

 FUNC_3(VAR_0->ntb, VAR_0->out_db);
 FUNC_2(VAR_0->ntb, VAR_0->in_db);
 FUNC_8(&VAR_0->lock);
}
