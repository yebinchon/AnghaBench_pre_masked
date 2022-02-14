
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_mw {int pidx; int * dbgfs_file; scalar_t__ size; scalar_t__ tr_base; int * io_base; } ;
struct tool_ctx {int ntb; struct tool_mw* outmws; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct tool_ctx *VAR_0, int VAR_1)
{
 struct tool_mw *VAR_2 = &VAR_0->outmws[VAR_1];

 FUNC_0(VAR_2->dbgfs_file);

 if (VAR_2->io_base != ((void*)0)) {
  FUNC_1(VAR_0->outmws[VAR_1].io_base);
  FUNC_2(VAR_0->ntb, VAR_2->pidx, VAR_1);
 }

 VAR_2->io_base = ((void*)0);
 VAR_2->tr_base = 0;
 VAR_2->size = 0;
 VAR_2->pidx = -1;
 VAR_2->dbgfs_file = ((void*)0);
}
