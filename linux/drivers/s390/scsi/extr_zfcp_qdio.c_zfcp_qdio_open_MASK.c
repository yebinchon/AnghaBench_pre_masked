
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_qdio {int max_sbale_per_sbal; int max_sbale_per_req; struct zfcp_adapter* adapter; int req_q_free; scalar_t__ req_q_idx; TYPE_1__** res_q; } ;
struct zfcp_adapter {TYPE_2__* scsi_host; int status; struct ccw_device* ccw_device; } ;
struct qdio_ssqd_desc {int qdioac2; } ;
struct qdio_initialize {int cdev; } ;
struct qdio_buffer_element {int * addr; scalar_t__ sflags; int eflags; scalar_t__ length; } ;
struct ccw_device {int dev; } ;
struct TYPE_4__ {int sg_tablesize; int max_sectors; } ;
struct TYPE_3__ {struct qdio_buffer_element* element; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct ccw_device*,int ,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct ccw_device*) ;
 scalar_t__ FUNC_7 (struct qdio_initialize*) ;
 scalar_t__ FUNC_8 (int ,struct qdio_ssqd_desc*) ;
 int FUNC_9 (struct ccw_device*,int ) ;
 int FUNC_10 (struct qdio_initialize*,struct zfcp_qdio*) ;

int FUNC_11(struct zfcp_qdio *VAR_13)
{
 struct qdio_buffer_element *VAR_14;
 struct qdio_initialize VAR_15;
 struct zfcp_adapter *VAR_16 = VAR_13->adapter;
 struct ccw_device *VAR_17 = VAR_16->ccw_device;
 struct qdio_ssqd_desc VAR_18;
 int VAR_19;

 if (FUNC_2(&VAR_16->status) & VAR_11)
  return -VAR_2;

 FUNC_0(VAR_12,
     &VAR_13->adapter->status);

 FUNC_10(&VAR_15, VAR_13);

 if (FUNC_7(&VAR_15))
  goto failed_establish;

 if (FUNC_8(VAR_15.cdev, &VAR_18))
  goto failed_qdio;

 if (VAR_18.qdioac2 & VAR_0)
  FUNC_1(VAR_9,
    &VAR_13->adapter->status);

 if (VAR_18.qdioac2 & VAR_1) {
  FUNC_1(VAR_10, &VAR_16->status);
  VAR_13->max_sbale_per_sbal = VAR_6;
 } else {
  FUNC_0(VAR_10, &VAR_16->status);
  VAR_13->max_sbale_per_sbal = VAR_6 - 1;
 }

 VAR_13->max_sbale_per_req =
  VAR_8 * VAR_13->max_sbale_per_sbal
  - 2;
 if (FUNC_6(VAR_17))
  goto failed_qdio;

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  VAR_14 = &(VAR_13->res_q[VAR_19]->element[0]);
  VAR_14->length = 0;
  VAR_14->eflags = VAR_7;
  VAR_14->sflags = 0;
  VAR_14->addr = ((void*)0);
 }

 if (FUNC_5(VAR_17, VAR_4, 0, 0, VAR_5))
  goto failed_qdio;


 VAR_13->req_q_idx = 0;
 FUNC_3(&VAR_13->req_q_free, VAR_5);
 FUNC_1(VAR_11, &VAR_13->adapter->status);

 if (VAR_16->scsi_host) {
  VAR_16->scsi_host->sg_tablesize = VAR_13->max_sbale_per_req;
  VAR_16->scsi_host->max_sectors = VAR_13->max_sbale_per_req * 8;
 }

 return 0;

failed_qdio:
 FUNC_9(VAR_17, VAR_3);
failed_establish:
 FUNC_4(&VAR_17->dev,
  "Setting up the QDIO connection to the FCP adapter failed\n");
 return -VAR_2;
}
