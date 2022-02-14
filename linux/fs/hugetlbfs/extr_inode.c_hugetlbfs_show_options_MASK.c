
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hugetlbfs_sb_info {int mode; int max_inodes; int gid; int uid; int hstate; struct hugepage_subpool* spool; } ;
struct hugepage_subpool {int max_hpages; int min_hpages; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hugetlbfs_sb_info* FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int *,int ) ;
 unsigned long long FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct seq_file*,char*,unsigned long long,...) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 struct hugetlbfs_sb_info *VAR_5 = FUNC_0(VAR_4->d_sb);
 struct hugepage_subpool *VAR_6 = VAR_5->spool;
 unsigned long VAR_7 = FUNC_5(VAR_5->hstate);
 unsigned VAR_8 = FUNC_4(VAR_5->hstate);
 char VAR_9;

 if (!FUNC_7(VAR_5->uid, VAR_1))
  FUNC_6(VAR_3, ",uid=%u",
      FUNC_2(&VAR_2, VAR_5->uid));
 if (!FUNC_3(VAR_5->gid, VAR_0))
  FUNC_6(VAR_3, ",gid=%u",
      FUNC_1(&VAR_2, VAR_5->gid));
 if (VAR_5->mode != 0755)
  FUNC_6(VAR_3, ",mode=%o", VAR_5->mode);
 if (VAR_5->max_inodes != -1)
  FUNC_6(VAR_3, ",nr_inodes=%lu", VAR_5->max_inodes);

 VAR_7 /= 1024;
 VAR_9 = 'K';
 if (VAR_7 >= 1024) {
  VAR_7 /= 1024;
  VAR_9 = 'M';
 }
 FUNC_6(VAR_3, ",pagesize=%lu%c", VAR_7, VAR_9);
 if (VAR_6) {
  if (VAR_6->max_hpages != -1)
   FUNC_6(VAR_3, ",size=%llu",
       (unsigned long long)VAR_6->max_hpages << VAR_8);
  if (VAR_6->min_hpages != -1)
   FUNC_6(VAR_3, ",min_size=%llu",
       (unsigned long long)VAR_6->min_hpages << VAR_8);
 }
 return 0;
}
