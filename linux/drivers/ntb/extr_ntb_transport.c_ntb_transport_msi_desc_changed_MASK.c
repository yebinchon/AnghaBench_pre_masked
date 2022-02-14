
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_transport_ctx {int qp_count; int msi_db_mask; TYPE_2__* ndev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct ntb_transport_ctx*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ntb_transport_ctx *VAR_1 = VAR_0;
 int VAR_2;

 FUNC_0(&VAR_1->ndev->pdev->dev, "MSI descriptors changed");

 for (VAR_2 = 0; VAR_2 < VAR_1->qp_count; VAR_2++)
  FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_1->ndev, VAR_1->msi_db_mask);
}
