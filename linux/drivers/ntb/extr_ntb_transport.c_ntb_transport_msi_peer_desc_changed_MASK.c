
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_transport_ctx {int qp_count; TYPE_2__* ndev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ntb_transport_ctx*,int) ;

__attribute__((used)) static void FUNC_2(struct ntb_transport_ctx *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->ndev->pdev->dev, "Peer MSI descriptors changed");

 for (VAR_1 = 0; VAR_1 < VAR_0->qp_count; VAR_1++)
  FUNC_1(VAR_0, VAR_1);
}
