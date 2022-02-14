
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tool_mw {int * dbgfs_file; scalar_t__ size; scalar_t__ dma_base; int * mm_base; } ;
struct tool_ctx {TYPE_2__* ntb; TYPE_1__* peers; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct tool_mw* inmws; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_3(struct tool_ctx *VAR_0, int VAR_1, int VAR_2)
{
 struct tool_mw *VAR_3 = &VAR_0->peers[VAR_1].inmws[VAR_2];

 FUNC_0(VAR_3->dbgfs_file);

 if (VAR_3->mm_base != ((void*)0)) {
  FUNC_2(VAR_0->ntb, VAR_1, VAR_2);
  FUNC_1(&VAR_0->ntb->dev, VAR_3->size,
      VAR_3->mm_base, VAR_3->dma_base);
 }

 VAR_3->mm_base = ((void*)0);
 VAR_3->dma_base = 0;
 VAR_3->size = 0;
 VAR_3->dbgfs_file = ((void*)0);
}
