
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct switchtec_ntb {void* doorbell_irq; void* message_irq; TYPE_3__* stdev; TYPE_2__* mmio_self_dbmsg; } ;
struct TYPE_6__ {int pdev; int dev; TYPE_1__* mmio_part_cfg; } ;
struct TYPE_5__ {int * idb_vec_map; } ;
struct TYPE_4__ {int vep_vector_number; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (void*,struct switchtec_ntb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (void*,int ,int ,char*,struct switchtec_ntb*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct switchtec_ntb *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8 = sizeof(VAR_2->mmio_self_dbmsg->idb_vec_map);

 VAR_7 = FUNC_2(&VAR_2->stdev->mmio_part_cfg->vep_vector_number);

 while (VAR_5 == VAR_7)
  VAR_5++;
 while (VAR_6 == VAR_5 ||
        VAR_6 == VAR_7)
  VAR_6++;

 FUNC_0(&VAR_2->stdev->dev, "irqs - event: %d, db: %d, msgs: %d\n",
  VAR_7, VAR_5, VAR_6);

 for (VAR_3 = 0; VAR_3 < VAR_8 - 4; VAR_3++)
  FUNC_3(VAR_5,
    &VAR_2->mmio_self_dbmsg->idb_vec_map[VAR_3]);

 for (; VAR_3 < VAR_8; VAR_3++)
  FUNC_3(VAR_6,
    &VAR_2->mmio_self_dbmsg->idb_vec_map[VAR_3]);

 VAR_2->doorbell_irq = FUNC_4(VAR_2->stdev->pdev, VAR_5);
 VAR_2->message_irq = FUNC_4(VAR_2->stdev->pdev, VAR_6);

 VAR_4 = FUNC_5(VAR_2->doorbell_irq,
    VAR_0, 0,
    "switchtec_ntb_doorbell", VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_2->message_irq,
    VAR_1, 0,
    "switchtec_ntb_message", VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2->doorbell_irq, VAR_2);
  return VAR_4;
 }

 return 0;
}
