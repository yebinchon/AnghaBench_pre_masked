
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iavf_adapter {int num_active_queues; TYPE_2__* pdev; scalar_t__ num_tc; TYPE_1__* vf_res; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int vf_cap_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct iavf_adapter*) ;
 int FUNC_5 (struct iavf_adapter*) ;
 int FUNC_6 (struct iavf_adapter*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct iavf_adapter *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev,
   "Unable to allocate memory for queues\n");
  goto err_alloc_queues;
 }

 FUNC_7();
 VAR_2 = FUNC_6(VAR_1);
 FUNC_8();
 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev,
   "Unable to setup interrupt capabilities\n");
  goto err_set_interrupt;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev,
   "Unable to allocate memory for queue vectors\n");
  goto err_alloc_q_vectors;
 }






 if ((VAR_1->vf_res->vf_cap_flags & VAR_0) &&
     VAR_1->num_tc)
  FUNC_1(&VAR_1->pdev->dev, "ADq Enabled, %u TCs created",
    VAR_1->num_tc);

 FUNC_1(&VAR_1->pdev->dev, "Multiqueue %s: Queue pair count = %u",
   (VAR_1->num_active_queues > 1) ? "Enabled" : "Disabled",
   VAR_1->num_active_queues);

 return 0;
err_alloc_q_vectors:
 FUNC_5(VAR_1);
err_set_interrupt:
 FUNC_4(VAR_1);
err_alloc_queues:
 return VAR_2;
}
