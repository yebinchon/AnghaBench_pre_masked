
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dentry_lock {scalar_t__ dl_count; } ;
struct inode {int dummy; } ;
struct dentry {int d_flags; int d_sb; struct ocfs2_dentry_lock* d_fsdata; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,char*,unsigned long long,int,struct dentry*) ;
 int FUNC_5 (int,char*,struct dentry*,scalar_t__) ;
 int FUNC_6 (int ,struct ocfs2_dentry_lock*) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_2, struct inode *VAR_3)
{
 struct ocfs2_dentry_lock *VAR_4 = VAR_2->d_fsdata;

 if (!VAR_4) {




  if (!(VAR_2->d_flags & VAR_0) &&
      !FUNC_2(VAR_2)) {
   unsigned long long VAR_5 = 0ULL;
   if (VAR_3)
    VAR_5 = (unsigned long long)FUNC_0(VAR_3)->ip_blkno;
   FUNC_4(VAR_1, "Dentry is missing cluster lock. "
        "inode: %llu, d_flags: 0x%x, d_name: %pd\n",
        VAR_5, VAR_2->d_flags, VAR_2);
  }

  goto out;
 }

 FUNC_5(VAR_4->dl_count == 0, "dentry: %pd, count: %u\n",
   VAR_2, VAR_4->dl_count);

 FUNC_6(FUNC_1(VAR_2->d_sb), VAR_4);

out:
 FUNC_3(VAR_3);
}
