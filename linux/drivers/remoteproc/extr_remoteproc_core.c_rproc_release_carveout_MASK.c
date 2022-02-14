
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_mem_entry {int dma; int va; int len; } ;
struct device {int parent; } ;
struct rproc {struct device dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_0,
      struct rproc_mem_entry *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev;


 FUNC_0(VAR_2->parent, VAR_1->len, VAR_1->va, VAR_1->dma);
 return 0;
}
