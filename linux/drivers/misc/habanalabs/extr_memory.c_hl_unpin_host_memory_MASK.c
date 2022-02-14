
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct hl_userptr {TYPE_2__* sgt; int job_node; int vec; int dir; scalar_t__ dma_mapped; } ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct TYPE_5__ {int nents; int sgl; } ;
struct TYPE_4__ {int (* hl_dma_unmap_sg ) (struct hl_device*,int ,int ,int ) ;} ;


 int FUNC_0 (struct page**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct page** FUNC_3 (int ) ;
 int FUNC_4 (struct hl_device*,struct hl_userptr*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct hl_device*,int ,int ,int ) ;

int FUNC_11(struct hl_device *VAR_0, struct hl_userptr *VAR_1)
{
 struct page **VAR_2;

 FUNC_4(VAR_0, VAR_1);

 if (VAR_1->dma_mapped)
  VAR_0->asic_funcs->hl_dma_unmap_sg(VAR_0,
    VAR_1->sgt->sgl,
    VAR_1->sgt->nents,
    VAR_1->dir);

 VAR_2 = FUNC_3(VAR_1->vec);
 if (!FUNC_0(VAR_2)) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1->vec); VAR_3++)
   FUNC_8(VAR_2[VAR_3]);
 }
 FUNC_7(VAR_1->vec);
 FUNC_2(VAR_1->vec);

 FUNC_6(&VAR_1->job_node);

 FUNC_9(VAR_1->sgt);
 FUNC_5(VAR_1->sgt);

 return 0;
}
