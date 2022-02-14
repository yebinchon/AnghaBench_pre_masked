
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct ipr_sata_port {TYPE_3__ ioasa; } ;
struct ipr_cmnd {TYPE_1__* hrrq; int queue; scalar_t__ eh_comp; struct ata_queued_cmd* qc; } ;
struct ata_queued_cmd {int err_mask; TYPE_2__* ap; } ;
struct TYPE_5__ {struct ipr_sata_port* private_data; } ;
struct TYPE_4__ {int hrrq_free_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct ipr_cmnd *VAR_2)
{
 struct ata_queued_cmd *VAR_3 = VAR_2->qc;
 struct ipr_sata_port *VAR_4 = VAR_3->ap->private_data;

 VAR_3->err_mask |= VAR_0;
 VAR_4->ioasa.status |= VAR_1;
 FUNC_0(VAR_3);
 if (VAR_2->eh_comp)
  FUNC_1(VAR_2->eh_comp);
 FUNC_2(&VAR_2->queue, &VAR_2->hrrq->hrrq_free_q);
}
