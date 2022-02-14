
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracefs_mount_opts {scalar_t__ mode; int gid; int uid; } ;
struct tracefs_fs_info {struct tracefs_mount_opts mount_opts; } ;
struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct tracefs_fs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_4, struct dentry *VAR_5)
{
 struct tracefs_fs_info *VAR_6 = VAR_5->d_sb->s_fs_info;
 struct tracefs_mount_opts *VAR_7 = &VAR_6->mount_opts;

 if (!FUNC_4(VAR_7->uid, VAR_1))
  FUNC_3(VAR_4, ",uid=%u",
      FUNC_1(&VAR_3, VAR_7->uid));
 if (!FUNC_2(VAR_7->gid, VAR_0))
  FUNC_3(VAR_4, ",gid=%u",
      FUNC_0(&VAR_3, VAR_7->gid));
 if (VAR_7->mode != VAR_2)
  FUNC_3(VAR_4, ",mode=%o", VAR_7->mode);

 return 0;
}
