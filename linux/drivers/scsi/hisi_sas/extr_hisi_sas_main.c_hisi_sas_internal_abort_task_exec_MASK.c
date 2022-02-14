
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_task {int task_state_lock; int task_state_flags; struct hisi_sas_slot* lldd_task; struct domain_device* dev; } ;
struct hisi_sas_slot {int n_elem; int dlvry_queue; int dlvry_queue_slot; int is_internal; int ready; struct hisi_sas_cmd_hdr* cmd_hdr; struct hisi_sas_port* port; struct sas_task* task; int device_id; int entry; int delivery; } ;
struct hisi_sas_port {int dummy; } ;
struct hisi_sas_err_record {int dummy; } ;
struct hisi_sas_dq {int wr_point; int id; int lock; int list; } ;
struct hisi_sas_device {int device_id; int lock; int list; } ;
struct hisi_sas_cmd_hdr {int dummy; } ;
struct hisi_hba {TYPE_1__* hw; struct hisi_sas_cmd_hdr** cmd_hdr; struct hisi_sas_slot* slot_info; int flags; struct device* dev; } ;
struct domain_device {struct asd_sas_port* port; struct hisi_sas_device* lldd_dev; } ;
struct device {int dummy; } ;
struct asd_sas_port {int dummy; } ;
struct TYPE_2__ {int (* start_delivery ) (struct hisi_sas_dq*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct hisi_sas_cmd_hdr* FUNC_2 (struct hisi_sas_slot*) ;
 int FUNC_3 (struct hisi_hba*,int *) ;
 struct hisi_sas_cmd_hdr* FUNC_4 (struct hisi_sas_slot*) ;
 int FUNC_5 (struct hisi_hba*,struct hisi_sas_slot*,int,int,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct hisi_sas_cmd_hdr*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct hisi_sas_dq*) ;
 int FUNC_11 (int ,int *) ;
 struct hisi_sas_port* FUNC_12 (struct asd_sas_port*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct hisi_hba *VAR_5, int VAR_6,
      struct sas_task *VAR_7, int VAR_8,
      int VAR_9, struct hisi_sas_dq *VAR_10)
{
 struct domain_device *VAR_11 = VAR_7->dev;
 struct hisi_sas_device *VAR_12 = VAR_11->lldd_dev;
 struct device *VAR_13 = VAR_5->dev;
 struct hisi_sas_port *VAR_14;
 struct hisi_sas_slot *VAR_15;
 struct asd_sas_port *VAR_16 = VAR_11->port;
 struct hisi_sas_cmd_hdr *VAR_17;
 int VAR_18, VAR_19, VAR_20 = 0, VAR_21, VAR_22;
 unsigned long VAR_23;
 int VAR_24;

 if (FUNC_13(FUNC_11(VAR_3, &VAR_5->flags)))
  return -VAR_0;

 if (!VAR_11->port)
  return -1;

 VAR_14 = FUNC_12(VAR_16);


 VAR_21 = FUNC_3(VAR_5, ((void*)0));
 if (VAR_21 < 0)
  goto err_out;

 VAR_22 = VAR_21;
 VAR_15 = &VAR_5->slot_info[VAR_22];

 FUNC_8(&VAR_10->lock, VAR_23);
 VAR_24 = VAR_10->wr_point;
 VAR_10->wr_point = (VAR_10->wr_point + 1) % VAR_2;
 FUNC_6(&VAR_15->delivery, &VAR_10->list);
 FUNC_9(&VAR_10->lock, VAR_23);
 FUNC_8(&VAR_12->lock, VAR_23);
 FUNC_6(&VAR_15->entry, &VAR_12->list);
 FUNC_9(&VAR_12->lock, VAR_23);

 VAR_19 = VAR_10->id;
 VAR_18 = VAR_24;

 VAR_15->device_id = VAR_12->device_id;
 VAR_15->n_elem = VAR_20;
 VAR_15->dlvry_queue = VAR_19;
 VAR_15->dlvry_queue_slot = VAR_18;
 VAR_17 = VAR_5->cmd_hdr[VAR_19];
 VAR_15->cmd_hdr = &VAR_17[VAR_18];
 VAR_15->task = VAR_7;
 VAR_15->port = VAR_14;
 VAR_15->is_internal = 1;
 VAR_7->lldd_task = VAR_15;

 FUNC_7(VAR_15->cmd_hdr, 0, sizeof(struct hisi_sas_cmd_hdr));
 FUNC_7(FUNC_2(VAR_15), 0, VAR_1);
 FUNC_7(FUNC_4(VAR_15), 0,
        sizeof(struct hisi_sas_err_record));

 FUNC_5(VAR_5, VAR_15, VAR_6,
          VAR_8, VAR_9);

 FUNC_8(&VAR_7->task_state_lock, VAR_23);
 VAR_7->task_state_flags |= VAR_4;
 FUNC_9(&VAR_7->task_state_lock, VAR_23);
 FUNC_0(VAR_15->ready, 1);

 FUNC_8(&VAR_10->lock, VAR_23);
 VAR_5->hw->start_delivery(VAR_10);
 FUNC_9(&VAR_10->lock, VAR_23);

 return 0;

err_out:
 FUNC_1(VAR_13, "internal abort task prep: failed[%d]!\n", VAR_21);

 return VAR_21;
}
