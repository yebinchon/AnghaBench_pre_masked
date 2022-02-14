
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kstatfs {long long f_blocks; long long f_bfree; long long f_bavail; long long f_files; long long f_ffree; int f_type; int f_namelen; int f_fsid; int f_bsize; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,long long*,long long*,long long*,long long*,long long*,int *,int,int *) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, struct kstatfs *VAR_2)
{





 int VAR_3;
 long long VAR_4;
 long long VAR_5;
 long long VAR_6;
 long long VAR_7;
 long long VAR_8;

 VAR_3 = FUNC_0(VAR_1->d_sb->s_fs_info,
   &VAR_2->f_bsize, &VAR_4, &VAR_5, &VAR_6, &VAR_7,
   &VAR_8, &VAR_2->f_fsid, sizeof(VAR_2->f_fsid),
   &VAR_2->f_namelen);
 if (VAR_3)
  return VAR_3;
 VAR_2->f_blocks = VAR_4;
 VAR_2->f_bfree = VAR_5;
 VAR_2->f_bavail = VAR_6;
 VAR_2->f_files = VAR_7;
 VAR_2->f_ffree = VAR_8;
 VAR_2->f_type = VAR_0;
 return 0;
}
