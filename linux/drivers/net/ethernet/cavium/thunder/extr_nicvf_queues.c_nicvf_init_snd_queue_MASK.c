
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int base; } ;
struct snd_queue {int xdp_free_cnt; int is_xdp; int tso_hdrs; int tso_hdrs_phys; int free_cnt; scalar_t__ xdp_desc_cnt; int * xdp_page; int thresh; scalar_t__ tail; scalar_t__ head; void* skbuff; TYPE_3__ dmem; int desc; } ;
struct nicvf {int sqs_id; TYPE_2__* pdev; TYPE_1__* pnicvf; scalar_t__ sqs_mode; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int xdp_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int ) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct nicvf*,TYPE_3__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nicvf *VAR_7,
    struct snd_queue *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7, &VAR_8->dmem, VAR_9, VAR_4,
         VAR_3);
 if (VAR_11)
  return VAR_11;

 VAR_8->desc = VAR_8->dmem.base;
 VAR_8->skbuff = FUNC_2(VAR_9, sizeof(u64), VAR_1);
 if (!VAR_8->skbuff)
  return -VAR_0;

 VAR_8->head = 0;
 VAR_8->tail = 0;
 VAR_8->thresh = VAR_5;


 if (VAR_7->sqs_mode)
  VAR_10 += ((VAR_7->sqs_id + 1) * VAR_2);
 if (VAR_10 < VAR_7->pnicvf->xdp_tx_queues) {

  VAR_8->xdp_page = FUNC_2(VAR_9, sizeof(u64), VAR_1);
  if (!VAR_8->xdp_page)
   return -VAR_0;
  VAR_8->xdp_desc_cnt = 0;
  VAR_8->xdp_free_cnt = VAR_9 - 1;
  VAR_8->is_xdp = 1;
 } else {
  VAR_8->xdp_page = ((void*)0);
  VAR_8->xdp_desc_cnt = 0;
  VAR_8->xdp_free_cnt = 0;
  VAR_8->is_xdp = 0;

  FUNC_0(&VAR_8->free_cnt, VAR_9 - 1);


  VAR_8->tso_hdrs = FUNC_1(&VAR_7->pdev->dev,
        VAR_9 * VAR_6,
        &VAR_8->tso_hdrs_phys,
        VAR_1);
  if (!VAR_8->tso_hdrs)
   return -VAR_0;
 }

 return 0;
}
