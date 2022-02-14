
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_status_struct {void* stat; void* resp; } ;
struct sas_task {int task_proto; int num_scatter; int data_dir; int scatter; int task_state_lock; int task_state_flags; struct pm8001_ccb_info* lldd_task; int (* task_done ) (struct sas_task*) ;struct task_status_struct task_status; struct domain_device* dev; } ;
struct pm8001_tmf_task {int dummy; } ;
struct pm8001_port {int port_attached; } ;
struct pm8001_hba_info {int lock; int dev; struct pm8001_ccb_info* ccb_info; struct pm8001_port* port; scalar_t__ controller_fatal_error; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {int n_elem; int ccb_tag; struct pm8001_device* device; struct sas_task* task; } ;
struct domain_device {scalar_t__ dev_type; struct pm8001_device* lldd_dev; int port; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct pm8001_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_3 ;




 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 struct pm8001_hba_info* FUNC_5 (struct domain_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct pm8001_hba_info*,int*) ;
 int FUNC_8 (struct pm8001_hba_info*,int) ;
 int FUNC_9 (struct pm8001_hba_info*,struct pm8001_ccb_info*) ;
 int FUNC_10 (struct pm8001_hba_info*,struct pm8001_ccb_info*) ;
 int FUNC_11 (struct pm8001_hba_info*,struct pm8001_ccb_info*) ;
 int FUNC_12 (struct pm8001_hba_info*,struct pm8001_ccb_info*,struct pm8001_tmf_task*) ;
 size_t FUNC_13 (struct domain_device*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (struct sas_task*) ;
 int FUNC_20 (struct sas_task*) ;
 int FUNC_21 (struct sas_task*) ;
 int FUNC_22 (struct sas_task*) ;

__attribute__((used)) static int FUNC_23(struct sas_task *VAR_7,
 gfp_t VAR_8, int VAR_9, struct pm8001_tmf_task *VAR_10)
{
 struct domain_device *VAR_11 = VAR_7->dev;
 struct pm8001_hba_info *VAR_12;
 struct pm8001_device *VAR_13;
 struct pm8001_port *VAR_14 = ((void*)0);
 struct sas_task *VAR_15 = VAR_7;
 struct pm8001_ccb_info *VAR_16;
 u32 VAR_17 = 0xdeadbeef, VAR_18, VAR_19 = 0;
 unsigned long VAR_20 = 0;

 if (!VAR_11->port) {
  struct task_status_struct *VAR_21 = &VAR_15->task_status;
  VAR_21->resp = VAR_6;
  VAR_21->stat = VAR_3;
  if (VAR_11->dev_type != VAR_4)
   VAR_15->task_done(VAR_15);
  return 0;
 }
 VAR_12 = FUNC_5(VAR_7->dev);
 if (VAR_12->controller_fatal_error) {
  struct task_status_struct *VAR_22 = &VAR_15->task_status;

  VAR_22->resp = VAR_6;
  VAR_15->task_done(VAR_15);
  return 0;
 }
 FUNC_1(VAR_12, FUNC_6("pm8001_task_exec device \n "));
 FUNC_16(&VAR_12->lock, VAR_20);
 do {
  VAR_11 = VAR_15->dev;
  VAR_13 = VAR_11->lldd_dev;
  VAR_14 = &VAR_12->port[FUNC_13(VAR_11)];
  if (FUNC_0(VAR_13) || !VAR_14->port_attached) {
   if (FUNC_14(VAR_15->task_proto)) {
    struct task_status_struct *VAR_23 = &VAR_15->task_status;
    VAR_23->resp = VAR_6;
    VAR_23->stat = VAR_3;

    FUNC_18(&VAR_12->lock, VAR_20);
    VAR_15->task_done(VAR_15);
    FUNC_16(&VAR_12->lock, VAR_20);
    continue;
   } else {
    struct task_status_struct *VAR_24 = &VAR_15->task_status;
    VAR_24->resp = VAR_6;
    VAR_24->stat = VAR_3;
    VAR_15->task_done(VAR_15);
    continue;
   }
  }
  VAR_18 = FUNC_7(VAR_12, &VAR_17);
  if (VAR_18)
   goto err_out;
  VAR_16 = &VAR_12->ccb_info[VAR_17];

  if (!FUNC_14(VAR_15->task_proto)) {
   if (VAR_15->num_scatter) {
    VAR_19 = FUNC_3(VAR_12->dev,
     VAR_15->scatter,
     VAR_15->num_scatter,
     VAR_15->data_dir);
    if (!VAR_19) {
     VAR_18 = -VAR_1;
     goto err_out_tag;
    }
   }
  } else {
   VAR_19 = VAR_15->num_scatter;
  }

  VAR_15->lldd_task = VAR_16;
  VAR_16->n_elem = VAR_19;
  VAR_16->ccb_tag = VAR_17;
  VAR_16->task = VAR_15;
  VAR_16->device = VAR_13;
  switch (VAR_15->task_proto) {
  case 130:
   VAR_18 = FUNC_10(VAR_12, VAR_16);
   break;
  case 129:
   if (VAR_9)
    VAR_18 = FUNC_12(VAR_12,
     VAR_16, VAR_10);
   else
    VAR_18 = FUNC_11(VAR_12, VAR_16);
   break;
  case 131:
  case 128:
   VAR_18 = FUNC_9(VAR_12, VAR_16);
   break;
  default:
   FUNC_2(VAR_2, VAR_12->dev,
    "unknown sas_task proto: 0x%x\n",
    VAR_15->task_proto);
   VAR_18 = -VAR_0;
   break;
  }

  if (VAR_18) {
   FUNC_1(VAR_12,
    FUNC_6("rc is %x\n", VAR_18));
   goto err_out_tag;
  }

  FUNC_15(&VAR_15->task_state_lock);
  VAR_15->task_state_flags |= VAR_5;
  FUNC_17(&VAR_15->task_state_lock);
  VAR_13->running_req++;
 } while (0);
 VAR_18 = 0;
 goto out_done;

err_out_tag:
 FUNC_8(VAR_12, VAR_17);
err_out:
 FUNC_2(VAR_2, VAR_12->dev, "pm8001 exec failed[%d]!\n", VAR_18);
 if (!FUNC_14(VAR_15->task_proto))
  if (VAR_19)
   FUNC_4(VAR_12->dev, VAR_15->scatter, VAR_15->num_scatter,
    VAR_15->data_dir);
out_done:
 FUNC_18(&VAR_12->lock, VAR_20);
 return VAR_18;
}
