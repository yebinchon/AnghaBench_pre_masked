
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {int* direct_mw_to_bar; int self_shared_dma; int self_shared; TYPE_1__* stdev; int peer_shared; int self_partition; int mmio_peer_ctrl; int nr_rsvd_luts; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* pdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct switchtec_ntb*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct switchtec_ntb*) ;

__attribute__((used)) static int FUNC_7(struct switchtec_ntb *VAR_3)
{
 int VAR_4 = VAR_3->direct_mw_to_bar[0];
 int VAR_5;

 VAR_3->nr_rsvd_luts++;
 VAR_3->self_shared = FUNC_3(&VAR_3->stdev->pdev->dev,
      VAR_2,
      &VAR_3->self_shared_dma,
      VAR_1);
 if (!VAR_3->self_shared) {
  FUNC_2(&VAR_3->stdev->dev,
   "unable to allocate memory for shared mw\n");
  return -VAR_0;
 }

 FUNC_6(VAR_3);

 VAR_5 = FUNC_0(VAR_3, VAR_3->mmio_peer_ctrl, 0,
     VAR_3->self_partition,
     VAR_3->self_shared_dma);
 if (VAR_5)
  goto unalloc_and_exit;

 VAR_3->peer_shared = FUNC_5(VAR_3->stdev->pdev, VAR_4, VAR_2);
 if (!VAR_3->peer_shared) {
  VAR_5 = -VAR_0;
  goto unalloc_and_exit;
 }

 FUNC_1(&VAR_3->stdev->dev, "Shared MW Ready\n");
 return 0;

unalloc_and_exit:
 FUNC_4(&VAR_3->stdev->pdev->dev, VAR_2,
     VAR_3->self_shared, VAR_3->self_shared_dma);

 return VAR_5;
}
