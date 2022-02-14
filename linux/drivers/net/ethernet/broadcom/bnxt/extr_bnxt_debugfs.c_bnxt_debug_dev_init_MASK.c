
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct bnxt_cp_ring_info {int dim; } ;
struct bnxt {int cp_nr_rings; TYPE_1__** bnapi; void* debugfs_pdev; int pdev; } ;
struct TYPE_2__ {scalar_t__ rx_ring; struct bnxt_cp_ring_info cp_ring; } ;


 void* VAR_0 ;
 void* FUNC_0 (char const*,void*) ;
 int FUNC_1 (int *,int,struct dentry*) ;
 char* FUNC_2 (int ) ;

void FUNC_3(struct bnxt *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1->pdev);
 struct dentry *VAR_3;
 int VAR_4;

 VAR_1->debugfs_pdev = FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_0("dim", VAR_1->debugfs_pdev);


 for (VAR_4 = 0; VAR_4 < VAR_1->cp_nr_rings; VAR_4++) {
  struct bnxt_cp_ring_info *VAR_5 = &VAR_1->bnapi[VAR_4]->cp_ring;

  if (VAR_5 && VAR_1->bnapi[VAR_4]->rx_ring)
   FUNC_1(&VAR_5->dim, VAR_4, VAR_3);
 }
}
