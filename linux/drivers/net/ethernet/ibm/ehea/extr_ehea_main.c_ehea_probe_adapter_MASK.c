
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct ehea_adapter {int list; TYPE_2__* neq; int ** port; int neq_tasklet; int pd; int handle; struct platform_device* ofdev; } ;
struct TYPE_6__ {int ist1; } ;
struct TYPE_7__ {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct ehea_adapter* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (struct platform_device*) ;
 TYPE_2__* FUNC_3 (struct ehea_adapter*,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct ehea_adapter*) ;
 int FUNC_8 (struct ehea_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ,char*,struct ehea_adapter*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,char*,int *) ;
 int FUNC_15 (struct platform_device*,struct ehea_adapter*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_12)
{
 struct ehea_adapter *VAR_13;
 const u64 *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5();
 if (VAR_15)
  return VAR_15;

 if (!VAR_12 || !VAR_12->dev.of_node) {
  FUNC_16("Invalid ibmebus device probed\n");
  return -VAR_4;
 }

 VAR_13 = FUNC_1(&VAR_12->dev, sizeof(*VAR_13), VAR_8);
 if (!VAR_13) {
  VAR_15 = -VAR_7;
  FUNC_0(&VAR_12->dev, "no mem for ehea_adapter\n");
  goto out;
 }

 FUNC_12(&VAR_13->list, &VAR_9);

 VAR_13->ofdev = VAR_12;

 VAR_14 = FUNC_14(VAR_12->dev.of_node, "ibm,hea-handle",
      ((void*)0));
 if (VAR_14)
  VAR_13->handle = *VAR_14;

 if (!VAR_13->handle) {
  FUNC_0(&VAR_12->dev, "failed getting handle for adapter"
   " '%pOF'\n", VAR_12->dev.of_node);
  VAR_15 = -VAR_6;
  goto out_free_ad;
 }

 VAR_13->pd = VAR_3;

 FUNC_15(VAR_12, VAR_13);




 VAR_15 = FUNC_7(VAR_13);
 if (VAR_15) {
  FUNC_0(&VAR_12->dev, "sense_adapter_attr failed: %d\n", VAR_15);
  goto out_free_ad;
 }

 VAR_13->neq = FUNC_3(VAR_13,
          VAR_2, VAR_0, 1);
 if (!VAR_13->neq) {
  VAR_15 = -VAR_5;
  FUNC_0(&VAR_12->dev, "NEQ creation failed\n");
  goto out_free_ad;
 }

 FUNC_18(&VAR_13->neq_tasklet, VAR_11,
       (unsigned long)VAR_13);

 VAR_15 = FUNC_2(VAR_12);
 if (VAR_15)
  goto out_kill_eq;

 VAR_15 = FUNC_8(VAR_13);
 if (VAR_15) {
  FUNC_0(&VAR_12->dev, "setup_ports failed\n");
  goto out_rem_dev_sysfs;
 }

 VAR_15 = FUNC_11(VAR_13->neq->attr.ist1,
      VAR_10, 0,
      "ehea_neq", VAR_13);
 if (VAR_15) {
  FUNC_0(&VAR_12->dev, "requesting NEQ IRQ failed\n");
  goto out_shutdown_ports;
 }


 FUNC_17(&VAR_13->neq_tasklet);

 VAR_15 = 0;
 goto out;

out_shutdown_ports:
 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
  if (VAR_13->port[VAR_16]) {
   FUNC_9(VAR_13->port[VAR_16]);
   VAR_13->port[VAR_16] = ((void*)0);
  }

out_rem_dev_sysfs:
 FUNC_6(VAR_12);

out_kill_eq:
 FUNC_4(VAR_13->neq);

out_free_ad:
 FUNC_13(&VAR_13->list);

out:
 FUNC_10();

 return VAR_15;
}
