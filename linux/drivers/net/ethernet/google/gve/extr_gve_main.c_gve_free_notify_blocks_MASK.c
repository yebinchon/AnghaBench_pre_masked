
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gve_priv {int num_ntfy_blks; size_t mgmt_msix_idx; TYPE_2__* msix_vectors; TYPE_1__* pdev; struct gve_priv* ntfy_blocks; int ntfy_block_bus; } ;
struct gve_notify_block {int num_ntfy_blks; size_t mgmt_msix_idx; TYPE_2__* msix_vectors; TYPE_1__* pdev; struct gve_notify_block* ntfy_blocks; int ntfy_block_bus; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int,struct gve_priv*,int ) ;
 int FUNC_1 (int ,struct gve_priv*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct gve_priv *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_ntfy_blks; VAR_1++) {
  struct gve_notify_block *VAR_2 = &VAR_0->ntfy_blocks[VAR_1];
  int VAR_3 = VAR_1;

  FUNC_2(VAR_0->msix_vectors[VAR_3].vector,
          ((void*)0));
  FUNC_1(VAR_0->msix_vectors[VAR_3].vector, VAR_2);
 }
 FUNC_0(&VAR_0->pdev->dev,
     VAR_0->num_ntfy_blks * sizeof(*VAR_0->ntfy_blocks),
     VAR_0->ntfy_blocks, VAR_0->ntfy_block_bus);
 VAR_0->ntfy_blocks = ((void*)0);
 FUNC_1(VAR_0->msix_vectors[VAR_0->mgmt_msix_idx].vector, VAR_0);
 FUNC_4(VAR_0->pdev);
 FUNC_3(VAR_0->msix_vectors);
 VAR_0->msix_vectors = ((void*)0);
}
