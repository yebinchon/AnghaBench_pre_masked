
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {int nr_rsvd_luts; int self_shared_dma; scalar_t__ self_shared; TYPE_1__* stdev; scalar_t__ peer_shared; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct switchtec_ntb *VAR_1)
{
 if (VAR_1->peer_shared)
  FUNC_1(VAR_1->stdev->pdev, VAR_1->peer_shared);

 if (VAR_1->self_shared)
  FUNC_0(&VAR_1->stdev->pdev->dev, VAR_0,
      VAR_1->self_shared,
      VAR_1->self_shared_dma);
 VAR_1->nr_rsvd_luts--;
}
