
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_device_id {int dummy; } ;
struct device {int dummy; } ;
struct vio_dev {struct device dev; } ;
struct srp_rport_identifiers {int roles; int port_id; } ;
struct srp_rport {int dummy; } ;
struct TYPE_2__ {int partition_name; } ;
struct ibmvscsi_host_data {struct srp_rport* work_thread; int queue; int pool; struct Scsi_Host* host; int host_list; int request_limit; TYPE_1__ madapter_info; struct device* dev; int work_wait_q; int sent; } ;
struct Scsi_Host {int max_cmd_len; int max_channel; int max_lun; int max_id; int host_no; int max_sectors; int transportt; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct srp_rport*) ;
 int FUNC_2 (struct srp_rport*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,int ,int ,int ) ;
 int FUNC_7 (struct device*,struct ibmvscsi_host_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,struct ibmvscsi_host_data*,int ) ;
 int FUNC_9 (int *,struct ibmvscsi_host_data*,int ) ;
 scalar_t__ FUNC_10 (struct ibmvscsi_host_data*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,struct ibmvscsi_host_data*) ;
 unsigned long VAR_11 ;
 struct srp_rport* FUNC_13 (int ,struct ibmvscsi_host_data*,char*,char*,int ) ;
 int FUNC_14 (struct srp_rport*) ;
 int FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (struct ibmvscsi_host_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (struct ibmvscsi_host_data*,int,int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *,struct ibmvscsi_host_data*) ;
 scalar_t__ FUNC_21 (struct Scsi_Host*,struct device*) ;
 struct Scsi_Host* FUNC_22 (int *,int) ;
 int FUNC_23 (struct Scsi_Host*) ;
 int FUNC_24 (struct Scsi_Host*) ;
 int FUNC_25 (struct Scsi_Host*) ;
 struct ibmvscsi_host_data* FUNC_26 (struct Scsi_Host*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 struct srp_rport* FUNC_29 (struct Scsi_Host*,struct srp_rport_identifiers*) ;
 scalar_t__ FUNC_30 (unsigned long,unsigned long) ;
 int FUNC_31 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static int FUNC_32(struct vio_dev *VAR_15, const struct vio_device_id *VAR_16)
{
 struct ibmvscsi_host_data *VAR_17;
 struct Scsi_Host *VAR_18;
 struct device *VAR_19 = &VAR_15->dev;
 struct srp_rport_identifiers VAR_20;
 struct srp_rport *VAR_21;
 unsigned long VAR_22 = 0;
 int VAR_23;

 FUNC_7(&VAR_15->dev, ((void*)0));

 VAR_18 = FUNC_22(&VAR_5, sizeof(*VAR_17));
 if (!VAR_18) {
  FUNC_5(&VAR_15->dev, "couldn't allocate host data\n");
  goto scsi_host_alloc_failed;
 }

 VAR_18->transportt = VAR_8;
 VAR_17 = FUNC_26(VAR_18);
 FUNC_18(VAR_17, 0x00, sizeof(*VAR_17));
 FUNC_0(&VAR_17->sent);
 FUNC_11(&VAR_17->work_wait_q);
 VAR_17->host = VAR_18;
 VAR_17->dev = VAR_19;
 FUNC_4(&VAR_17->request_limit, -1);
 VAR_17->host->max_sectors = VAR_3;

 if (FUNC_16(VAR_17)) {
  FUNC_5(&VAR_15->dev, "couldn't map persistent buffers\n");
  goto persist_bufs_failed;
 }

 VAR_17->work_thread = FUNC_13(VAR_9, VAR_17, "%s_%d",
         "ibmvscsi", VAR_18->host_no);

 if (FUNC_1(VAR_17->work_thread)) {
  FUNC_5(&VAR_15->dev, "couldn't initialize kthread. rc=%ld\n",
   FUNC_2(VAR_17->work_thread));
  goto init_crq_failed;
 }

 VAR_23 = FUNC_8(&VAR_17->queue, VAR_17, VAR_13);
 if (VAR_23 != 0 && VAR_23 != VAR_1) {
  FUNC_5(&VAR_15->dev, "couldn't initialize crq. rc=%d\n", VAR_23);
  goto kill_kthread;
 }
 if (FUNC_12(&VAR_17->pool, VAR_13, VAR_17) != 0) {
  FUNC_5(&VAR_15->dev, "couldn't initialize event pool\n");
  goto init_pool_failed;
 }

 VAR_18->max_lun = VAR_2;
 VAR_18->max_id = VAR_14;
 VAR_18->max_channel = VAR_12;
 VAR_18->max_cmd_len = 16;

 FUNC_6(VAR_19,
   "Maximum ID: %d Maximum LUN: %llu Maximum Channel: %d\n",
   VAR_18->max_id, VAR_18->max_lun, VAR_18->max_channel);

 if (FUNC_21(VAR_17->host, VAR_17->dev))
  goto add_host_failed;


 FUNC_17(VAR_20.port_id, VAR_17->madapter_info.partition_name,
        sizeof(VAR_20.port_id));
 VAR_20.roles = VAR_4;
 VAR_21 = FUNC_29(VAR_18, &VAR_20);
 if (FUNC_1(VAR_21))
  goto add_srp_port_failed;





 if (FUNC_10(VAR_17, 0xC001000000000000LL, 0) == 0
     || VAR_23 == VAR_1) {






  for (VAR_22 = VAR_11 + (VAR_10 * VAR_0);
       FUNC_30(VAR_11, VAR_22) &&
       FUNC_3(&VAR_17->request_limit) < 2;) {

   FUNC_19(10);
  }


  if (FUNC_3(&VAR_17->request_limit) > 0)
   FUNC_25(VAR_18);
 }

 FUNC_7(&VAR_15->dev, VAR_17);
 FUNC_27(&VAR_6);
 FUNC_15(&VAR_17->host_list, &VAR_7);
 FUNC_28(&VAR_6);
 return 0;

      add_srp_port_failed:
 FUNC_24(VAR_17->host);
      add_host_failed:
 FUNC_20(&VAR_17->pool, VAR_17);
      init_pool_failed:
 FUNC_9(&VAR_17->queue, VAR_17, VAR_13);
      kill_kthread:
      FUNC_14(VAR_17->work_thread);
      init_crq_failed:
 FUNC_31(VAR_17);
      persist_bufs_failed:
 FUNC_23(VAR_18);
      scsi_host_alloc_failed:
 return -1;
}
