
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct vnic_dev {int* args; int (* devcmd_rtn ) (struct vnic_dev*,int ,int) ;TYPE_8__* devcmd2; } ;
struct TYPE_12__ {int descs; } ;
struct TYPE_14__ {TYPE_2__* ctrl; TYPE_1__ ring; } ;
struct TYPE_15__ {scalar_t__ base_addr; int descs; } ;
struct TYPE_16__ {int color; unsigned int posted; TYPE_3__ wq; TYPE_6__ results_ring; TYPE_2__* wq_ctrl; int cmd_ring; int result; void* result_size; } ;
struct TYPE_13__ {int fetch_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vnic_dev*,int ,int) ;
 int FUNC_1 (struct vnic_dev*,TYPE_3__*,void*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,unsigned int,unsigned int,int ,int ) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int,int ) ;
 int FUNC_6 (struct vnic_dev*,char*) ;
 int FUNC_7 (struct vnic_dev*,TYPE_6__*,void*,int ) ;
 int FUNC_8 (struct vnic_dev*,TYPE_6__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(struct vnic_dev *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;

 if (VAR_7->devcmd2)
  return 0;

 VAR_7->devcmd2 = FUNC_5(sizeof(*VAR_7->devcmd2), VAR_5);
 if (!VAR_7->devcmd2)
  return -VAR_4;

 VAR_7->devcmd2->color = 1;
 VAR_7->devcmd2->result_size = VAR_2;
 VAR_8 = FUNC_1(VAR_7, &VAR_7->devcmd2->wq, VAR_2,
        VAR_1);
 if (VAR_8)
  goto err_free_devcmd2;

 VAR_9 = FUNC_3(&VAR_7->devcmd2->wq.ctrl->fetch_index);
 if (VAR_9 == 0xFFFFFFFF) {
  FUNC_6(VAR_7, "Fatal error in devcmd2 init - hardware surprise removal\n");
  VAR_8 = -VAR_3;
  goto err_free_wq;
 }

 FUNC_2(&VAR_7->devcmd2->wq, 0, VAR_9, VAR_9, 0,
      0);
 VAR_7->devcmd2->posted = VAR_9;
 FUNC_10(&VAR_7->devcmd2->wq);

 VAR_8 = FUNC_7(VAR_7, &VAR_7->devcmd2->results_ring,
           VAR_2, VAR_1);
 if (VAR_8)
  goto err_disable_wq;

 VAR_7->devcmd2->result = VAR_7->devcmd2->results_ring.descs;
 VAR_7->devcmd2->cmd_ring = VAR_7->devcmd2->wq.ring.descs;
 VAR_7->devcmd2->wq_ctrl = VAR_7->devcmd2->wq.ctrl;
 VAR_7->args[0] = (u64)VAR_7->devcmd2->results_ring.base_addr |
   VAR_6;
 VAR_7->args[1] = VAR_2;

 VAR_8 = FUNC_0(VAR_7, VAR_0, 1000);
 if (VAR_8)
  goto err_free_desc_ring;

 VAR_7->devcmd_rtn = FUNC_0;

 return 0;

err_free_desc_ring:
 FUNC_8(VAR_7, &VAR_7->devcmd2->results_ring);
err_disable_wq:
 FUNC_9(&VAR_7->devcmd2->wq);
err_free_wq:
 FUNC_11(&VAR_7->devcmd2->wq);
err_free_devcmd2:
 FUNC_4(VAR_7->devcmd2);
 VAR_7->devcmd2 = ((void*)0);

 return VAR_8;
}
