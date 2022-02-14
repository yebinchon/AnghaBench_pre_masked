
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_growth; int min_idx_lebs; scalar_t__ page_budget; int dd_growth; int data_growth; } ;
struct ubifs_info {int max_idx_node_sz; int space_lock; TYPE_1__ bi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*) ;

void FUNC_3(struct ubifs_info *VAR_1)
{
 FUNC_0(&VAR_1->space_lock);

 VAR_1->bi.idx_growth -= VAR_1->max_idx_node_sz << VAR_0;

 VAR_1->bi.data_growth -= VAR_1->bi.page_budget;

 VAR_1->bi.dd_growth += VAR_1->bi.page_budget;

 VAR_1->bi.min_idx_lebs = FUNC_2(VAR_1);
 FUNC_1(&VAR_1->space_lock);
}
