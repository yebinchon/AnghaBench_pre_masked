
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {int outmw_cnt; int peer_cnt; TYPE_1__* peers; } ;
struct TYPE_2__ {int inmw_cnt; } ;


 int FUNC_0 (struct tool_ctx*,int,int) ;
 int FUNC_1 (struct tool_ctx*,int) ;

__attribute__((used)) static void FUNC_2(struct tool_ctx *VAR_0)
{
 int VAR_1, VAR_2;


 for (VAR_1 = 0; VAR_1 < VAR_0->outmw_cnt; VAR_1++)
  FUNC_1(VAR_0, VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_0->peer_cnt; VAR_2++)
  for (VAR_1 = 0; VAR_1 < VAR_0->peers[VAR_2].inmw_cnt; VAR_1++)
   FUNC_0(VAR_0, VAR_2, VAR_1);
}
