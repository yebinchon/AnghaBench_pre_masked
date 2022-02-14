
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpdma_desc_pool {int phys; scalar_t__ cpumap; int mem_size; int gen_pool; } ;
struct cpdma_ctlr {int dev; struct cpdma_desc_pool* pool; } ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cpdma_ctlr *VAR_0)
{
 struct cpdma_desc_pool *VAR_1 = VAR_0->pool;

 if (!VAR_1)
  return;

 FUNC_0(FUNC_3(VAR_1->gen_pool) != FUNC_2(VAR_1->gen_pool),
      "cpdma_desc_pool size %zd != avail %zd",
      FUNC_3(VAR_1->gen_pool),
      FUNC_2(VAR_1->gen_pool));
 if (VAR_1->cpumap)
  FUNC_1(VAR_0->dev, VAR_1->mem_size, VAR_1->cpumap,
      VAR_1->phys);
}
