
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct cas {int page_size; int pdev; int page_order; } ;
typedef int gfp_t ;
struct TYPE_6__ {int buffer; int dma_addr; int list; } ;
typedef TYPE_1__ cas_page_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int const) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static cas_page_t *FUNC_6(struct cas *VAR_1, const gfp_t VAR_2)
{
 cas_page_t *VAR_3;

 VAR_3 = FUNC_4(sizeof(cas_page_t), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->list);
 FUNC_1(VAR_3, 0);
 VAR_3->buffer = FUNC_2(VAR_2, VAR_1->page_order);
 if (!VAR_3->buffer)
  goto page_err;
 VAR_3->dma_addr = FUNC_5(VAR_1->pdev, VAR_3->buffer, 0,
          VAR_1->page_size, VAR_0);
 return VAR_3;

page_err:
 FUNC_3(VAR_3);
 return ((void*)0);
}
