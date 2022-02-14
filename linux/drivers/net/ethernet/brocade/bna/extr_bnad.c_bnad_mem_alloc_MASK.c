
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnad {TYPE_1__* pcidev; } ;
struct bna_mem_info {int num; scalar_t__ len; scalar_t__ mem_type; TYPE_2__* mdl; } ;
struct bna_mem_descr {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ len; int * kva; int dma; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnad*,struct bna_mem_info*) ;
 int * FUNC_2 (int *,scalar_t__,int *,int ) ;
 TYPE_2__* FUNC_3 (int,int,int ) ;
 int * FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct bnad *VAR_3,
        struct bna_mem_info *VAR_4)
{
 int VAR_5;
 dma_addr_t VAR_6;

 if ((VAR_4->num == 0) || (VAR_4->len == 0)) {
  VAR_4->mdl = ((void*)0);
  return 0;
 }

 VAR_4->mdl = FUNC_3(VAR_4->num, sizeof(struct bna_mem_descr),
    VAR_2);
 if (VAR_4->mdl == ((void*)0))
  return -VAR_1;

 if (VAR_4->mem_type == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_4->num; VAR_5++) {
   VAR_4->mdl[VAR_5].len = VAR_4->len;
   VAR_4->mdl[VAR_5].kva =
    FUNC_2(&VAR_3->pcidev->dev,
         VAR_4->len, &VAR_6,
         VAR_2);
   if (VAR_4->mdl[VAR_5].kva == ((void*)0))
    goto err_return;

   FUNC_0(VAR_6,
      &(VAR_4->mdl[VAR_5].dma));
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_4->num; VAR_5++) {
   VAR_4->mdl[VAR_5].len = VAR_4->len;
   VAR_4->mdl[VAR_5].kva = FUNC_4(VAR_4->len,
       VAR_2);
   if (VAR_4->mdl[VAR_5].kva == ((void*)0))
    goto err_return;
  }
 }

 return 0;

err_return:
 FUNC_1(VAR_3, VAR_4);
 return -VAR_1;
}
