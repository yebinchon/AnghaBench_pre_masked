
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int stds; int list_node; struct whc* whc; int qset_dma; } ;
struct whc {int qset_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 struct whc_qset* FUNC_1 (int ,int ,int *) ;

struct whc_qset *FUNC_2(struct whc *VAR_0, gfp_t VAR_1)
{
 struct whc_qset *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_1(VAR_0->qset_pool, VAR_1, &VAR_3);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->qset_dma = VAR_3;
 VAR_2->whc = VAR_0;

 FUNC_0(&VAR_2->list_node);
 FUNC_0(&VAR_2->stds);

 return VAR_2;
}
