
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_mount_opts {int rp_size; } ;
struct jffs2_sb_info {int resv_blocks_write; int sector_size; int nospc_dirty_size; int nr_erasing_blocks; int unchecked_size; int erasing_size; scalar_t__ free_size; scalar_t__ dirty_size; struct jffs2_mount_opts mount_opts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct jffs2_sb_info *VAR_1)
{
 uint32_t VAR_2;
 struct jffs2_mount_opts *VAR_3 = &VAR_1->mount_opts;

 VAR_2 = VAR_1->dirty_size + VAR_1->free_size + VAR_1->unchecked_size +
  VAR_1->erasing_size - VAR_1->resv_blocks_write * VAR_1->sector_size
  - VAR_1->nospc_dirty_size;

 if (VAR_2 < 2 * VAR_3->rp_size)
  FUNC_1(1, "rpsize %u, dirty_size %u, free_size %u, "
     "erasing_size %u, unchecked_size %u, "
     "nr_erasing_blocks %u, avail %u, resrv %u\n",
     VAR_3->rp_size, VAR_1->dirty_size, VAR_1->free_size,
     VAR_1->erasing_size, VAR_1->unchecked_size,
     VAR_1->nr_erasing_blocks, VAR_2, VAR_1->nospc_dirty_size);

 if (VAR_2 > VAR_3->rp_size)
  return 1;


 if (FUNC_0(VAR_0))
  return 1;

 FUNC_1(1, "forbid writing\n");
 return 0;
}
