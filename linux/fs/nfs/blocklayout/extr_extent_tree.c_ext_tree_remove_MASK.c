
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_layout {int bl_ext_lock; int bl_ext_rw; int bl_ext_ro; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

int FUNC_5(struct pnfs_block_layout *VAR_1, bool VAR_2,
  sector_t VAR_3, sector_t VAR_4)
{
 int VAR_5, VAR_6;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->bl_ext_lock);
 VAR_5 = FUNC_2(&VAR_1->bl_ext_ro, VAR_3, VAR_4, &VAR_0);
 if (VAR_2) {
  VAR_6 = FUNC_2(&VAR_1->bl_ext_rw, VAR_3, VAR_4, &VAR_0);
  if (!VAR_5)
   VAR_5 = VAR_6;
 }
 FUNC_4(&VAR_1->bl_ext_lock);

 FUNC_1(&VAR_0);
 return VAR_5;
}
