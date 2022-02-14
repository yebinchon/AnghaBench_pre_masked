
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kstatfs {long f_blocks; long f_bavail; long f_bfree; int f_namelen; int f_ffree; int f_files; int f_bsize; int f_type; } ;
struct hugetlbfs_sb_info {int stat_lock; int free_inodes; int max_inodes; TYPE_1__* spool; } ;
struct hstate {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {long max_hpages; long used_hpages; int lock; } ;


 int VAR_0 ;
 struct hugetlbfs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 struct hstate* FUNC_2 (int ) ;
 int FUNC_3 (struct hstate*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct hugetlbfs_sb_info *VAR_4 = FUNC_0(VAR_2->d_sb);
 struct hstate *VAR_5 = FUNC_2(FUNC_1(VAR_2));

 VAR_3->f_type = VAR_0;
 VAR_3->f_bsize = FUNC_3(VAR_5);
 if (VAR_4) {
  FUNC_4(&VAR_4->stat_lock);


  if (VAR_4->spool) {
   long VAR_6;

   FUNC_4(&VAR_4->spool->lock);
   VAR_3->f_blocks = VAR_4->spool->max_hpages;
   VAR_6 = VAR_4->spool->max_hpages
    - VAR_4->spool->used_hpages;
   VAR_3->f_bavail = VAR_3->f_bfree = VAR_6;
   FUNC_5(&VAR_4->spool->lock);
   VAR_3->f_files = VAR_4->max_inodes;
   VAR_3->f_ffree = VAR_4->free_inodes;
  }
  FUNC_5(&VAR_4->stat_lock);
 }
 VAR_3->f_namelen = VAR_1;
 return 0;
}
