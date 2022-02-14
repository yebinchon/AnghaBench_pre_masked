
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* dmabuf; int bmbx_size; } ;
struct TYPE_6__ {TYPE_3__ bmbx; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; TYPE_1__* pcidev; } ;
struct lpfc_bmbx {int dummy; } ;
struct TYPE_8__ {int phys; int virt; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_0)
{
 FUNC_0(&VAR_0->pcidev->dev,
     VAR_0->sli4_hba.bmbx.bmbx_size,
     VAR_0->sli4_hba.bmbx.dmabuf->virt,
     VAR_0->sli4_hba.bmbx.dmabuf->phys);

 FUNC_1(VAR_0->sli4_hba.bmbx.dmabuf);
 FUNC_2(&VAR_0->sli4_hba.bmbx, 0, sizeof(struct lpfc_bmbx));
}
