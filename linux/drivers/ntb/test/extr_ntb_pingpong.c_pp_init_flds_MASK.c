
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pp_ctx {int pmask; int nmask; int in_db; TYPE_1__* ntb; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct pp_ctx *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;


 VAR_2 = FUNC_5(VAR_0->ntb);
 VAR_3 = FUNC_3(VAR_0->ntb);
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
  if (VAR_2 < FUNC_4(VAR_0->ntb, VAR_1))
   break;
 }

 VAR_0->in_db = FUNC_0(VAR_1);
 VAR_0->pmask = FUNC_1(VAR_1, 0) >> 1;
 VAR_0->nmask = FUNC_1(VAR_3 - 1, VAR_1);

 FUNC_2(&VAR_0->ntb->dev, "Inbound db %#llx, prev %#llx, next %#llx\n",
  VAR_0->in_db, VAR_0->pmask, VAR_0->nmask);
}
