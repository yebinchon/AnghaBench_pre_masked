
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct vio_device_id {int dummy; } ;
struct vio_dev {char* name; int dev; int irq; int unit_address; } ;
struct TYPE_11__ {struct scsi_info* ldata; } ;
struct TYPE_10__ {long partition_number; } ;
struct TYPE_9__ {int unit_id; int partition_num; int partition_name; TYPE_2__* window; } ;
struct TYPE_7__ {char* tport_name; } ;
struct scsi_info {char* eye; int list; TYPE_5__ target; int work_task; struct scsi_info* map_buf; scalar_t__ map_ioba; int work_q; int state; int dev; int unconfig; int wait_idle; TYPE_4__ client_data; TYPE_3__ dds; int intr_lock; int request_limit; TYPE_1__ tport; int active_q; int waiting_rsp; int schedule_q; struct vio_dev* dma_dev; } ;
struct TYPE_8__ {long liobn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,...) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct scsi_info*) ;
 scalar_t__ FUNC_8 (int *,struct scsi_info*,int,int ) ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__,int,int ) ;
 long FUNC_11 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_12 (struct scsi_info*,int ) ;
 int FUNC_13 (struct scsi_info*) ;
 int FUNC_14 (struct scsi_info*,int) ;
 int FUNC_15 (struct scsi_info*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct scsi_info*) ;
 int FUNC_17 (struct scsi_info*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (struct scsi_info*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct scsi_info*) ;
 void* FUNC_21 (int,int ) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (struct scsi_info*) ;
 int FUNC_25 (int ,int ,int ,char*,struct scsi_info*) ;
 int FUNC_26 (char*,int,char*,char*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_5__*,int *,int ,int ) ;
 int FUNC_31 (TYPE_5__*) ;
 int FUNC_32 (int ,int ,int) ;
 int FUNC_33 (int *,int ,unsigned long) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct vio_dev *VAR_19,
      const struct vio_device_id *VAR_20)
{
 struct scsi_info *VAR_21;
 int VAR_22 = 0;
 long VAR_23 = 0;
 char VAR_24[24];

 VAR_21 = FUNC_21(sizeof(*VAR_21), VAR_3);
 if (!VAR_21) {
  VAR_22 = -VAR_1;
  FUNC_5(&VAR_19->dev, "probe: allocation of adapter failed\n");
  return VAR_22;
 }

 VAR_21->dma_dev = VAR_19;
 VAR_21->dev = VAR_19->dev;
 FUNC_0(&VAR_21->schedule_q);
 FUNC_0(&VAR_21->waiting_rsp);
 FUNC_0(&VAR_21->active_q);

 FUNC_26(VAR_21->tport.tport_name, VAR_6, "%s",
   FUNC_6(&VAR_19->dev));

 FUNC_4(&VAR_21->dev, "probe tport_name: %s\n", VAR_21->tport.tport_name);

 VAR_22 = FUNC_24(VAR_21);
 if (VAR_22)
  goto free_adapter;
 FUNC_4(&VAR_21->dev, "Probe: liobn 0x%x, riobn 0x%x\n",
  VAR_21->dds.window[VAR_8].liobn,
  VAR_21->dds.window[VAR_10].liobn);

 FUNC_26(VAR_21->eye, sizeof(VAR_21->eye), "VSCSI %s", VAR_19->name);

 VAR_21->dds.unit_id = VAR_19->unit_address;
 FUNC_32(VAR_21->dds.partition_name, VAR_17,
  sizeof(VAR_21->dds.partition_name));
 VAR_21->dds.partition_num = VAR_18;

 FUNC_27(&VAR_14);
 FUNC_22(&VAR_21->list, &VAR_13);
 FUNC_29(&VAR_14);





 VAR_21->request_limit = VAR_7;
 VAR_22 = FUNC_30(&VAR_21->target, &VAR_19->dev, VAR_21->request_limit,
         VAR_11);
 if (VAR_22)
  goto rem_list;

 VAR_21->target.ldata = VAR_21;

 VAR_22 = FUNC_12(VAR_21, VAR_21->request_limit);
 if (VAR_22) {
  FUNC_5(&VAR_21->dev, "alloc_cmds failed, rc %d, num %d\n",
   VAR_22, VAR_21->request_limit);
  goto free_target;
 }





 FUNC_28(&VAR_21->intr_lock);

 VAR_22 = FUNC_13(VAR_21);
 if (VAR_22) {
  FUNC_5(&VAR_21->dev, "probe: alloctimer failed, rc %d\n", VAR_22);
  goto free_cmds;
 }

 VAR_22 = FUNC_14(VAR_21, 256);
 if (VAR_22) {
  FUNC_5(&VAR_21->dev, "probe: create_command_q failed, rc %d\n",
   VAR_22);
  goto free_timer;
 }

 VAR_21->map_buf = FUNC_21(VAR_9, VAR_3);
 if (!VAR_21->map_buf) {
  VAR_22 = -VAR_1;
  FUNC_5(&VAR_21->dev, "probe: allocating cmd buffer failed\n");
  goto destroy_queue;
 }

 VAR_21->map_ioba = FUNC_8(&VAR_19->dev, VAR_21->map_buf, VAR_9,
      VAR_0);
 if (FUNC_9(&VAR_19->dev, VAR_21->map_ioba)) {
  VAR_22 = -VAR_1;
  FUNC_5(&VAR_21->dev, "probe: error mapping command buffer\n");
  goto free_buf;
 }

 VAR_23 = FUNC_11(VAR_21->dds.unit_id, VAR_4,
         (u64)VAR_21->map_ioba | ((u64)VAR_9 << 32), 0, 0, 0,
         0);
 if (VAR_23 == VAR_5)
  VAR_21->client_data.partition_number =
   FUNC_1(*(u64 *)VAR_21->map_buf);





 FUNC_4(&VAR_21->dev, "probe hrc %ld, client partition num %d\n",
  VAR_23, VAR_21->client_data.partition_number);

 FUNC_33(&VAR_21->work_task, VAR_15,
       (unsigned long)VAR_21);

 FUNC_19(&VAR_21->wait_idle);
 FUNC_19(&VAR_21->unconfig);

 FUNC_26(VAR_24, 24, "ibmvscsis%s", FUNC_6(&VAR_19->dev));
 VAR_21->work_q = FUNC_2(VAR_24);
 if (!VAR_21->work_q) {
  VAR_22 = -VAR_1;
  FUNC_5(&VAR_21->dev, "create_workqueue failed\n");
  goto unmap_buf;
 }

 VAR_22 = FUNC_25(VAR_19->irq, VAR_16, 0, "ibmvscsis", VAR_21);
 if (VAR_22) {
  VAR_22 = -VAR_2;
  FUNC_5(&VAR_21->dev, "probe: request_irq failed, rc %d\n", VAR_22);
  goto destroy_WQ;
 }

 VAR_21->state = VAR_12;

 FUNC_7(&VAR_19->dev, VAR_21);

 return 0;

destroy_WQ:
 FUNC_3(VAR_21->work_q);
unmap_buf:
 FUNC_10(&VAR_19->dev, VAR_21->map_ioba, VAR_9,
    VAR_0);
free_buf:
 FUNC_20(VAR_21->map_buf);
destroy_queue:
 FUNC_34(&VAR_21->work_task);
 FUNC_18(VAR_21);
 FUNC_15(VAR_21);
free_timer:
 FUNC_17(VAR_21);
free_cmds:
 FUNC_16(VAR_21);
free_target:
 FUNC_31(&VAR_21->target);
rem_list:
 FUNC_27(&VAR_14);
 FUNC_23(&VAR_21->list);
 FUNC_29(&VAR_14);
free_adapter:
 FUNC_20(VAR_21);

 return VAR_22;
}
