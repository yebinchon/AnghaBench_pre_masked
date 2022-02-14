
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tool_ctx {int msg_wq; TYPE_1__* ntb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct tool_ctx *VAR_1 = VAR_0;
 u64 VAR_2;

 VAR_2 = FUNC_1(VAR_1->ntb);

 FUNC_0(&VAR_1->ntb->dev, "message bits %#llx\n", VAR_2);

 FUNC_2(&VAR_1->msg_wq);
}
