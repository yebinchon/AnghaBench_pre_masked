
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int smp_req; int smp_resp; } ;
struct sas_task {int task_proto; int * lldd_task; TYPE_1__ smp_task; int data_dir; int * scatter; } ;
struct mvs_slot_info {int n_elem; int slot_tag; int * port; int * task; int entry; int * buf; int buf_dma; } ;
struct mvs_info {int dma_pool; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mvs_info*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mvs_info *VAR_2, struct sas_task *VAR_3,
     struct mvs_slot_info *VAR_4, u32 VAR_5)
{
 if (!VAR_4)
  return;
 if (!VAR_4->task)
  return;
 if (!FUNC_4(VAR_3->task_proto))
  if (VAR_4->n_elem)
   FUNC_1(VAR_2->dev, VAR_3->scatter,
         VAR_4->n_elem, VAR_3->data_dir);

 switch (VAR_3->task_proto) {
 case 130:
  FUNC_1(VAR_2->dev, &VAR_3->smp_task.smp_resp, 1,
        VAR_0);
  FUNC_1(VAR_2->dev, &VAR_3->smp_task.smp_req, 1,
        VAR_1);
  break;

 case 131:
 case 128:
 case 129:
 default:

  break;
 }

 if (VAR_4->buf) {
  FUNC_0(VAR_2->dma_pool, VAR_4->buf, VAR_4->buf_dma);
  VAR_4->buf = ((void*)0);
 }
 FUNC_2(&VAR_4->entry);
 VAR_3->lldd_task = ((void*)0);
 VAR_4->task = ((void*)0);
 VAR_4->port = ((void*)0);
 VAR_4->slot_tag = 0xFFFFFFFF;
 FUNC_3(VAR_2, VAR_5);
}
