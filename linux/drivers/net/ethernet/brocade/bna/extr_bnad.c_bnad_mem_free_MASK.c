
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnad {TYPE_1__* pcidev; } ;
struct bna_mem_info {int num; scalar_t__ mem_type; TYPE_2__* mdl; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {struct TYPE_5__* kva; int len; int dma; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct bnad *VAR_1,
       struct bna_mem_info *VAR_2)
{
 int VAR_3;
 dma_addr_t VAR_4;

 if (VAR_2->mdl == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  if (VAR_2->mdl[VAR_3].kva != ((void*)0)) {
   if (VAR_2->mem_type == VAR_0) {
    FUNC_0(&(VAR_2->mdl[VAR_3].dma),
      VAR_4);
    FUNC_1(&VAR_1->pcidev->dev,
        VAR_2->mdl[VAR_3].len,
        VAR_2->mdl[VAR_3].kva, VAR_4);
   } else
    FUNC_2(VAR_2->mdl[VAR_3].kva);
  }
 }
 FUNC_2(VAR_2->mdl);
 VAR_2->mdl = ((void*)0);
}
