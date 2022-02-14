
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc_mem_entry {int va; int dma; } ;
struct TYPE_2__ {int parent; } ;
struct rproc {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rproc *VAR_0,
       struct rproc_mem_entry *VAR_1)
{
 FUNC_0(VAR_0->dev.parent, "unmap memory: %pa\n", &VAR_1->dma);
 FUNC_1(VAR_1->va);

 return 0;
}
