
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rproc_vring {TYPE_2__* rvdev; int notifyid; } ;
struct rproc {scalar_t__ table_ptr; int notifyids; } ;
struct fw_rsc_vdev {TYPE_1__* vring; } ;
struct TYPE_4__ {int rsc_offset; struct rproc_vring* vring; struct rproc* rproc; } ;
struct TYPE_3__ {int notifyid; scalar_t__ da; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct rproc_vring *VAR_0)
{
 struct rproc *VAR_1 = VAR_0->rvdev->rproc;
 int VAR_2 = VAR_0->rvdev->vring - VAR_0;
 struct fw_rsc_vdev *VAR_3;

 FUNC_0(&VAR_1->notifyids, VAR_0->notifyid);


 VAR_3 = (void *)VAR_1->table_ptr + VAR_0->rvdev->rsc_offset;
 VAR_3->vring[VAR_2].da = 0;
 VAR_3->vring[VAR_2].notifyid = -1;
}
