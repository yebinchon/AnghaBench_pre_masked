
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sas_task {int task_state_flags; int task_state_lock; int uldd_task; int dev; } ;
struct isci_remote_device {int flags; } ;
struct isci_host {int scic_lock; TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*,struct sas_task*,int ,struct isci_remote_device*,int ,int ) ;
 struct isci_host* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct isci_host*) ;
 int FUNC_4 (struct isci_remote_device*,struct sas_task*) ;
 struct isci_remote_device* FUNC_5 (int ) ;
 int FUNC_6 (struct isci_remote_device*) ;
 int FUNC_7 (struct isci_host*,struct isci_remote_device*,struct sas_task*,scalar_t__) ;
 int FUNC_8 (struct isci_host*,struct sas_task*,int ,int ) ;
 int FUNC_9 (struct isci_host*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct sas_task *VAR_11, gfp_t VAR_12)
{
 struct isci_host *VAR_13 = FUNC_2(VAR_11->dev);
 struct isci_remote_device *VAR_14;
 unsigned long VAR_15;
 enum sci_status VAR_16 = VAR_9;
 bool VAR_17;
 u16 VAR_18;

 FUNC_10(&VAR_13->scic_lock, VAR_15);
 VAR_14 = FUNC_5(VAR_11->dev);
 VAR_17 = FUNC_4(VAR_14, VAR_11);
 VAR_18 = FUNC_3(VAR_13);
 FUNC_11(&VAR_13->scic_lock, VAR_15);

 FUNC_1(&VAR_13->pdev->dev,
  "task: %p, dev: %p idev: %p:%#lx cmd = %p\n",
  VAR_11, VAR_11->dev, VAR_14, VAR_14 ? VAR_14->flags : 0,
  VAR_11->uldd_task);

 if (!VAR_14) {
  FUNC_8(VAR_13, VAR_11, VAR_7,
     VAR_2);
 } else if (!VAR_17 || VAR_18 == VAR_8) {



  FUNC_8(VAR_13, VAR_11, VAR_5,
     VAR_3);
 } else {

  FUNC_10(&VAR_11->task_state_lock, VAR_15);

  if (VAR_11->task_state_flags & VAR_6) {

   FUNC_11(&VAR_11->task_state_lock, VAR_15);

   FUNC_8(VAR_13, VAR_11,
      VAR_7,
      VAR_1);
  } else {
   VAR_11->task_state_flags |= VAR_4;
   FUNC_11(&VAR_11->task_state_lock, VAR_15);


   VAR_16 = FUNC_7(VAR_13, VAR_14, VAR_11, VAR_18);

   if (VAR_16 != VAR_10) {
    FUNC_10(&VAR_11->task_state_lock, VAR_15);

    VAR_11->task_state_flags &= ~VAR_4;
    FUNC_11(&VAR_11->task_state_lock, VAR_15);

    if (FUNC_12(VAR_0, &VAR_14->flags)) {



     FUNC_8(VAR_13, VAR_11,
      VAR_7,
      VAR_2);
    } else {
     FUNC_8(VAR_13, VAR_11,
      VAR_5,
      VAR_3);
    }
   }
  }
 }

 if (VAR_16 != VAR_10 && VAR_18 != VAR_8) {
  FUNC_10(&VAR_13->scic_lock, VAR_15);



  FUNC_9(VAR_13, FUNC_0(VAR_18));
  FUNC_11(&VAR_13->scic_lock, VAR_15);
 }

 FUNC_6(VAR_14);
 return 0;
}
