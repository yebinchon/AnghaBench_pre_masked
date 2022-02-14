
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_enet_desc {int dummy; } ;
struct snic_fw_req {int dummy; } ;
struct TYPE_2__ {int wq_enet_desc_count; int intr_timer_type; int intr_timer; } ;
struct snic {unsigned int wq_count; int cq_count; unsigned int intr_count; unsigned int err_intr_offset; int vdev; int shost; int stats; TYPE_1__ config; int * intr; int * cq; int * wq; } ;
struct cq_enet_wq_desc {int dummy; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct snic*) ;
 int FUNC_4 (int ,int *,unsigned int,int,int) ;
 int FUNC_5 (int *,int ,int,int ,int ,int,int,int,int ,unsigned int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,unsigned int) ;
 int FUNC_10 (int *,int ,int ,unsigned int) ;
 int FUNC_11 (int ,int *,unsigned int,int,int) ;
 int FUNC_12 (int *,unsigned int,unsigned int,unsigned int) ;

int
FUNC_13(struct snic *VAR_3)
{
 enum vnic_dev_intr_mode VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_4 = FUNC_6(VAR_3->vdev);

 FUNC_2("vNIC interrupt mode: %s\n",
    ((VAR_4 == VAR_0) ?
     "Legacy PCI INTx" :
     ((VAR_4 == VAR_1) ?
      "MSI" :
      ((VAR_4 == VAR_2) ?
       "MSI-X" : "Unknown"))));


 FUNC_0(VAR_4 != VAR_2);

 FUNC_2("wq %d cq %d intr %d\n", VAR_3->wq_count,
    VAR_3->cq_count,
    VAR_3->intr_count);



 for (VAR_9 = 0; VAR_9 < VAR_3->wq_count; VAR_9++) {
  VAR_10 = FUNC_11(VAR_3->vdev,
         &VAR_3->wq[VAR_9],
         VAR_9,
         VAR_3->config.wq_enet_desc_count,
         sizeof(struct wq_enet_desc));
  if (VAR_10)
   goto error_cleanup;
 }


 for (VAR_9 = 0; VAR_9 < VAR_3->wq_count; VAR_9++) {
  VAR_10 = FUNC_4(VAR_3->vdev,
         &VAR_3->cq[VAR_9],
         VAR_9,
         VAR_3->config.wq_enet_desc_count,
         sizeof(struct cq_enet_wq_desc));
  if (VAR_10)
   goto error_cleanup;
 }

 FUNC_0(VAR_3->cq_count != 2 * VAR_3->wq_count);

 for (VAR_9 = VAR_3->wq_count; VAR_9 < VAR_3->cq_count; VAR_9++) {
  VAR_10 = FUNC_4(VAR_3->vdev,
         &VAR_3->cq[VAR_9],
         VAR_9,
         (VAR_3->config.wq_enet_desc_count * 3),
         sizeof(struct snic_fw_req));
  if (VAR_10)
   goto error_cleanup;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->intr_count; VAR_9++) {
  VAR_10 = FUNC_9(VAR_3->vdev, &VAR_3->intr[VAR_9], VAR_9);
  if (VAR_10)
   goto error_cleanup;
 }






 VAR_7 = 1;
 VAR_8 = VAR_3->err_intr_offset;

 for (VAR_9 = 0; VAR_9 < VAR_3->wq_count; VAR_9++) {
  FUNC_12(&VAR_3->wq[VAR_9],
         VAR_9,
         VAR_7,
         VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->cq_count; VAR_9++) {
  VAR_6 = VAR_9;

  FUNC_5(&VAR_3->cq[VAR_9],
         0 ,
         1 ,
         0 ,
         0 ,
         1 ,
         1 ,
         1 ,
         0 ,
         VAR_6,
         0 );
 }





 FUNC_0(VAR_4 != VAR_2);
 VAR_5 = 1;

 for (VAR_9 = 0; VAR_9 < VAR_3->intr_count; VAR_9++) {
  FUNC_10(&VAR_3->intr[VAR_9],
    VAR_3->config.intr_timer,
    VAR_3->config.intr_timer_type,
    VAR_5);
 }


 VAR_10 = FUNC_8(VAR_3->vdev, &VAR_3->stats);
 if (VAR_10) {
  FUNC_1(VAR_3->shost,
         "svnic_dev_stats_dump failed - x%x\n",
         VAR_10);
  goto error_cleanup;
 }


 FUNC_7(VAR_3->vdev);
 VAR_10 = 0;

 return VAR_10;

error_cleanup:
 FUNC_3(VAR_3);

 return VAR_10;
}
