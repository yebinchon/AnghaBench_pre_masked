
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {int self_shared_dma; int self_partition; int mmio_peer_ctrl; TYPE_1__* stdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct switchtec_ntb*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct switchtec_ntb*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct switchtec_ntb *VAR_0)
{
 int VAR_1;

 if (FUNC_1(VAR_0))
  return 0;

 FUNC_2(&VAR_0->stdev->dev, "reinitialize shared memory window\n");
 VAR_1 = FUNC_0(VAR_0, VAR_0->mmio_peer_ctrl, 0,
     VAR_0->self_partition,
     VAR_0->self_shared_dma);
 return VAR_1;
}
