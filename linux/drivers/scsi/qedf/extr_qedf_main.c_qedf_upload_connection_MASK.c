
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedf_rport {int handle; TYPE_2__* rdata; } ;
struct qedf_ctx {TYPE_3__* pdev; int cdev; int dbg_ctx; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int (* release_conn ) (int ,int ) ;int (* destroy_conn ) (int ,int ,int ) ;} ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_6__ {TYPE_1__ ids; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,void*,int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct qedf_ctx *VAR_4,
 struct qedf_rport *VAR_5)
{
 void *VAR_6;
 dma_addr_t VAR_7;





 VAR_6 = FUNC_1(&VAR_4->pdev->dev, VAR_2,
  &VAR_7, VAR_0);

 FUNC_0(&(VAR_4->dbg_ctx), VAR_1, "Uploading connection "
     "port_id=%06x.\n", VAR_5->rdata->ids.port_id);

 VAR_3->destroy_conn(VAR_4->cdev, VAR_5->handle, VAR_7);
 VAR_3->release_conn(VAR_4->cdev, VAR_5->handle);

 FUNC_2(&VAR_4->pdev->dev, VAR_2, VAR_6,
     VAR_7);
}
