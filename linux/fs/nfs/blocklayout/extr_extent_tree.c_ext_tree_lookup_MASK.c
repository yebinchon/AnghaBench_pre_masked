
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_layout {int bl_ext_lock; int bl_ext_rw; int bl_ext_ro; } ;
struct pnfs_block_extent {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int *,int ,struct pnfs_block_extent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(struct pnfs_block_layout *VAR_0, sector_t VAR_1,
     struct pnfs_block_extent *VAR_2, bool VAR_3)
{
 bool VAR_4 = 0;

 FUNC_1(&VAR_0->bl_ext_lock);
 if (!VAR_3)
  VAR_4 = FUNC_0(&VAR_0->bl_ext_ro, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_0(&VAR_0->bl_ext_rw, VAR_1, VAR_2);
 FUNC_2(&VAR_0->bl_ext_lock);

 return VAR_4;
}
