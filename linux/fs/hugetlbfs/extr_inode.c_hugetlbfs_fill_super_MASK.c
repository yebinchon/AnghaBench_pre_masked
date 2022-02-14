
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; struct hugetlbfs_sb_info* s_fs_info; } ;
struct hugetlbfs_sb_info {struct hugetlbfs_sb_info* spool; int mode; int gid; int uid; int free_inodes; int max_inodes; int hstate; int stat_lock; } ;
struct hugetlbfs_fs_context {int max_hpages; int min_hpages; int hstate; int mode; int gid; int uid; int nr_inodes; } ;
struct fs_context {struct hugetlbfs_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct hugetlbfs_sb_info* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct super_block*,struct hugetlbfs_fs_context*) ;
 int VAR_4 ;
 int FUNC_5 (struct hugetlbfs_sb_info*) ;
 struct hugetlbfs_sb_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct super_block *VAR_5, struct fs_context *VAR_6)
{
 struct hugetlbfs_fs_context *VAR_7 = VAR_6->fs_private;
 struct hugetlbfs_sb_info *VAR_8;

 VAR_8 = FUNC_6(sizeof(struct hugetlbfs_sb_info), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_5->s_fs_info = VAR_8;
 FUNC_7(&VAR_8->stat_lock);
 VAR_8->hstate = VAR_7->hstate;
 VAR_8->max_inodes = VAR_7->nr_inodes;
 VAR_8->free_inodes = VAR_7->nr_inodes;
 VAR_8->spool = ((void*)0);
 VAR_8->uid = VAR_7->uid;
 VAR_8->gid = VAR_7->gid;
 VAR_8->mode = VAR_7->mode;






 if (VAR_7->max_hpages != -1 || VAR_7->min_hpages != -1) {
  VAR_8->spool = FUNC_3(VAR_7->hstate,
           VAR_7->max_hpages,
           VAR_7->min_hpages);
  if (!VAR_8->spool)
   goto out_free;
 }
 VAR_5->s_maxbytes = VAR_3;
 VAR_5->s_blocksize = FUNC_2(VAR_7->hstate);
 VAR_5->s_blocksize_bits = FUNC_1(VAR_7->hstate);
 VAR_5->s_magic = VAR_2;
 VAR_5->s_op = &VAR_4;
 VAR_5->s_time_gran = 1;
 VAR_5->s_root = FUNC_0(FUNC_4(VAR_5, VAR_7));
 if (!VAR_5->s_root)
  goto out_free;
 return 0;
out_free:
 FUNC_5(VAR_8->spool);
 FUNC_5(VAR_8);
 return -VAR_0;
}
