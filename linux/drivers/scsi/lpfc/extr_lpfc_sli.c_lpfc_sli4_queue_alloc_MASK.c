
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_queue {int page_count; void** q_pgs; int entry_cnt_per_pg; int entry_size; int entry_count; int page_size; int sched_spwork; int sched_irqwork; int spwork; int irqwork; int page_list; struct lpfc_hba* phba; int cpu_list; int child_list; int wqfull_list; int wq_list; int list; } ;
struct TYPE_4__ {int if_page_sz; int wqpcnt; int supported; } ;
struct TYPE_5__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {TYPE_3__* pcidev; TYPE_2__ sli4_hba; } ;
struct lpfc_dmabuf {void* virt; int buffer_tag; int list; int phys; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int,int *,int ) ;
 int FUNC_7 (struct lpfc_dmabuf*) ;
 void* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct lpfc_queue*) ;
 int VAR_4 ;

struct lpfc_queue *
FUNC_11(struct lpfc_hba *VAR_5, uint32_t VAR_6,
        uint32_t VAR_7, uint32_t VAR_8, int VAR_9)
{
 struct lpfc_queue *VAR_10;
 struct lpfc_dmabuf *VAR_11;
 uint32_t VAR_12 = VAR_5->sli4_hba.pc_sli4_params.if_page_sz;
 uint16_t VAR_13, VAR_14;

 if (!VAR_5->sli4_hba.pc_sli4_params.supported)
  VAR_12 = VAR_6;

 VAR_14 = FUNC_0(VAR_7 * VAR_8, VAR_12) / VAR_12;


 if (VAR_14 > VAR_5->sli4_hba.pc_sli4_params.wqpcnt)
  VAR_14 = VAR_5->sli4_hba.pc_sli4_params.wqpcnt;

 VAR_10 = FUNC_8(sizeof(*VAR_10) + (sizeof(void *) * VAR_14),
        VAR_0, FUNC_4(VAR_9));
 if (!VAR_10)
  return ((void*)0);

 FUNC_2(&VAR_10->list);
 FUNC_2(&VAR_10->wq_list);
 FUNC_2(&VAR_10->wqfull_list);
 FUNC_2(&VAR_10->page_list);
 FUNC_2(&VAR_10->child_list);
 FUNC_2(&VAR_10->cpu_list);




 VAR_10->page_count = VAR_14;
 VAR_10->q_pgs = (void **)&VAR_10[1];
 VAR_10->entry_cnt_per_pg = VAR_12 / VAR_7;
 VAR_10->entry_size = VAR_7;
 VAR_10->entry_count = VAR_8;
 VAR_10->page_size = VAR_12;
 VAR_10->phba = VAR_5;

 for (VAR_13 = 0; VAR_13 < VAR_10->page_count; VAR_13++) {
  VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_0,
          FUNC_5(&VAR_5->pcidev->dev));
  if (!VAR_11)
   goto out_fail;
  VAR_11->virt = FUNC_6(&VAR_5->pcidev->dev,
        VAR_12, &VAR_11->phys,
        VAR_0);
  if (!VAR_11->virt) {
   FUNC_7(VAR_11);
   goto out_fail;
  }
  VAR_11->buffer_tag = VAR_13;
  FUNC_9(&VAR_11->list, &VAR_10->page_list);

  VAR_10->q_pgs[VAR_13] = VAR_11->virt;
 }
 FUNC_3(&VAR_10->irqwork, VAR_3);
 FUNC_3(&VAR_10->spwork, VAR_4);
 FUNC_1(&VAR_10->sched_irqwork, VAR_1);
 FUNC_1(&VAR_10->sched_spwork, VAR_2);



 return VAR_10;
out_fail:
 FUNC_10(VAR_10);
 return ((void*)0);
}
