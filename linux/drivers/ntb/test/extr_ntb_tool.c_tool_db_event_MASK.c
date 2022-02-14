
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tool_ctx {int db_wq; TYPE_1__* ntb; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, int VAR_1)
{
 struct tool_ctx *VAR_2 = VAR_0;
 u64 VAR_3, VAR_4;

 VAR_4 = FUNC_2(VAR_2->ntb, VAR_1);
 VAR_3 = FUNC_1(VAR_2->ntb);

 FUNC_0(&VAR_2->ntb->dev, "doorbell vec %d mask %#llx bits %#llx\n",
  VAR_1, VAR_4, VAR_3);

 FUNC_3(&VAR_2->db_wq);
}
