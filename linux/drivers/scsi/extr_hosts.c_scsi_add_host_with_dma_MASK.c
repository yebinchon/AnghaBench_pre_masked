
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int name; int (* info ) (struct Scsi_Host*) ;} ;
struct device {struct device* parent; } ;
struct Scsi_Host {int host_no; struct device shost_gendev; struct device shost_dev; int * shost_data; scalar_t__ work_q; int work_q_name; TYPE_1__* transportt; struct device* dma_dev; int can_queue; struct scsi_host_template* hostt; } ;
struct TYPE_2__ {scalar_t__ create_work_queue; scalar_t__ host_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__,int ) ;
 struct device VAR_6 ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct Scsi_Host*) ;
 int FUNC_16 (struct Scsi_Host*,int ) ;
 int FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (struct Scsi_Host*) ;
 int FUNC_19 (struct Scsi_Host*) ;
 int FUNC_20 (struct Scsi_Host*) ;
 int FUNC_21 (struct Scsi_Host*) ;
 int FUNC_22 (int ,struct Scsi_Host*,char*,...) ;
 int FUNC_23 (int ,int,char*,int) ;
 int FUNC_24 (struct Scsi_Host*) ;

int FUNC_25(struct Scsi_Host *VAR_7, struct device *VAR_8,
      struct device *VAR_9)
{
 struct scsi_host_template *VAR_10 = VAR_7->hostt;
 int VAR_11 = -VAR_0;

 FUNC_22(VAR_4, VAR_7, "%s\n",
   VAR_10->info ? VAR_10->info(VAR_7) : VAR_10->name);

 if (!VAR_7->can_queue) {
  FUNC_22(VAR_3, VAR_7,
        "can_queue = 0 no longer supported\n");
  goto fail;
 }

 VAR_11 = FUNC_17(VAR_7);
 if (VAR_11)
  goto fail;

 VAR_11 = FUNC_19(VAR_7);
 if (VAR_11)
  goto fail;

 if (!VAR_7->shost_gendev.parent)
  VAR_7->shost_gendev.parent = VAR_8 ? VAR_8 : &VAR_6;
 if (!VAR_9)
  VAR_9 = VAR_7->shost_gendev.parent;

 VAR_7->dma_dev = VAR_9;






 FUNC_11(&VAR_7->shost_gendev);
 FUNC_13(&VAR_7->shost_gendev);
 FUNC_10(&VAR_7->shost_gendev);
 FUNC_5(&VAR_7->shost_gendev);

 VAR_11 = FUNC_2(&VAR_7->shost_gendev);
 if (VAR_11)
  goto out_disable_runtime_pm;

 FUNC_16(VAR_7, VAR_5);
 FUNC_6(VAR_7->shost_gendev.parent);

 FUNC_5(&VAR_7->shost_dev);

 VAR_11 = FUNC_2(&VAR_7->shost_dev);
 if (VAR_11)
  goto out_del_gendev;

 FUNC_6(&VAR_7->shost_gendev);

 if (VAR_7->transportt->host_size) {
  VAR_7->shost_data = FUNC_8(VAR_7->transportt->host_size,
      VAR_2);
  if (VAR_7->shost_data == ((void*)0)) {
   VAR_11 = -VAR_1;
   goto out_del_dev;
  }
 }

 if (VAR_7->transportt->create_work_queue) {
  FUNC_23(VAR_7->work_q_name, sizeof(VAR_7->work_q_name),
    "scsi_wq_%d", VAR_7->host_no);
  VAR_7->work_q = FUNC_0(
     VAR_7->work_q_name);
  if (!VAR_7->work_q) {
   VAR_11 = -VAR_0;
   goto out_free_shost_data;
  }
 }

 VAR_11 = FUNC_21(VAR_7);
 if (VAR_11)
  goto out_destroy_host;

 FUNC_20(VAR_7);
 FUNC_15(VAR_7);
 return VAR_11;

 out_destroy_host:
 if (VAR_7->work_q)
  FUNC_1(VAR_7->work_q);
 out_free_shost_data:
 FUNC_7(VAR_7->shost_data);
 out_del_dev:
 FUNC_3(&VAR_7->shost_dev);
 out_del_gendev:
 FUNC_3(&VAR_7->shost_gendev);
 out_disable_runtime_pm:
 FUNC_4(&VAR_7->shost_gendev);
 FUNC_9(&VAR_7->shost_gendev);
 FUNC_14(&VAR_7->shost_gendev);
 FUNC_12(&VAR_7->shost_gendev);
 FUNC_18(VAR_7);
 fail:
 return VAR_11;
}
