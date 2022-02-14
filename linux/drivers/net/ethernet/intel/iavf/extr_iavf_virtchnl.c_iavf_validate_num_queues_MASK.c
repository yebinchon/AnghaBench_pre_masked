
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_vsi_resource {scalar_t__ num_queue_pairs; } ;
struct iavf_adapter {TYPE_2__* vf_res; TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ num_queue_pairs; int num_vsis; struct virtchnl_vsi_resource* vsi_res; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_1)
{
 if (VAR_1->vf_res->num_queue_pairs > VAR_0) {
  struct virtchnl_vsi_resource *VAR_2;
  int VAR_3;

  FUNC_0(&VAR_1->pdev->dev, "Received %d queues, but can only have a max of %d\n",
    VAR_1->vf_res->num_queue_pairs,
    VAR_0);
  FUNC_0(&VAR_1->pdev->dev, "Fixing by reducing queues to %d\n",
    VAR_0);
  VAR_1->vf_res->num_queue_pairs = VAR_0;
  for (VAR_3 = 0; VAR_3 < VAR_1->vf_res->num_vsis; VAR_3++) {
   VAR_2 = &VAR_1->vf_res->vsi_res[VAR_3];
   VAR_2->num_queue_pairs = VAR_0;
  }
 }
}
