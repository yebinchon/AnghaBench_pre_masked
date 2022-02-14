
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** val; } ;
struct kstatfs {int f_bsize; int f_blocks; unsigned long f_bavail; unsigned long f_bfree; TYPE_1__ f_fsid; int f_namelen; scalar_t__ f_ffree; scalar_t__ f_files; void* f_type; } ;
struct jffs2_sb_info {int flash_size; unsigned long dirty_size; unsigned long free_size; unsigned long sector_size; unsigned long resv_blocks_write; int erase_completion_lock; TYPE_2__* mtd; } ;
struct dentry {int d_sb; } ;
struct TYPE_4__ {void* index; } ;


 int VAR_0 ;
 struct jffs2_sb_info* FUNC_0 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct jffs2_sb_info *VAR_5 = FUNC_0(VAR_3->d_sb);
 unsigned long VAR_6;

 VAR_4->f_type = VAR_1;
 VAR_4->f_bsize = 1 << VAR_2;
 VAR_4->f_blocks = VAR_5->flash_size >> VAR_2;
 VAR_4->f_files = 0;
 VAR_4->f_ffree = 0;
 VAR_4->f_namelen = VAR_0;
 VAR_4->f_fsid.val[0] = VAR_1;
 VAR_4->f_fsid.val[1] = VAR_5->mtd->index;

 FUNC_1(&VAR_5->erase_completion_lock);
 VAR_6 = VAR_5->dirty_size + VAR_5->free_size;
 if (VAR_6 > VAR_5->sector_size * VAR_5->resv_blocks_write)
  VAR_6 -= VAR_5->sector_size * VAR_5->resv_blocks_write;
 else
  VAR_6 = 0;
 FUNC_2(&VAR_5->erase_completion_lock);

 VAR_4->f_bavail = VAR_4->f_bfree = VAR_6 >> VAR_2;

 return 0;
}
