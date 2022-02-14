
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sas_task {scalar_t__ data_dir; scalar_t__ num_scatter; scalar_t__ task_proto; int scatter; int total_xfer_len; } ;
struct asd_ha_struct {TYPE_4__* pcidev; } ;
struct asd_ascb {int sg_arr; struct asd_ha_struct* ha; TYPE_3__* scb; struct sas_task* uldd_task; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {TYPE_1__* sg_element; } ;
struct TYPE_7__ {TYPE_2__ ssp_task; } ;
struct TYPE_5__ {int bus_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct asd_ascb *VAR_2)
{
 struct asd_ha_struct *VAR_3 = VAR_2->ha;
 struct sas_task *VAR_4 = VAR_2->uldd_task;

 if (VAR_4->data_dir == VAR_0)
  return;

 if (VAR_4->num_scatter == 0) {
  dma_addr_t VAR_5 = (dma_addr_t)
         FUNC_3(VAR_2->scb->ssp_task.sg_element[0].bus_addr);
  FUNC_2(&VAR_2->ha->pcidev->dev, VAR_5,
     VAR_4->total_xfer_len, VAR_4->data_dir);
  return;
 }

 FUNC_0(VAR_3, VAR_2->sg_arr);
 if (VAR_4->task_proto != VAR_1)
  FUNC_1(&VAR_3->pcidev->dev, VAR_4->scatter,
        VAR_4->num_scatter, VAR_4->data_dir);
}
