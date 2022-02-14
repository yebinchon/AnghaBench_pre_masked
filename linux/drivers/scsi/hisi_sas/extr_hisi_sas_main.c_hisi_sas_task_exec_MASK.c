
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_status_struct {int stat; int resp; } ;
struct sas_task {int (* task_done ) (struct sas_task*) ;struct task_status_struct task_status; struct domain_device* dev; } ;
struct hisi_sas_tmf_task {int dummy; } ;
struct hisi_sas_dq {int lock; } ;
struct hisi_hba {TYPE_1__* hw; int sem; int flags; struct device* dev; } ;
struct domain_device {scalar_t__ dev_type; struct asd_sas_port* port; } ;
struct device {int dummy; } ;
struct asd_sas_port {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* start_delivery ) (struct hisi_sas_dq*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct hisi_hba* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sas_task*,struct hisi_sas_dq**,int,struct hisi_sas_tmf_task*,int*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct sas_task*) ;
 int FUNC_9 (struct hisi_sas_dq*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct sas_task *VAR_6, gfp_t VAR_7,
         bool VAR_8, struct hisi_sas_tmf_task *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11 = 0;
 unsigned long VAR_12;
 struct hisi_hba *VAR_13;
 struct device *VAR_14;
 struct domain_device *VAR_15 = VAR_6->dev;
 struct asd_sas_port *VAR_16 = VAR_15->port;
 struct hisi_sas_dq *VAR_17 = ((void*)0);

 if (!VAR_16) {
  struct task_status_struct *VAR_18 = &VAR_6->task_status;

  VAR_18->resp = VAR_5;
  VAR_18->stat = VAR_3;




  if (VAR_15->dev_type != VAR_4)
   VAR_6->task_done(VAR_6);
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_15);
 VAR_14 = VAR_13->dev;

 if (FUNC_11(FUNC_10(VAR_2, &VAR_13->flags))) {
  if (FUNC_4())
   return -VAR_1;

  FUNC_2(&VAR_13->sem);
  FUNC_12(&VAR_13->sem);
 }


 VAR_10 = FUNC_3(VAR_6, &VAR_17, VAR_8, VAR_9, &VAR_11);
 if (VAR_10)
  FUNC_0(VAR_14, "task exec: failed[%d]!\n", VAR_10);

 if (FUNC_5(VAR_11)) {
  FUNC_6(&VAR_17->lock, VAR_12);
  VAR_13->hw->start_delivery(VAR_17);
  FUNC_7(&VAR_17->lock, VAR_12);
 }

 return VAR_10;
}
