
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_vde_cache_entry {int list; TYPE_2__* a; int dma_dir; int sgt; int iova; TYPE_1__* vde; int refcnt; } ;
struct dma_buf {int dummy; } ;
struct TYPE_5__ {struct dma_buf* dmabuf; } ;
struct TYPE_4__ {scalar_t__ domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_buf*,TYPE_2__*) ;
 int FUNC_2 (struct dma_buf*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (struct tegra_vde_cache_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(struct tegra_vde_cache_entry *VAR_0)
{
 struct dma_buf *VAR_1 = VAR_0->a->dmabuf;

 FUNC_0(VAR_0->refcnt);

 if (VAR_0->vde->domain)
  FUNC_6(VAR_0->vde, VAR_0->iova);

 FUNC_3(VAR_0->a, VAR_0->sgt, VAR_0->dma_dir);
 FUNC_1(VAR_1, VAR_0->a);
 FUNC_2(VAR_1);

 FUNC_5(&VAR_0->list);
 FUNC_4(VAR_0);
}
