
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* parent; } ;
struct rproc {TYPE_1__ dev; } ;
struct TYPE_9__ {int notifier_call; } ;
struct TYPE_7__ {int stop; int start; } ;
struct qcom_sysmon {char const* name; int ssctl_instance; int shutdown_irq; int node; TYPE_5__ nb; TYPE_2__ subdev; int qmi; TYPE_3__* dev; int lock; int shutdown_comp; int ind_comp; int comp; struct rproc* rproc; } ;
struct TYPE_8__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qcom_sysmon* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int,int *,int ,int,char*,struct qcom_sysmon*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qcom_sysmon*) ;
 struct qcom_sysmon* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,int,int ,int ) ;
 int FUNC_13 (int *,int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_14 (struct rproc*,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

struct qcom_sysmon *FUNC_15(struct rproc *VAR_15,
        const char *VAR_16,
        int VAR_17)
{
 struct qcom_sysmon *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return FUNC_0(-VAR_1);

 VAR_18->dev = VAR_15->dev.parent;
 VAR_18->rproc = VAR_15;

 VAR_18->name = VAR_16;
 VAR_18->ssctl_instance = VAR_17;

 FUNC_4(&VAR_18->comp);
 FUNC_4(&VAR_18->ind_comp);
 FUNC_4(&VAR_18->shutdown_comp);
 FUNC_8(&VAR_18->lock);

 VAR_18->shutdown_irq = FUNC_11(VAR_18->dev->of_node,
       "shutdown-ack");
 if (VAR_18->shutdown_irq < 0) {
  if (VAR_18->shutdown_irq != -VAR_0) {
   FUNC_2(VAR_18->dev,
    "failed to retrieve shutdown-ack IRQ\n");
   return FUNC_0(VAR_18->shutdown_irq);
  }
 } else {
  VAR_19 = FUNC_3(VAR_18->dev,
      VAR_18->shutdown_irq,
      ((void*)0), VAR_12,
      VAR_4 | VAR_3,
      "q6v5 shutdown-ack", VAR_18);
  if (VAR_19) {
   FUNC_2(VAR_18->dev,
    "failed to acquire shutdown-ack IRQ\n");
   return FUNC_0(VAR_19);
  }
 }

 VAR_19 = FUNC_13(&VAR_18->qmi, VAR_5, &VAR_7,
         VAR_6);
 if (VAR_19 < 0) {
  FUNC_2(VAR_18->dev, "failed to initialize qmi handle\n");
  FUNC_5(VAR_18);
  return FUNC_0(VAR_19);
 }

 FUNC_12(&VAR_18->qmi, 43, 0, 0);

 VAR_18->subdev.start = VAR_13;
 VAR_18->subdev.stop = VAR_14;

 FUNC_14(VAR_15, &VAR_18->subdev);

 VAR_18->nb.notifier_call = VAR_11;
 FUNC_1(&VAR_10, &VAR_18->nb);

 FUNC_9(&VAR_9);
 FUNC_7(&VAR_18->node, &VAR_8);
 FUNC_10(&VAR_9);

 return VAR_18;
}
