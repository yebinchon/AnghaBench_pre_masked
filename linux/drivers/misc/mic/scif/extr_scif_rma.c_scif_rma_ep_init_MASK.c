
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_endpt_rma_info {int markwq; int vma_list; int mmn_list; int * dma_chan; scalar_t__ async_list_del; int fence_refcount; int tcw_total_pages; int tcw_refcount; int tw_refcount; int remote_reg_list; int reg_list; int mmn_lock; int tc_lock; int iovad; int rma_lock; } ;
struct scif_endpt {struct scif_endpt_rma_info rma_info; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct scif_endpt *VAR_2)
{
 struct scif_endpt_rma_info *VAR_3 = &VAR_2->rma_info;

 FUNC_4(&VAR_3->rma_lock);
 FUNC_2(&VAR_3->iovad, VAR_0, VAR_1);
 FUNC_5(&VAR_3->tc_lock);
 FUNC_4(&VAR_3->mmn_lock);
 FUNC_0(&VAR_3->reg_list);
 FUNC_0(&VAR_3->remote_reg_list);
 FUNC_1(&VAR_3->tw_refcount, 0);
 FUNC_1(&VAR_3->tcw_refcount, 0);
 FUNC_1(&VAR_3->tcw_total_pages, 0);
 FUNC_1(&VAR_3->fence_refcount, 0);

 VAR_3->async_list_del = 0;
 VAR_3->dma_chan = ((void*)0);
 FUNC_0(&VAR_3->mmn_list);
 FUNC_0(&VAR_3->vma_list);
 FUNC_3(&VAR_3->markwq);
}
