
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int zone_count; struct sm_ftl* cache_data; struct sm_ftl* zones; struct sm_ftl* cis_buffer; int free_sectors; struct sm_ftl* lba_to_phys_table; int initialized; int * trans; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;


 int FUNC_0 (struct mtd_blktrans_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sm_ftl*) ;
 int FUNC_3 (struct sm_ftl*) ;

__attribute__((used)) static void FUNC_4(struct mtd_blktrans_dev *VAR_0)
{
 struct sm_ftl *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_1->trans = ((void*)0);

 for (VAR_2 = 0 ; VAR_2 < VAR_1->zone_count; VAR_2++) {

  if (!VAR_1->zones[VAR_2].initialized)
   continue;

  FUNC_2(VAR_1->zones[VAR_2].lba_to_phys_table);
  FUNC_1(&VAR_1->zones[VAR_2].free_sectors);
 }

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->cis_buffer);
 FUNC_2(VAR_1->zones);
 FUNC_2(VAR_1->cache_data);
 FUNC_2(VAR_1);
}
